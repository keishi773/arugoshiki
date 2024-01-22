n = int(input())
s = [input() for _ in range(n)]
count = 0
for x in s:
    flag = True
    lenx = len(x)
    for j in range(lenx):
        if x[j] != x[(lenx-1)-j]:
            flag = False
    if flag:
        count += 1
print(count)