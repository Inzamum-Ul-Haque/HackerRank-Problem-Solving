n,k = map(int, input().split())
arr = [int(num) for num in input().split()]
count = 0
for i in range(n-1):
    j = i+1
    while j < n:
        if (arr[i]+arr[j])%k == 0:
            count+=1
        j+=1

print(count)