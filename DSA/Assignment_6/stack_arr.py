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
        self.arr.append=ele
        self.top+=1

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow!")
            return
        return self.arr.pop()
    
    def peek(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        return self.arr[self.top]

    def print_stack(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        for i in range(self.top,1,-1):
            print(self.arr[i],end=' ')

def main():
    #Formation of Stack
    n=int(input("Enter size  of stack:"))
    stack=Stack.createStack(n)
    for _ in range(n):
        ele=int(input("Enter element:"))
        stack.push(ele)
    print("Original Stack:",end='')
    stack.print_stack()

    #pop top element of stack
    stack.pop()