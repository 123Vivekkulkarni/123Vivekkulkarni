h = float(input('Enter Hours: '))

x = float(input('Enter the rate: '))

if h <= 40:
    print(h * x)

elif h > 40:
    print((40 * x) + (h - 40) * 1.5 * x)