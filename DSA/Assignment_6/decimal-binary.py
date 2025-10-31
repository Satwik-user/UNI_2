class Stack:
    def __init__(self, cap):
        self.arr=[]
        self.cap=cap
        self.top=-1

    @staticmethod
    def createStack(capacity):
        return Stack(capacity)
    
    def isFull(self):
        return self.top==self.cap-1
    
    def isEmpty(self):
        return self.top==-1
    
    def push(self, ele):
        if self.isFull():
            print("Stack Overflow!")
            return
        self.top+=1
        self.arr.append(ele)

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow!")
            return
        self.top-=1
        return self.arr.pop()
    
    def peek(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        return self.arr[self.top]
    
def decimalToBinary(num, stack):
    while num>0:
        stack.push(num%2)
        num/=2

def main():
    num=int(input("Enter a number:"))
    stack=Stack.creaeteStack()
    decimalToBinary(num)