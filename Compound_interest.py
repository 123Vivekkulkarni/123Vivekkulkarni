#CI = P( 1 + r/100)t - P.

p = float(input('Enter the principle: '))
r = float(input('Enter the rate: '))
t = int(input('Enter the time: '))

CI = p * pow(1+r/100,t) - p

print('The Compound Interest is = ',CI)