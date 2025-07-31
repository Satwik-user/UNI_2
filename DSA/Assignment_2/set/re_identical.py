set1=(1,2,3,4,5)
set2=(2,3,4,5,6)
set3=set()
for i in set1:
    for j in set2:
        if i==j:
            set3.add(i)
print(set3)