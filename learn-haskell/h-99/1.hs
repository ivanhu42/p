--  Find the last element of a list.

h99_1 :: [a] -> a
h99_1 []     = error "error: empty list"
h99_1 [x]    = x
h99_1 (_:xs) = h99_1 xs

r = h99_1 [1, 2, 3]

main = do
  print r
