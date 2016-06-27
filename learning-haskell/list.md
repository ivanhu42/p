# list
based on [How to work on lists](https://wiki.haskell.org/How_to_work_on_lists)

## basic

### `length`: get the size of a list
```
length :: [a] -> Int
length []     = 0
length (x:xs) = 1 + length xs
```

### `reverse`: turn a list backwards
```
reverse :: [a] -> [a]
reverse []     = []
reverse (x:xs) = (reverse xs) ++ [x]
```
