-- p1:
-- given a list of integers,
-- choose k numbers from this list,
-- with the sum equal to s.
-- how many possible combinations can we get?

quickSort :: [Int] -> [Int]
quickSort []     = []
quickSort [x]    = [x]
quickSort (x:xs) = quickSort (takeXLessFrom x xs) ++ [x] ++ quickSort (dropXLessFrom x xs)

takeXLessFrom :: Int -> [Int] -> [Int]
takeXLessFrom _ []    = []
takeXLessFrom n (x:xs)
  | x < n     = x : takeXLessFrom n xs
  | otherwise = takeXLessFrom n xs

dropXLessFrom :: Int -> [Int] -> [Int]
dropXLessFrom _ []    = []
dropXLessFrom n (x:xs)
  | x < n     = dropXLessFrom n xs
  | otherwise = x : dropXLessFrom n xs

findCombination :: [Int] -> Int -> Int -> [[Int]]
findCombination [] _ _              = []
findCombination (x:xs) 1 s
  | x == s         = [x] : (findCombination xs 1 s)
  | otherwise      = findCombination xs 1 s
findCombination (x:xs) k s = map (x :) (findCombination xs (k - 1) (s - x)) ++ findCombination xs k s

clearList :: Eq a => [a] -> [a]
clearList []     = []
clearList (x:xs) = x : clearList (dropWhile (==x) xs)

-- pack-up
solutionP1 :: [Int] -> Int -> Int -> [[Int]]
solutionP1 xs k s = clearList (findCombination (quickSort xs) k s)

r = solutionP1 [-1,0,1,2,-1,4,-2,-2] 3 0

main = print r
