# 关于
##  关于 Haskell
- [haskell.org](https://www.haskell.org/)
- [haskellcn.org](http://a.haskellcn.org/) 

## 关于这个文档
对于 [H-99](https://wiki.haskell.org/H-99:_Ninety-Nine_Haskell_Problems) 的分析

## 关于源码
- [h99.hs](https://github.com/ivanhu42/p/blob/master/learn-haskell/h99/h99.hs)
- [h99-analysis](https://github.com/ivanhu42/p/blob/master/learn-haskell/h99/h99-analysis.md)

## TOC
- P1: find the last element of a list
- P2: find the last but one element of a list

---

# P1: find the last element of a list
- 输入：list
- 输出：此 list 的最后一个 element

## p1_1
如果单纯使用 `last` ，在遇到一个空的 list 时会报错。因此，我们可以排除空 list 的情况，然后再使用 `last` 

```
p1_1 :: [a] -> a
p1_1 [] = error "empty list does not contain any elements"
p1_1 xs = last xs
```

## p1_2
在翻转整个 list 之后，第一个 element 就是原 list 的最后一个 element

```
p1_2 :: [a] -> a
p1_2 [] = error "empty list does not contain any elements"
"p1_2 xs = (head . reverse) xs
```

## p1_3
`!!` 可以直接给出确定 index 的 element

```
p1_3 :: [a] -> a
p1_3 [] = error "empty list does not contain any elements"
p1_3 xs = xs !! (length xs - 1)
```

## p1_4
将第一个 element 排除，对余下部分递归

```
p1_4 :: [a] -> a
p1_4 []     = error "empty list does not contain any elements"
p1_4 [x]    = x
p1_4 (_:xs) = p1_4 xs
```

---

# P2: find the last but one element of a list
- 输入：list
- 输出：此 list 的倒数第二个 element

## p2_1
使用 `reverse` 、 `tail` 以及 `head` 的组合

```
p2_1 :: [a] -> a
p2_1 []  = error "too short a list"
p2_1 [x] = error "too short a list"
p2_1 xs  = (head . tail . reverse) xs
```

## p2_2
将第一个 element 排除，对余下部分递归，取倒数第二项

```
p2_2 :: [a] -> a
p2_2 []     = error "error: too short a list"
p2_2 [x]    = error "error: too short a list"
p2_2 [x, y] = x
p2_2 (_:xs) = p2_2 xs
```

## p2_3
使用 `!!`

```
p2_3 :: [a] -> a
p2_3 []     = error "error: too short a list"
p2_3 [x]    = error "error: too short a list"
p2_3 xs = xs !! (length xs - 2)
```
