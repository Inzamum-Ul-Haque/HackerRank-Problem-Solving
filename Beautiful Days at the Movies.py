start, end, k = map(int, input().split())

def Reverse_String(string):
    string = "".join(reversed(string))
    return string

beautiful = 0
for i in range(start, end+1):
    reverse = int(Reverse_String(str(i)))
    if abs(i-reverse)%k == 0:
        beautiful+=1

print(beautiful)