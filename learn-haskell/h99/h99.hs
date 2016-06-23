-- P1: find the last element of a list
p1_1 :: [a] -> a
p1_1 [] = error "empty list"
p1_1 xs = last xs

p1_2 :: [a] -> a
p1_2 [] = error "empty list"
p1_2 xs = (head . reverse) xs

p1_3 :: [a] -> a
p1_3 [] = error "empty list"
p1_3 xs = xs !! (length xs - 1)

p1_4 :: [a] -> a
p1_4 []     = error "empty list"
p1_4 [x]    = x
p1_4 (_:xs) = p1_4 xs

-- P2: find the last but one element of a list
p2_1 :: [a] -> a
p2_1 []  = error "empty list"
p2_1 [x] = error "too short a list"
p2_1 xs  = (head . tail . reverse) xs

p2_2 :: [a] -> a
p2_2 []     = error "empty list"
p2_2 [x]    = error "too short a list"
p2_2 [x, y] = x
p2_2 (_:xs) = p2_2 xs

p2_3 :: [a] -> a
p2_3 []     = error "empty list"
p2_3 [x]    = error "too short a list"
p2_3 xs = xs !! (length xs - 2)

-- P3: find the K'th element of a list
p3_1 :: [a] -> Int -> a
p3_1 [] _     = error "overflow"
p3_1 (x:xs) 1 = x
p3_1 (x:xs) n = p3_1 xs (n - 1)

-- P4: find the number of elements of a list

p4 :: [a] -> Int
p4 []     = 0
p4 [x]    = 1
p4 (x:xs) = 1 + p4 xs

-- P5: reverse a list

p5 :: (Eq a) => [a] -> [a]
p5 [] = []
p5 [x] = [x]
p5 (x:xs) = p5 xs ++ [x]

-- P6: find out whether a list is a palindrome

isSameList :: (Eq a) => [a] -> [a] -> Bool
isSameList [x] [y] | x == y = True
isSameList (x:xs) (y:ys)
  | x == y = isSameList xs ys
  | otherwise = False

p6 :: (Eq a) => [a] -> Bool
p6 []              = True
p6 xs = isSameList xs (p5 xs)

-- P7: flatten a nested list structure

data NestedList a = Elem a | List [NestedList a]
  deriving (Eq)

p7 :: NestedList a -> [a]
p7 (Elem a) = [a]
p7 (List []) = []
p7 (List (x:xs)) = p7 x ++ p7 (List xs)

-- P8: eliminate consecutive duplicates of list elements

p8 :: Eq a => [a] -> [a]
p8 [x] = [x]
p8 (x:ys@(y:_))
  | x == y = p8 ys
  | otherwise = x:(p8 ys)

-- P9: pack consecutive duplicates of list elements into sublists

p9 :: Eq a => [a] -> [[a]]
p9 [] = []
p9 (x:xs) = (x : takeWhile (== x) xs) : p9 (dropWhile (== x) xs)

-- P10: run-length encoding of a list

p10 :: Eq a => [a] -> [(Int, a)]
p10 [] = []
p10 (x:xs) = (length $ x : takeWhile (==x) xs, x) : p10 (dropWhile (==x) xs)


r = p3_1 [1, 2, 3, 4] 2

main = do
  print r
