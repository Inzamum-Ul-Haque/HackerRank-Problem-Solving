n = int(input())
arr = list(map(int, input().split()))

def equalizeArray(arr):
    return (len(arr) - arr.count(max(set(arr), key=arr.count)))

print(equalizeArray(arr))