string=input("Enter a string:")
words=string.split()
for word in words:
    if word:
        print(word[0],end=' ')
print