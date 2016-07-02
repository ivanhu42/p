-- author: ivanhu42
-- based on problems from <https://wiki.haskell.org/H-99:_Ninety-Nine_Haskell_Problems>

module Main where

import System.Random
import Data.List

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
p3 :: [a] -> Int -> a
p3 _      n | n <= 0 = errorWithoutStackTrace "p3: illegal index"
p3 []     _          = errorWithoutStackTrace "p3: illegal index"
p3 (x:_)  1          = x
p3 (x:xs) n          = p3 xs (n-1)
-- r3 = p3 [1,2,3,4,5] 3

-- p4: find the number of elements of a list
p4 :: [a] -> Int
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
p10 :: Eq a => [a] -> [(Int, a)]
p10 = map (\x -> ((length x),(head x))) . p9
-- r10 = p10 ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']

-- p11: modified run-length encoding
data ListItem a = Single a | Multiple Int a
  deriving (Show)
p11 :: Eq a => [a] -> [ListItem a]
p11 = map modify . p10
        where
          modify :: (Int,a) -> (ListItem a)
          modify (1,y) = Single y
          modify (n,y) = Multiple n y
-- r11 = p11 ['a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e']

-- p12: decode a run-length encoded list
p12 :: [ListItem a] -> [a]
p12 = concatMap demodify
        where
          demodify :: (ListItem a) -> [a]
          demodify (Single x)     = [x]
          demodify (Multiple n x) = replicate n x
-- r12 = p12 [Multiple 4 'a',Single 'b',Multiple 2 'c',Multiple 2 'a',Single 'd',Multiple 4 'e']

-- p13: run-length encoding of a list (direct solution)
p13 :: Eq a => [a] -> [ListItem a]
p13 = map modify . p10' 1
        where
          modify :: (Int,a) -> (ListItem a)
          modify (1,x) = Single x
          modify (n,x) = Multiple n x
          p10' :: Eq a => Int -> [a] -> [(Int,a)]
          p10' n [x]    = [(n,x)]
          p10' n (x:xs@(y:_))
            | x == y    = p10' (n+1) xs
            | otherwise = (n,x) : p10' 1 xs
-- r13 = p13 "aaaabccaadeeee"

-- p14: duplicate the elements of a list
p14 :: [a] -> [a]
p14 = \x -> p15 x 2
-- r14 = p14 [1,2,3]

-- p15: replicate the elements of a list a given number of times
p15 :: [a] -> Int -> [a]
p15 _  n | n < 1 = errorWithoutStackTrace "illegal replication"
p15 xs n         = concatMap (replicate n) xs
-- r15 = p15 "abc" 3

-- p16: drop every N'th element from a list
p16 :: [a] -> Int -> [a]
p16 = countDrop 1
        where
          countDrop :: Int -> [a] -> Int -> [a]
          countDrop _   []     _ = []
          countDrop cnt (x:xs) n
            | cnt == n           = countDrop 1 xs n
            | otherwise          = x : countDrop (cnt+1) xs n
-- r16 = p16 "abcdefghik" 3

-- p17: split a list into two parts
--      the length of the first part is given
p17 :: [a] -> Int -> ([a],[a])
p17 xs n
  | n < 0 || n > length xs = errorWithoutStackTrace "illegal index"
  | otherwise              = ((take n xs),(drop n xs))
-- r17 = p17 "abcdefghik" 3

-- p18: extract a slice from a list
p18 :: [a] -> Int -> Int -> [a]
p18 xs n0 n1 = drop (n0-1) (take n1 xs)
-- r18 = p18 ['a','b','c','d','e','f','g','h','i','k'] 3 7

-- p19: rotate a list N places to the left
p19 :: [a] -> Int -> [a]
p19 xs n
  | n < 0 || n > length xs = p19 xs (mod n (length xs))
  | otherwise              = (drop n xs) ++ (take n xs)
-- r19 = p19 ['a','b','c','d','e','f','g','h'] 3

-- p20: remove the K'th element from a list
p20 :: Int -> [a] -> (a,[a])
p20 n xs
  | n < 1 || n > length xs = errorWithoutStackTrace "illegal index"
  | otherwise              = ((xs !! (n-1)),(deleteAt xs n))
                               where
                                 deleteAt :: [a] -> Int -> [a]
                                 deleteAt (x:xs) 1 = xs
                                 deleteAt (x:xs) n = x : deleteAt xs (n-1)
-- r20 = p20 2 "abcd"

-- p21: insert an element at a given position into a list
p21 :: a -> [a] -> Int -> [a]
p21 c xs n
  | n < 1 || n > ((length xs) + 1) = errorWithoutStackTrace "illegal index"
  | otherwise                      = take (n-1) xs ++ [c] ++ drop (n-1) xs
-- r21 = p21 'X' "abcd" 2

-- p22: create a list containing all Ints within a given range
p22 :: Int -> Int -> [Int]
p22 n0 n1
  | n0 > n1   = errorWithoutStackTrace "the first number is greater than the second one"
  | n0 == n1  = [n0]
  | otherwise = n0 : p22 (n0+1) n1
-- r22 = p22 4 9

-- p23: extract a given number of randomly selected elements from a list
p23 :: [a] -> Int -> [a]
p23 xs n = map (xs!!) pool
           where pool = take n . nub $ randomRs (0, (length xs) - 1) (mkStdGen 42)
-- r23 = p23 "abcdefgh" 3

-- p24: draw N different random numbers from the set 1..M
p24 :: Int -> Int -> [Int]
p24 n m = p23 (p22 1 m) n
-- r24 = p24 6 49

-- p25: generate a random permutation of the elements of a list
p25 :: [a] -> [a]
p25 xs = map (xs!!) (p23 (p22 0 (len-1)) len)
           where len = length xs
-- r25 = p25 "abcdef"

-- p26: generate the combinations of K distinct objects chosen from the N elements of a list
p26 :: Int -> [a] -> [[a]]
p26 0 _ = [[]]
p26 _ [] = []
p26 n (x:xs) = (map (x:) (p26 (n-1) xs)) ++ p26 n xs
r26 = p26 3 "abcdef"

main = print r26
