'''n = int(input())
numbers = [int(element) for element in input().split()]

count = 0
sub_array = []
print(sub_array)
i = 0
for j in range(i,n):
    if abs(numbers[i]-numbers[j]) <= 1:
        sub_array.append(numbers[j])

print(sub_array)'''

def count(n, a):
    return len(list(filter((lambda x: x == n), a)))


n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]

mi = min(a)
ma = max(a)
maxCount = -1
if mi == ma:
    print(len(a))
else:
    for i in range(mi, ma):
        c = count(i, a) + count(i + 1, a)
        if c > maxCount:
            maxCount = c

    print(maxCount)
