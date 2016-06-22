-- Find the number of elements of a list.

h99_4 :: [a] -> Int
h99_4 []     = 0
h99_4 [x]    = 1
h99_4 (x:xs) = 1 + h99_4 xs

r = h99_4 [1, 2, 3, 4]

main = do
  print r
