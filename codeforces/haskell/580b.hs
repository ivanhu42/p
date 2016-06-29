module Main where

import Data.List (sortBy)

getSum _ []     s _ = (s,[])
getSum a (x:xs) s d
  | (fst x) - (fst a) < d = getSum a xs (s+(snd x)) d
  | otherwise = (s,(x:xs))

getMax _ [] _ _ = 0
getMax pre xs (y:ys) d = max (pre+s) (getMax (pre+s-(snd y)) rs ys d)
  where (s,rs) = getSum y xs 0 d

getTuple :: String -> (Integer,Integer)
getTuple w = (a0,a1)
  where [a0,a1] = [read n :: Integer | n <- (words w)]

main = do
  w0 <- getLine
  let [n,d] = [read n :: Integer | n <- (words w0)]
  w1 <- getContents
  let pool = sortBy (\a0 a1 -> compare (fst a0) (fst a1)) [getTuple x | x <- (lines w1)]
  print $ getMax 0 pool pool d
