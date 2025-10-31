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
            print("Stack Underflow!")
            return
        return self.arr[self.top]
    
def infixPostfix(exp, length):
    stack=Stack.createStack()

    for i in range(length):
        c=exp[i]

        if c==' ':
            continue

        if c.isdigit():
            stack.push()