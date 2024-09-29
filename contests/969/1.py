import math
import sys


def get_primes(r):
    primes = [2]
    count = 3 

    while count <= r:
        prime = True 
        for p in primes:
            if p < math.sqrt(count) and count % p == 0:
                prime = False
        if prime:
            primes.append(count)
        count += 2

    return primes

data = sys.stdin.read().split()
index = 1

for _ in range(int(data[0])):

    l, r = int(data[index]), int(data[index+1])
    index += 2

    primes = [p for p in get_primes(r) if p not in get_primes(l)]
    print(primes // 3)
