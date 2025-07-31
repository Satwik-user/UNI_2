dict0={1:'Satwik',2:'Rahul',3:'Rohan'}
val='Rohan'
f=0
for i in dict0:
    if val in dict0.values():
        f=1
        break
if f==1:
    print("Value found!")
else:
    print("Value not found")