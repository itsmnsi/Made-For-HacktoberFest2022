import numpy as np
a = [1000000000000]
n = 8749
count = 0

a[i] = n

while n>1:

    if n%2 != 0:
        n = 3*n+1
        print(int(n))
        a[i] = a.append[n]
        count = count+1
    else:
        n = n/2
        print(int(n))
        count = count+1
        a[i] = a.append[n]
for j in range (0, len(a)):
    print(a[i], end =" " )
print("\nNo of iterations ",count)



