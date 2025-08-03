dict0={'a':1,'b':2,'c':3,'d':4,'e':5}
del_keys=['a','c','e']
print("Original Dictionary:")
for key in del_keys:
    if key in dict0:
        del dict0[key]
print("Updated Dictionary:",dict0)