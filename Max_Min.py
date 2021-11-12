Max = None
Min = None
while True:
    num = input()
    if num != 'done':
        num = int(num)
        if Max is None or Max < num:
            Max = num

        elif Min is None or Min > num:
            Min = num

    else:
        break

print("Maximum number is = ",Max)
print("Minimum number is = ",Min)