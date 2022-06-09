n, k = map(int, input().split())
hurdles = [int(element) for element in input().split()]

if max(hurdles) < k:
    print("0")
else:
    print(max(hurdles)-k)