module Main where

main = do
  _ <- getLine
  w <- getLine
  let pool = indexed1 (words w) 0
  if length pool == 0
  then putStrLn "0"
  else putStrLn $ show $ solution pool

indexed1 :: [String] -> Integer -> [Integer]
indexed1 [] _ = []
indexed1 (x:xs) n
  | x == "1"  = n : indexed1 xs (n+1)
  | otherwise = indexed1 xs (n+1)

solution :: [Integer] -> Integer
solution [x] = 1
solution (x:y:ys) = (y - x) * solution (y:ys)
