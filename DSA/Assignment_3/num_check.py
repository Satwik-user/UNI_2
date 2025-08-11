print("Enter 25 numbers:")
pos,neg,even,odd=0,0,0,0
for i in range(25):
    n=int(input("Enter a number:"))
    if n>0:
        pos+=1
    if n<0:
        neg+=1
    if n%2==0:
        even+=1
    if n%2!=0:
        odd+=1

print(f"Positive:{pos}\nNegaitve:{neg}\nEven:{even}\nOdd:{odd}")