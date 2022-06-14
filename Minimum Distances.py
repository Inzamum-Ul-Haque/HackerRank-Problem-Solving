n = int(input())
arr = [int(element) for element in input().split()]

distances = []
for i in range(len(arr)):
    for j in range(i+1, len(arr)):
        if arr[i] == arr[j]:
            min_dist = abs(i-j)
            distances.append(min_dist)


if len(distances) == 0:
    print("-1")
else:
    print(min(distances))