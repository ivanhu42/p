# list
based on [How to work on lists](https://wiki.haskell.org/How_to_work_on_lists)

## basics

### `length`: get the size of a list
```
r = length [1,2,3]
-- r: 3
```

### `reverse`: turn a list backwards
```
r = reverse [1,2,3]
-- r: [3,2,1]
```

## finding / searching
### `!!`: get the nth element out of a list
```
r = [1,2,3] !! 1
-- r: 2
-- notice: index starts with 0
```

### `filter`:get a list of all elements that match some condition
```
r = filter (>1) [1,2,3]
-- r: [2,3]
```

### `minimum`, `maximum`:find the highest/lowest element of a list
```
r1 = minimum [1,2,3]
-- r1: 1
r2 = maximum [1,2,3]
-- r2: 3
```

## adding
### `:`: add an element to the start of a list
```
r = 1 : [2,3]
-- r: [1,2,3]
```

### `++`: add an element to the end of a list
```
r = [1,2] ++ [3]
-- r: [1,2,3]
```

### `insertInto`: insert an element into the middle of a list
```
insertInto :: a -> [a] -> Int -> [a]
insertInto _ _      k | k < 0 = errorWithoutStackTrace "negative index"
insertInto _ []     _         = errorWithoutStackTrace "index too large"
insertInto n xs     0         = n : xs
insertInto n (x:xs) k         = x : insertInto n xs (k - 1)

r = insertInto 2 [1,3] 1
-- r: [1,2,3]
```

## deleting
### `drop`: delete the first n elements from a list
```
r = drop 2 [1,2,3]
-- r: [3]
```

### `take`: make a new list containing just the first n elements from an existing list
```
r = take 2 [1,2,3]
-- r: [1,2]
```

### `splitAt`: split a list into two smaller lists (at the nth position)
```
r = splitAt 2 [1,2,3]
-- r: ([1,2],[3])
```

### `deleteNth`: delete just the nth element of a list
```
deleteNth :: Int -> [a] -> [a]
deleteNth k _ | k < 0 = errorWithoutStackTrace "negative index"
deleteNth _ []        = errorWithoutStackTrace "index too large"
deleteNth 0 (x:xs)    = xs
deleteNth k (x:xs)    = x : deleteNth (k - 1) xs

r = deleteNth 1 [1,2,3]
-- r: [1,3]
```

### `deleteWhile`: delete elements that meet some condition
```
deleteWhile :: (a -> Bool) -> [a] -> [a]
deleteWhile _ [] = errorWithoutStackTrace "empty list"
deleteWhile f xs = filter (not . f) xs

r = deleteWhile (< 2) [1,2,3]
-- r: [2,3]
```

## testing various conditions
### `null`: check if a list is empty
```
r = null [1,2,3]
-- r: False
```

### `any`: find out whether any element passes a given test
```
r = any (<2) [1,2,3]
-- r: True
```

### `all`: check whether all list elements pass a given test
```
r = all (<2) [1,2,3]
-- r: False
```

## modifying the list or its elements
### `map`: apply a function to all list elements
```
r = map (+1) [1,2,3]
-- r: [2,3,4]
```

### `mapWhile`: apply a function to just some elements of a list
```
mapWhile :: (a -> Bool) -> (a -> a) -> [a] -> [a]
mapWhile test f xs = map (\x -> if test x then f x else x) xs

r = mapWhile (<2) (+1) [1,2,3]
-- r: [2,2,3]
```

### `numbered`: number the elements of a list
```
numbered xs = zip xs [0..]

r = numbered ['a','b','c']
-- r: [('a',0),('b',1),('c',2)]
```

### `multiFunc`: apply a list of functions to a single element to get a list of results
```
multiFunc :: a -> [(a -> b)] -> [b]
multiFunc n xs = map ($ n) xs

r = multiFunc 1 [add0,add1,add2]
    where add0 = (+) 0
          add1 = (+) 1
          add2 = (+) 2
-- r: [1,2,3]
```

### `sum`: total up a list of numbers
```
r = sum [1,2,3]
-- r: 6
```

### `quickSort`: sort a list using [quicksort](https://en.wikipedia.org/wiki/Quicksort)
```
quickSort :: Ord a => [a] -> [a]
quickSort []     = []
quickSort (x:xs) = quickSort (takeWhile (<x) xs) ++ [x] ++ quickSort (dropWhile (<x) xs)

r = quickSort [1,5,2,4,3]
-- r: [1,2,3,4,5]
```

### `elem`: find out if some item is in a list
```
r = 2 `elem` [1,2,3]
-- r: True
```

## list and IO
