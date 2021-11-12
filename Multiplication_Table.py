min = 1
max = 10

print('    ',end='')
for i in range(min,max+1):
    print('%4d'%i,end='')

print()

for i in range(min,max+1):
    print('%4d'%i,end='')
    for j in range(min,max+1):
        print('%4d'%(i*j),end='')
    print()