p = int(input())
q = int(input())

count = []
def Kaprekar_Numbers(start,end):
    for i in range(start,end+1):
        d = len(str(i))
        digits = str(i ** 2)
        right = int(digits[len(digits)-d:])
        left = digits[:len(digits) - d]
        if left == '':
            left = 0
        left = int(left)
        if left+right == i:
            count.append(i)
            print(str(i),end=" ")

Kaprekar_Numbers(p,q)
if len(count) == 0:
    print("INVALID RANGE")