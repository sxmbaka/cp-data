n = int(input())
list = list(map(int, input().split()))
cnt_even, cnt_odd = 0, 0
for i in range(3):
    if(list[i] % 2 ==0):
        cnt_even += 1
    else:
        cnt_odd += 1
if cnt_even > cnt_odd:
    for i in range(n):
        if list[i] % 2 == 1:
            print(i+1)
else:
    for i in range(n):
        if list[i] % 2 == 0:
            print(i+1)