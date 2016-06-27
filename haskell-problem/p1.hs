-- given a list of numbers,
-- choose k numbers from this list,
-- with the sum equal to s.
-- how many possible combinations can we get?

quickSort :: [Int] -> [Int]
quickSort []     = []
quickSort [x]    = [x]
quickSort (x:xs) = quickSort (takeX x xs) ++ [x] ++ quickSort (dropX x xs)

takeX :: Int -> [Int] -> [Int]
takeX _ []    = []
takeX n (x:xs)
  | x < n     = x : takeX n xs
  | otherwise = takeX n xs

dropX :: Int -> [Int] -> [Int]
dropX _ []    = []
dropX n (x:xs)
  | x < n     = dropX n xs
  | otherwise = x : dropX n xs

findCom :: [Int] -> Int -> Int -> [[Int]]
findCom [] _ _              = []
findCom (x:xs) 1 s
  | x == s         = [x] : (findCom xs 1 s)
  | otherwise      = findCom xs 1 s
findCom (x:xs) k s = map (x :) (findCom xs (k - 1) (s - x)) ++ findCom xs k s

trimList :: Eq a => [a] -> [a]
trimList []     = []
trimList (x:xs) = x : trimList (dropWhile (==x) xs)

-- pack-up
solution :: [Int] -> Int -> Int -> [[Int]]
solution xs k s = trimList (findCom (quickSort xs) k s)

r = solution [-1,0,1,2,-1,4,-2,-2] 3 0

main = print r
