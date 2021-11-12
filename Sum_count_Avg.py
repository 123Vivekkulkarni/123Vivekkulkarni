Sum = 0
count = 0
Avg = 0.0
while True:
    num = input()
    if num != "done":
        Sum = int(Sum) + int(num)
        count += 1
        #Avg = Sum / count
    else:
        break

print('The sum of numbers is: ', Sum)
print('The count of number is: ', count)
print('The Average of numbers is: ', float(Sum)/count)
