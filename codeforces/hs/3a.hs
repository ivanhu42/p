module Main where

solution :: (Int,Int) -> (Int,Int) -> [String]
solution (x1, y1) (x2, y2)
  | x1 == x2 && y1 == y2 = []
  | x1 == x2 && y1 <  y2 = "U"  : solution (x1,(y1+1))     (x2,y2)
  | x1 == x2 && y1 >  y2 = "D"  : solution (x1,(y1-1))     (x2,y2)
  | x1 <  x2 && y1 == y2 = "R"  : solution ((x1+1),y1)     (x2,y2)
  | x1 <  x2 && y1 <  y2 = "RU" : solution ((x1+1),(y1+1)) (x2,y2)
  | x1 <  x2 && y1 >  y2 = "RD" : solution ((x1+1),(y1-1)) (x2,y2)
  | x1 >  x2 && y1 == y2 = "L"  : solution ((x1-1),y1)     (x2,y2)
  | x1 >  x2 && y1 <  y2 = "LU" : solution ((x1-1),y1+1)   (x2,y2)
  | otherwise            = "LD" : solution ((x1-1),(y1-1)) (x2,y2)

turn :: Char -> Int
turn c
  | c == 'a'  = 1
  | c == 'b'  = 2
  | c == 'c'  = 3
  | c == 'd'  = 4
  | c == 'e'  = 5
  | c == 'f'  = 6
  | c == 'g'  = 7
  | otherwise = 8

verticalPrint :: [String] -> String
verticalPrint []     = ""
verticalPrint [x]    = x
verticalPrint (x:xs) = x ++ "\n" ++ verticalPrint xs

main = do
  w0 <- getLine
  let s = ((turn ((head w0))),(read (tail w0) :: Int))
  w1 <- getLine
  let t = ((turn ((head w1))),(read (tail w1) :: Int))
  let r = solution s t
  let rez = if (length r == 0)
            then "0"
            else (show (length r)) ++ "\n" ++ (verticalPrint r)
  putStrLn rez
