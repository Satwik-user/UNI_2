class Stack:
    def __init__(self, cap):
        self.arr=[]
        self.cap=cap
        self.top=-1
    
    @staticmethod
    def createStack(capacity):
        return Stack(capacity)
    
    def isEmpty(self):
        return self.top==-1
    
    def isFull(self):
        return self.top==self.cap-1
    
    def push(self, ele):
        if self.isFull():
            print("Stack Overflow!")
            return
        self.arr.append(ele)
        self.top+=1

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow!")
            return
        self.top-=1
        return self.arr.pop()
    
    def peek(self):
        if self.isEmpty():
            print("Stack is empty!")
            return
        return self.arr[self.top]
    
    def print_stack(self):
        if self.isEmpty():
            print("Stack is empty!")
            return
        for i in range(self.top, -1, -1):
            print(self.arr[i],end=' ')
        print()

    def noOfOpen(self):
        c=0
        if self.isEmpty():
            print("Stack is empty!")
            return
        top=self.top
        while top!=-1:
            if self.peek()=='(':
                c+=1
            top-=1
        return c
    
    def noOfClose(self):
        c=0
        