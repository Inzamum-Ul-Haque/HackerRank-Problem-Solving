b, n, m = map(int , input().split())
keyboard = [int(element) for element in input().split()]
drive = [int(element) for element in input().split()]

max = 0
count = 0
for i in range(n):
    for j in range(m):
        if keyboard[i]+drive[j] > max and keyboard[i]+drive[j] <= b:
            max = keyboard[i]+drive[j]
            count+=1

if count == 0:
    print("-1")
else:
    print(max)