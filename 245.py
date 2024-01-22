l,r = map(int, input().split())
count = 0
for i in range(l, r + 1):
    x =  i % 10
    for j in range(i + 1, r + 1):
        y = j % 10
        if x == y:
            count += 1
print(count)