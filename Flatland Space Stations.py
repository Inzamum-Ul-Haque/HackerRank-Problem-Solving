n, m = map(int, input().split())
station = [int(element) for element in input().split()]
station.sort()

'''distances = []
for i in range(n):
    distances.append(min(abs(i-station[j]) for j in range(len(station))))

print(max(distances))'''
maxgap = max(a-b for a,b in zip(station[1:],station)) if len(station) > 1 else 0
ans = max(maxgap//2, station[0], n-1-station[-1])
print(ans)