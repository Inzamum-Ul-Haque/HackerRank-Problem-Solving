n = int(input())
p = int(input())

left = p//2
right = (n//2) - left

print(min(left,right))