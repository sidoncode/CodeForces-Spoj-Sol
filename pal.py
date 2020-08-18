from itertools import product

def total_sum(n):
    sum1=0
    for k in range(len(n)):
        sum1=sum1+int(n[k])
    return sum1

low,high=map(int,input().split())

x=int(input())

lst1=[]

for i in range(low,high+1):
    lst1.append(str(i))

count=0
prmutation=product(lst1,repeat=x)

for i in prmutation:
    if (total_sum(i)%2==0):
        count+=1
print(count%1000000007)