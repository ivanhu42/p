module Lily where

-- begin quickSort
-- usage:
--    use quicksort to sort a list, the result is in non-decreasing order
-- example:
--    r = quickSort [1,5,2,4,3]
-- result:
--    r: [1,2,3,4,5]
quickSort :: Ord a => [a] -> [a]
quickSort []     = []
quickSort (x:xs) = quickSort (filter (<x) xs) ++ [x] ++ quickSort (filter (>=x) xs)
-- end quickSort

-- begin clearList
-- usage:
--    replace consecutive repeated elements with only one element
-- example:
--    r = clearList [1,1,1,2,2,3,3,3,2,2,4]
-- result:
--    r: [1,2,3,2,4]
clearList :: Eq a => [a] -> [a]
clearList []     = []
clearList (x:xs) = x : clearList (dropWhile (==x) xs)
-- end clearList

-- begin splitBy
-- usage:
--    split a list into several sub-lists
-- example:
--    r = splitby ' ' "12 23 34"
-- result:
--    r: ["12","23","34"]
splitBy :: Eq a => a -> [a] -> [[a]]
splitBy _ [] = []
splitBy c xs = (takeWhile (/=c) xs) : (splitBy c (safeTail (dropWhile (/=c) xs)))
-- end splitBy

-- begin safeTail
-- usage:
--    tail a list. when it's empty, return an empty list
-- example:
--    r1 = safeTail [1,2,3]
--    r2 = safeTail []
-- result:
--    r1: [2,3]
--    r2: []
safeTail :: [a] -> [a]
safeTail []     = []
safeTail (x:xs) = xs
-- end safeTail
