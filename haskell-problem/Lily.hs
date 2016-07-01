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
