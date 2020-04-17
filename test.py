def sumSquare(n) : 
	i = 1
	while i * i <= n : 
		j = 1
		while(j * j <= n) : 
			if (i * i + j * j == n) : 
				return True
			j = j + 1
		i = i + 1
	return False
t = int(input())

for i in range(0,t):
    n = int(input())
    if (sumSquare(n)) : 
        print("Y") 
    else : 
        print("N") 
    
