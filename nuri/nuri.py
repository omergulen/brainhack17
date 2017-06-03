input()
arr = list(map(int,input().split()))

temp = arr[-1]

for i in range(len(arr)-1,-1,-1):
    if temp <= arr[i-1] and arr[i-1] != arr[-1]:
        arr[i] = arr[i-1]
    else:
        arr[i] = temp
        output = " ".join(map(str, arr))
        print(output)
        break

    output = " ".join(map(str,arr))

    print(output)
