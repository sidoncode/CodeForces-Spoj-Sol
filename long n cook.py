dp = [0]*500

def isLeapYear(year):
    return (year%4 ==0 and year%100 !=0) or (year%400 == 0)

remainder = 1
dp[1]  =0
for i in range (2,401):
    dp[i] = dp[i-1]+1 if remainder == 2 or (remainder ==3 and not isLeapYear(i
        )) else dp[i-1]
    
    remainder = (remainder +2)%7 if isLeapYear(i) else (remainder+1)%7

t= int(input())
for j in range(t):
    m1,y1 = map(int,input().split())
    m2,y2 = map(int,input().split())
    
    if m1 <= 2:
        y1 -= 1
    
    if m2 < 2:
        y2 -=1
    p,q = (y1//400)*101,y1%400
    
    if q:
        p += dp[q]
    r,s = (y2//400)*101,y2%400
    
    if s:
        r += dp[s]
    noOfintersection = r-p
    print(noOfintersection)