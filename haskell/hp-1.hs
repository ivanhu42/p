import Data.List (sortBy)

findCombination :: [Int] -> Int -> Int -> [[Int]]
findCombination []     _ _ = []
findCombination (x:xs) 1 s
  | x == s                 = [x] : (findCombination xs 1 s)
  | otherwise              = findCombination xs 1 s
findCombination (x:xs) k s = map (x :) (findCombination xs (k - 1) (s - x)) ++ findCombination xs k s

solution :: [Int] -> Int -> Int -> [[Int]]
solution xs k s = clearList (findCombination (sortBy (\x y -> compare x y) xs) k s)

clearList :: Eq a => [a] -> [a]
clearList []     = []
clearList (x:xs) = x : clearList (dropWhile (==x) xs)

main = do
  w0 <- getLine;
  w1 <- getLine;
  let [k, s] = [read x :: Int | x <- (words w0)]
  let pool   = [read x :: Int | x <- (words w1)]
  let r      = solution pool k s
  putStrLn $ show $ length r
  print r;
