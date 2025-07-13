n=int(input("Enter a number:"))
while n>0:
    rev=rev*10+(n%10)
    n//=10
print("Reverse of number:",rev)