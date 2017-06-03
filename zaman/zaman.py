girdi = input()

AMorPM = girdi[-2:]

saat = list(map(int,girdi[:-2].split(":")))

if AMorPM == "AM" and saat[0] == 12:
    saat[0] = 0
elif AMorPM == "PM" and saat[0] != 12:
    saat[0] += 12

for i in range(0,len(saat)):
    saat[i] = str(saat[i])

for i in range(0,len(saat)):
    if len(saat[i]) == 1:
        saat[i] = "0" + saat[i]

print("{}:{}:{}".format(saat[0],saat[1],saat[2]))
