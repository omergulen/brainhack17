N = int(input())

liste = []

for i in range(0,N):
    liste.append(list(map(int, input().split(" "))))

prisum = 0
secsum = 0

for i in range(0,N):
    prisum += liste[i][i]

j = 0
for i in range(N-1,-1,-1):
    secsum += liste[i][j]
    j += 1

print(abs(prisum-secsum))
