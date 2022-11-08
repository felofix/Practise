import numpy as np
import math as m

def isFibonaccinumbers(n):
	a = 0
	b = 1

	while b < n:
		temp = b 
		b += a
		a = temp

	return(b == n)

print(isFibonaccinumbers(8))