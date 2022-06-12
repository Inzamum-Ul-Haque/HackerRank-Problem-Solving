s = input()
n = int(input())

def repeated_String(s,n):
    x,y = divmod(n, len(s))
    return s[:y].count('a')*(x+1) + s[y:].count('a')*(x)

result = repeated_String(s,n)
print(result)