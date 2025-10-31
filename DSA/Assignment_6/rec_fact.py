def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

def tail_fact(f, n):
    if n==0:
        return f
    return tail_fact(f*n,n-1)

def main():
    num=int(input("Enter a number:"))

    print("Factorial of the number using ")