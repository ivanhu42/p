-- p1:
-- given a list of integers,
-- choose k numbers from this list,
-- with the sum equal to s.
-- how many possible combinations can we get?

import Lily
import Data.List (sortBy)

findCombination :: [Int] -> Int -> Int -> [[Int]]
findCombination [] _ _              = []
findCombination (x:xs) 1 s
  | x == s         = [x] : (findCombination xs 1 s)
  | otherwise      = findCombination xs 1 s
findCombination (x:xs) k s = map (x :) (findCombination xs (k - 1) (s - x)) ++ findCombination xs k s

-- pack-up
solution :: [Int] -> Int -> Int -> [[Int]]
solution xs k s = clearList (findCombination (sortBy (\x y -> compare x y) xs) k s)

r = solution [-1,0,1,2,-1,4,-2,-2] 3 0
main = print r
