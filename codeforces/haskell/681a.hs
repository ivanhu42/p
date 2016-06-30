module Main where

main = do
  w <- getLine
  w0 <- getContents
  let pool = [niceForm x | x <- (lines w0)]
  let r = solution pool
  if elem True r
  then putStrLn "YES"
  else putStrLn "NO"

niceForm :: String -> (Int,Int)
niceForm w = (n0,n1)
  where [n0,n1] = map read (tail $ words w)

solution :: [(Int,Int)] -> [Bool]
solution [] = []
solution (x:xs) = (((fst x) >= 2400) && ((snd x) > (fst x))) : solution xs
