-- Find out whether a list is a palindrome. A palindrome can be read forward or backward; e.g. (x a m a x).

h99_5 :: (Eq a) => [a] -> [a]
h99_5 [] = []
h99_5 [x] = [x]
h99_5 (x:xs) = h99_5 xs ++ [x]

isSameList :: (Eq a) => [a] -> [a] -> Bool
isSameList [x] [y] | x == y = True
isSameList (x:xs) (y:ys)
  | x == y = isSameList xs ys
  | otherwise = False

h99_6 :: (Eq a) => [a] -> Bool
h99_6 []              = True
h99_6 xs = isSameList xs (h99_5 xs)

r = h99_6 [1, 2, 3, 3, 2, 1]
-- r = h99_6 "hasdjjdsah"
-- r = h99_6 ["1", "2", "2", "1"]

main = do
  print r
