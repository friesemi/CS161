module Date where

daysInWeek :: Int
daysInWeek = 7

daysinMonth :: Int -> Int
daysinMonth m = daysInWeek * 4 * m

minutesinDay :: Int -> Int
minutesinDay d = 60 * 24 * d

minutesInYear :: Int -> Int
minutesInYear y = 52 * 24 * 7 * 60 * y
