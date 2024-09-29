import sys
import math 


data = list(map(int, sys.stdin.read().split()[1:]))

for i in range(0, len(data), 3): # n
    n = data[i]
    x = data[i + 1]
    y = data[i + 2]
    print(math.ceil(max(n / x, n / y)))
