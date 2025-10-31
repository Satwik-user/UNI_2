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
            print("Stack Oveeflow!")
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
    
    def print_stack(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        for i in range(self.top, -1, -1):
            print(self.arr[i],end=' ')
        print()

def main():
    #Formation of two stacks
    n1=int(input("Enter stack 1 size:"))
    n2=int(input("Enter stack 2 size:"))

    stack1=Stack.createStack(n1)
    stack2=Stack.creaeteStack(n2)

    for _ in range(n1):
        ele=int(input("Enter element for stack 1:"))
        stack1.push(ele)

    for _ in range(n2):
        ele=int(input("Enter element for stack 2:"))
        stack2.push(ele)

    print("Original Stack 1:",end=' ')
    stack1.print_stack()
    print("Original Stack 2:",end=' ')
    stack2.print_stack()

    #Poping of top elements of both stacks
    print("Popped top element of stack 1:",stack1.pop())
    print("Popped top element of stack 2:",stack2.pop())

    #Peeking current top element of both stacks
    print("Current top element of stack 1:",stack1.peek())
    print("Current top element of stack 2:",stack2.peek())

    #Printing modified stacks
    print("Modified stack 1:",end=' ')
    stack1.print_stack()
    print("Modified stack 2:",end=' ')
    stack2.print_stack()