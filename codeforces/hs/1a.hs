module Main where
  
solution :: Integer -> Integer -> Integer -> Integer
solution n m a = (niceDiv n a) * (niceDiv m a)

niceDiv :: Integer -> Integer -> Integer
niceDiv s n
  | (mod s n) == 0 = div s n
  | otherwise      = (div s n) + 1

main = do
  w <- getLine
  let [n,m,a] = [read x :: Integer | x <- (words w)]
  print $ solution n m a

