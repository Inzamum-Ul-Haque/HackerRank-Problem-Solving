n = int(input())
arr = []

for i in range(n):
    a = []
    str = input()
    for j in range(len(str)):
        a.append(str[j])
    arr.append(a)

for i in range(1, n-1):
    for j in range(1, n-1):
        if((int(arr[i][j]) > int(arr[i-1][j])) and (int(arr[i][j]) > int(arr[i+1][j]))
            and (int(arr[i][j]) > int(arr[i][j-1])) and (int(arr[i][j]) > int(arr[i][j+1]))):
            arr[i][j] = 10

for i in range(n):
    for j in range(n):
        if arr[i][j] == 10:
            print('X',end="")
        else:
            print(arr[i][j],end="")
    print()