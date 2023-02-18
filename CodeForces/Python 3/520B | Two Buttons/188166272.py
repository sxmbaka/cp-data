import math
inp = input().split()
n = int(inp[0])
m = int(inp[1])
 
taps = 0
 
if n >= m:
    taps = n - m
else:
    dup = m
    checkpoints = []
    while dup != 1:
        checkpoints.append(dup)
        dup = math.ceil(dup/2)
    checkpoints.append(1)
    l = len(checkpoints)
    pointer = l-1
    while True:
        if pointer > 0 and checkpoints[pointer-1] <= n:
            pointer -= 1
        else:
            break
    while n != m and pointer >= 0:
        if n > checkpoints[pointer]:
            n -= 1
            taps += 1
        else:
            n *= 2
            taps += 1
            pointer -= 1
print(taps)