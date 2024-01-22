n = int(input())
s = [input() for _ in range(n)]
flag = False
for i in range(n):
    for j in range(i + 1, n):
        if s[i] == s[j]:
            flag = True
if flag:
    print("Yes")
else:
    print("No")