-- author: ivanhu42
-- based on problems from <https://wiki.haskell.org/H-99:_Ninety-Nine_Haskell_Problems>

module Main where

-- p1: find the last element of a list
p1 :: [a] -> a
p1 [x]    = x
p1 (x:xs) = p1 xs
-- r1 = p1 [1,2,3,4,5]

-- p2: find the last but one element of a list
p2 :: [a] -> a
p2 [x]    = errorWithoutStackTrace "p2: too short a list"
p2 [x,_]  = x
p2 (x:xs) = p2 xs
-- r2 = p2 [1,2,3,4,5]

-- p3: find the K'th element of a list
--     the first element in the list is number 1
p3 :: [a] -> Integer -> a
p3 _      n | n <= 0 = errorWithoutStackTrace "p3: illegal index"
p3 []     _          = errorWithoutStackTrace "p3: illegal index"
p3 (x:_)  1          = x
p3 (x:xs) n          = p3 xs (n-1)
-- r3 = p3 [1,2,3,4,5] 3

-- p4: find the number of elements of a list
p4 :: [a] -> Integer
p4 []     = 0
p4 (_:xs) = 1 + p4 xs
-- r4 = p4 [1,2,3,4,5]

-- p5: reverse a list
p5 :: [a] -> [a]
p5 []     = []
p5 (x:xs) = p5 xs ++ [x]
-- r5 = p5 [1,2,3,4,5]

-- p6: find out whether a list is a palindrome
--     A palindrome can be read forward or backward
--     e.g. (x a m a x).
p6 :: Eq a => [a] -> Bool
p6 = \x -> x == p5 x
-- r6 = p6 [1,2,3,2,1]

-- p7: flatten a nested list structure
data NestedList a = Elem a | List [NestedList a]
p7 :: NestedList a -> [a]
p7 (Elem x) = [x]
p7 (List x) = concatMap p7 x
-- r7 = p7 (List [Elem 1, List [Elem 2, List [Elem 3, Elem 4], Elem 5]])

-- p8: eliminate consecutive duplicates of list elements
p8 :: Eq a => [a] -> [a]
p8 []         = []
p8 [x]        = [x]
p8 (x:y:ys)
  | x == y    = p8 (y:ys)
  | otherwise = x : p8 (y:ys)
-- r8 = p8 "aaaabccaadeeee"

-- p9: pack consecutive duplicates of list elements into sublists
--     if a list contains repeated elements they should be placed in separate sublists
p9 :: Eq a => [a] -> [[a]]
p9 []     = []
p9 (x:xs) = (x : takeWhile (==x) xs) : p9 (dropWhile (==x) xs)
-- r9 = p9 ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']

-- p10: run-length encoding of a list
--      use the result of problem P09 to implement the so-called run-length encoding data compression method
--      consecutive duplicates of elements are encoded as lists (N E) where N is the number of duplicates of the element E
p10 :: Eq a => [a] -> [(Integer, a)]
p10 = map (\x -> ((p4 x),(head x))) . p9
-- r10 = p10 ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']

-- p11: modified run-length encoding
data ListItem a = Single a | Multiple Integer a
  deriving (Show)
p11 :: Eq a => [a] -> [ListItem a]
p11 = map modify . p10
      where modify (1,y) = Single y
            modify (n,y) = Multiple n y
-- r11 = p11 ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']

-- p12: decode a run-length encoded list
p12 :: [ListItem a] -> [a]
p12 = concatMap demodify
      where demodify (Single x)     = [x]
            demodify (Multiple n x) = replicate n x
            replicate :: Integer -> a -> [a]
            replicate 0 x = []
            replicate n x = x : replicate (n-1) x
-- r12 = p12 [Multiple 4 'a',Single 'b',Multiple 2 'c',Multiple 2 'a',Single 'd',Multiple 4 'e']

-- p13: run-length encoding of a list (direct solution)
p13 :: Eq a => [a] -> [ListItem a]
p13 = map modify . p10' 1
      where modify (1,x) = Single x
            modify (n,x) = Multiple n x
            p10' :: Eq a => Integer -> [a] -> [(Integer,a)]
            p10' n [x] = [(n,x)]
            p10' n (x:xs@(y:_))
              | x == y = p10' (n+1) xs
              | otherwise = (n,x) : p10' 1 xs
-- r13 = p13 "aaaabccaadeeee"

-- p14: duplicate the elements of a list
p14 :: [a] -> [a]
p14 = \x -> p15 x 2
-- r14 = p14 [1,2,3]

-- p15: replicate the elements of a list a given number of times
p15 :: [a] -> Integer -> [a]
p15 _  n | n < 1 = errorWithoutStackTrace "illegal replication"
p15 xs n         = concatMap (replicate n) xs
                   where replicate :: Integer -> a -> [a]
                         replicate 0 _ = []
                         replicate n x = x : replicate (n-1) x
-- r15 = p15 "abc" 3

-- p16: drop every N'th element from a list
p16 :: [a] -> Integer -> [a]
p16 = countDrop 1
      where countDrop :: Integer -> [a] -> Integer -> [a]
            countDrop _ [] _ = []
            countDrop cnt (x:xs) n
              | cnt == n  = countDrop 1 xs n
              | otherwise = x : countDrop (cnt+1) xs n
-- r16 = p16 "abcdefghik" 3

-- p17: split a list into two parts
--      the length of the first part is given
p17 :: [a] -> Integer -> ([a],[a])
p17 xs n
  | n < 0 || n > p4 xs = errorWithoutStackTrace "illegal index"
  | otherwise          = ((l1 xs n),(l2 xs n))
                         where l1 :: [a] -> Integer -> [a]
                               l1 xs     0 = []
                               l1 (x:xs) n = x : l1 xs (n-1)
                               l2 :: [a] -> Integer -> [a]
                               l2 xs     0 = xs
                               l2 (x:xs) n = l2 xs (n-1)
-- r17 = p17 "abcdefghik" 3

-- p18: extract a slice from a list
p18 :: [a] -> Integer -> Integer -> [a]
p18 xs n0 n1
  | n0 < 0 || n1 < 0 || n0 > n1 || n0 > p4 xs || n1 > p4 xs = errorWithoutStackTrace "illegal index"
  | otherwise = dropN (takeN xs n1) (n0-1)
                where dropN :: [a] -> Integer -> [a]
                      dropN xs     0         = xs
                      dropN (x:xs) n         = dropN xs (n-1)
                      takeN :: [a] -> Integer -> [a]
                      takeN xs     0         = []
                      takeN (x:xs) n         = x : takeN xs (n-1)
-- r18 = p18 ['a','b','c','d','e','f','g','h','i','k'] 3 7

-- p19: rotate a list N places to the left
p19 :: [a] -> Integer -> [a]
p19 xs n
  | n < 0 || n > p4 xs = p19 xs (mod n (p4 xs))
  | otherwise = (snd (p17 xs n)) ++ (fst (p17 xs n))
r19 = p19 ['a','b','c','d','e','f','g','h'] 3

-- p20: remove the K'th element from a list
p20 :: Integer -> [a] -> (a,[a])
p20 n xs
  | n < 1 || n > p4 xs = errorWithoutStackTrace "illegal index"
  | otherwise = ((getAt xs n),(deleteAt xs n))
                where getAt :: [a] -> Integer -> a
                      getAt (x:xs) 1 = x
                      getAt (x:xs) n = getAt xs (n-1)
                      deleteAt :: [a] -> Integer -> [a]
                      deleteAt (x:xs) 1 = xs
                      deleteAt (x:xs) n = x : deleteAt xs (n-1)
r20 = p20 2 "abcd"

main = print r20
