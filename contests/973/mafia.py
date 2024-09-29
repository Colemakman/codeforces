import sys


data = list(sys.stdin.read().splitlines()[1:])

f = []
for i in range(1, len(data), 2):
    data[i] = list(map(int, data[i].split()))
    f.append(data[i])

for fighters in f:
    fighters.sort(reverse=True)

    while len(fighters) > 1:
        last = fighters.pop()
        print(last, fighters[-1])
        fighters[-1] -= last
        print(fighters)

