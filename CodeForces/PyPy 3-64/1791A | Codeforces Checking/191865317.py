s = set("codeforces")
t = int(input())
for i in range(t):
    c = input()
    if c in s:
        print("YES")
    else:
        print("NO")