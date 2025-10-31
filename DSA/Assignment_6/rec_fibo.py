def fibo(n):
    if n<=0:
        return 0
    elif n==1:
        return 1
    return fibo(n-1)+fibo(n-2)

def tail_fibo(a, b, n):
    if n==1:
        return b
    return tail_fibo(b, a+b, n-1)

def main():
    num=int(input(""))