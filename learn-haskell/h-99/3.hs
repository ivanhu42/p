-- Find the K'th element of a list. The first element in the list is number 1

h99_3 :: [a] -> Int -> a
h99_3 [] _                   = error "erroe: empty list"
h99_3 xs n | n > (length xs) = error "error: overflow"
h99_3 (x:xs) 1               = x
h99_3 (x:xs) n               = h99_3 xs (n - 1)

r = h99_3 [1, 2, 3, 4, 5] 3

main = do
  print r
