import bisect
products=[1]
for prime in [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53]:
    products.append(prime*products[-1])
for _ in range(int(input())):
    print(bisect.bisect_right(products,int(input()))-1)
