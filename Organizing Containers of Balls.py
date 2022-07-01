'''q = int(input())

def Column(A,i):
    return [row[i] for row in A]

def CheckBalls(containers):
    count = 0
    for i in range(n):
        row = sum(containers[i][i + 1:]) + sum(containers[i][:i])
        col = sum(Column(containers, i)) - containers[i][i]
        if row == col:
            count += 1
        else:
            return "Impossible"

    if count == n:
        return "Possible"

for _ in range(q):
    n = int(input())
    containers = []
    for i in range(n):
        temp = list(map(int, input().split()))
        containers.append(temp)
    print(CheckBalls(containers))'''

q = int(input().strip())
for a0 in range(q):
    n = int(input().strip())
    M = []
    for M_i in range(n):
        M_t = [int(M_temp) for M_temp in input().strip().split(' ')]
        M.append(M_t)

    Rows = []
    Cols = []
    Works = True

    for i in range(n):
        Rows.append(sum(M[i]))

    N = [list(i) for i in zip(*M)]
    for i in range(n):
        Cols.append(sum(N[i]))

    Rows.sort()
    Cols.sort()

    if Rows == Cols:
        print("Possible")
    else:
        print("Impossible")