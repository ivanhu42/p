module Main where

solution :: Integer -> Integer -> Integer -> Integer
solution n m a = (niceDiv n a) * (niceDiv m a)

niceDiv :: Integer -> Integer -> Integer
niceDiv s n
  | (mod s n) == 0 = div s n
  | otherwise      = (div s n) + 1

safeTail :: [a] -> [a]
safeTail []     = []
safeTail (x:xs) = xs

splitBy :: Char -> [Char] -> [[Char]]
splitBy _ [] = []
splitBy c xs = (takeWhile (/=c) xs) : (splitBy c (safeTail (dropWhile (/=c) xs)))

main = do
  str <- getLine
  let r = map read (splitBy ' ' str)
  print (solution (r !! 0) (r !! 1) (r !! 2))
