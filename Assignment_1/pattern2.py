n=int(input("Enter no of lines:"))
for i in range(n,0,-1):
    for j in range(1,i):
        print(' ',end='')
    for k in range(n,i-1,-1):
        print(k,end='')
    for l in range(i+1,n+1):
        print(l,end='')
    print()

for i in range(n,0,-1):
    for j in range(0,n-i+2):
        print(' ',end='')
    for k in range(n,n-i+1,-1):
        print(k,end='')
    for l in range(n-i+3,n+1):
        print(l,end='')
    print()