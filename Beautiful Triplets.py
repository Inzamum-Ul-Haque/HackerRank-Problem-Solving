n, d = map(int, input().split())
arr = [int(element) for element in input().split()]

triplets = 0

for i in range(n-2):
    for j in range(i+1,n-1):
        if abs(arr[i]-arr[j]) == d:
            foundtrip = False
            for k in range(j+1,n):
                if abs(arr[j]-arr[k]) == d:
                    foundtrip = True
                    triplets+=1
                    break
            if foundtrip == True:
                break

print(triplets)