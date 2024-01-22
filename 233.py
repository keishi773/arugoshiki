x,y,z = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
count = 0
for i in a:
    for j in b:
        for k in c:
            if i + j == k:
                count += 1
print(count)