--Leave and Duration are both input integers

wakeUpM :: Int -> Int -> Int
wakeUpM leave duration = leave - duration

wakeUpH :: Float -> Float -> Float
wakeUpH leave duration = leave - duration

type Minute = Int
type Hour = Int
type Time = (Hour,Minute)

wakeUpNaive :: Time -> Time -> Time
wakeUpNaive (h,m) (h',m') = (h-h',m-m')
--The time should not be negative and should be replaced by hours instead of minutes

wakeUp :: Time -> Time -> Time
wakeUp (h,m) (h',m') | m' > m = (h-h'-1, 60 + m - m')
                     | otherwise = (h-h',m-m')

timeToMinutes :: Time -> Minute
timeToMinutes (h,m) = (h*60)+m

minutesToTime :: Minute -> Time
minutesToTime m = ((div m 60),(mod m 60))

