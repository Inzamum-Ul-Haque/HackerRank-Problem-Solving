n, k, q = map(int, input().split())
arr = tuple(map(int, input().split()))

for _ in range(q):
    print(arr[(int(input())+n-k)%n])

'''
while k:
    queue = [arr[0]]
    for i in range(1,len(arr)):
        if i == n-1:
            arr[0] = arr[i]
            arr[i] = queue.pop(0)
        else:
            queue.append(arr[i])
            arr[i] = queue.pop(0)
        #print(arr)
    k-=1

while q:
    i = int(input())
    print(arr[i])
    q-=1 '''