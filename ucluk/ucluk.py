alice = list(map(int, input().split(" ")))
bob = list(map(int, input().split(" ")))

al = 0
bo = 0

for i in range(0,3):
    if alice[i] > bob [i]:
        al += 1
    elif bob[i] > alice[i]:
        bo += 1

print("{} {}".format(al,bo))
