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
        self.arr[self.top]=ele

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow!")
            return
        return