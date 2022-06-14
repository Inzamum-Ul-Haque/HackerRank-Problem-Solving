t = int(input())

while t:
    b, w = map(int, input().split())
    bc, wc, z = map(int, input().split())
    if bc+z < wc:
        print(b*bc+w*(bc+z))
    elif wc+z < bc:
        print(w*wc+b*(wc+z))
    else:
        print(b*bc+w*wc)
    t-=1