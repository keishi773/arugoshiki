n,m,k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
count = 0
for x in a:
    for y in b:
        if x + y == k:
            count += 1
print(count)