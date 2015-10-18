from math import sqrt
n = input("any no ?")
n=int(n)+1
count=0
for a in range(1,n-1):
	for b in range(a+1,n):
		cm=a**2 + b**2
		#print(cm)
		c=int(sqrt(cm))
		if (c-sqrt(cm)==0):
			count=count+1
print(count)