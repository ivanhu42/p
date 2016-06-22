-- Reverse a list.

h99_5 :: [a] -> [a]
h99_5 [] = []
h99_5 [x] = [x]
h99_5 (x:xs) = h99_5 xs ++ [x]

r = h99_5 [1, 2, 3, 4]

main = do
  print r
