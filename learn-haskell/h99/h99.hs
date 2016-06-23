-- P1: find the last element of a list
p1 :: [a] -> a
p1 []     = error "empty list"
p1 [x]    = x
p1 (_:xs) = p1 xs

-- P2: find the last but one element of a list
p2 :: [a] -> a
p2 []     = error "empty list"
p2 [x]    = error "too short a list"
p2 [x, y] = x
p2 (_:xs) = p2 xs

-- P3: find the K'th element of a list
p3 :: [a] -> Int -> a
p3 [] _     = error "overflow"
p3 (x:xs) 1 = x
p3 (x:xs) n = p3 xs (n - 1)

-- P4: find the number of elements of a list
p4 :: [a] -> Int
p4 []     = 0
p4 (x:xs) = 1 + p4 xs

-- P5: reverse a list
p5 :: [a] -> [a]
p5 [] = []
p5 [x] = [x]
p5 (x:xs) = p5 xs ++ [x]

-- P6: find out whether a list is a palindrome
p6 :: (Eq a) => [a] -> Bool
p6 [] = True
p6 xs = xs == (p5 xs)

-- P7: flatten a nested list structure
data NestedList a = Elem a | List [NestedList a]
p7 :: NestedList a -> [a]
p7 (Elem a) = [a]
p7 (List []) = []
p7 (List (x:xs)) = p7 x ++ p7 (List xs)

-- P8: eliminate consecutive duplicates of list elements
p8 :: (Eq a) => [a] -> [a]
p8 []     = []
p8 (x:xs) = x : (p8 $ dropWhile (==x) xs)

-- P9: pack consecutive duplicates of list elements into sublists
p9 :: (Eq a) => [a] -> [[a]]
p9 []     = []
p9 (x:xs) = (x : takeWhile (== x) xs) : (p9 $ dropWhile (== x) xs)

-- P10: run-length encoding of a list
p10 :: (Eq a) => [a] -> [(Int, a)]
p10 []     = []
p10 (x:xs) = ((length $ x : takeWhile (==x) xs), x) : p10 (dropWhile (==x) xs)
