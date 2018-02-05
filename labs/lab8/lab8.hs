f :: Int -> Int
f x = 4*x

g :: Int -> Int
g y = y+2

last' :: [Int] -> Int
last' [x] = x
last' (x:xs) = last'(xs)

reverse' :: [Int] -> [Int]
reverse' [] = []
reverse' (x:xs) = reverse' (xs) ++ [x]

find' :: Int -> [Int] -> Bool
find' x []                                  = False
find' x (y:ys) | x==y                       = True
               | otherwise = find' x (ys)

wakeUpM :: Int -> Int -> Int
wakeUpM leave duration  = leave - duration

wakeUpH :: Float -> Float -> Float
wakeUpH leave duration = leave - duration

type Minute = Int
type Hour = Int
type Time = (Hour, Minute)

wakeUpNaive :: Time -> Time -> Time
wakeUpNaive (h,m) (h',m') = (h-h',m-m')

wakeUp :: Time -> Time -> Time
wakeUp (h,m) (h',m') | m'>m      = (h-h'-1,60+m-m')
                     | otherwise = (h-h',m-m')

timeToMinutes :: Time -> Minute
timeToMinutes (h,m) = (h*60)+m

minutesToTime :: Minute -> Time
minutesToTime m = ((div m 60),(mod m 60))

timeConversion :: Time -> Time -> Time
timeConversion (h,m) (h',m') = minutesToTime((timeToMinutes(h,m))-(timeToMinutes(h',m'))) 

validMinute :: Minute -> Bool
validMinute m | m >= 0 && m < 60 = True
              | otherwise = False

validHour :: Hour -> Bool
validHour h | h >= 0 && h < 24 = True
            | otherwise = False

validTime :: Time -> Bool
validTime (h,m) | h >= 0 && h < 24 && m >= 0 && m < 60 = True
                | (validHour h) && (validMinute m)= True                
                | otherwise = False
