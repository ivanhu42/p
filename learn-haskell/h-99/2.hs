-- Find the last but one element of a list.

h99_2 :: [a] -> a
h99_2 [x]    = error "error: to short a list"
h99_2 [x, y] = x
h99_2 (_:xs) = h99_2 xs

r = h99_2 [1, 2, 3]

main = do
  print r
