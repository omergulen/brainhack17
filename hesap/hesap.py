mealCost= float(input())
tipPercent = int(input())
taxPercent = int(input())

finalPrice = mealCost + mealCost *tipPercent/100 + mealCost *taxPercent/100

print("The total meal cost is {} dollars.".format(int(round(finalPrice,0))))
