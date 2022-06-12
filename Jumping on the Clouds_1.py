n = int(input())
arr = list(map(int, input().split()))

cnt = 0
i = 0
while(i < len(arr)-2):
    i = i+1 if arr[i+2] else i+2
    cnt+=1
if i<len(arr)-1:
    cnt+=1

print(cnt)