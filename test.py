n=int(input("Enter a number:"))
c=len(str(n))
cpy=n
res=0
while n>0:
    res+=(n%10)**c
    n//=10
if cpy==res:
    print("Armstrong number")
else:
    print("Not a armstrong number")