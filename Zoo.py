total = 0
total1 = 0
print('ZOO PRICE DETERMINATION APPLICATION')
age = input('Enter Your Age: ')
while age != '':
    age = int(age)
    if age <= 2:
        total = total + 0

    elif age >= 3 and age <= 12:
        total = total + 20

    elif age >= 65:
        total = total + 25;

    elif age > 12 and age < 65:
        total = total + 20

    age = input('Enter Your Age: ')

total1 = total
if total1 > 120:
    total1 - 20
    print('Yahoo!!! Congratulations You Have 20% Off On Your Cost and Your Total Cost is ',total1)
else:
    print("The Total Cost For Your Family is: ",total)

print('Thank For Coming To Our Zoo!!!!!!!!!!')