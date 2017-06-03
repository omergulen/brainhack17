nums = list(map(int,input().split(" ")))
list = []
for j in range(0,5):
    sum = 0
    for i in range(0,4):
        sum += nums[i]

    list.append(sum)

    temp = nums[0]
    del nums[0]
    nums.append(temp)

print("{} {}".format(min(list), max(list)))
