module Main where

main = do
  w <- getLine
  let n = read w :: Integer
  putStrLn $ printList $ reverse $ solution n

printList :: Show a => [a] -> String
printList [] = ""
printList (x:xs) = (show x) ++ " " ++ printList xs

solution :: Integer -> [Integer]
solution 1 = [1]
solution n = combine (1 : solution (n - 1))

combine :: [Integer] -> [Integer]
combine [x] = [x]
combine (x:y:ys)
  | x == y    = combine ((y+1):ys)
  | otherwise = x:(y:ys)
