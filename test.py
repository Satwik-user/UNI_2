n=int(input("Enter a number:"))
cpy=n
rev=0
while n>0:
    rev=rev*10+(n%10)
    n//=10
if rev==cpy