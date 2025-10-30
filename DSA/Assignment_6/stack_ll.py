class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class stackLinkedList:
    def __init__(self):
        self.head=None

    @staticmethod
    def createNode(self, data):
        return Node(data)
    
    def insert_ele(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.head=newNode
            return
        newNode.next=self.head
        self.head=newNode

    def del_head(self):
        if self.head is None:
            return None
        temp=self.head
        self.head=self.head.next
        return temp.data
    
    def isEmpty(self):
        return self.head is None
    
    def isFull(self, cap):
        count=0
        temp=self.head
        while temp:
            count+=1
            temp=temp.next
        return count>=cap
    
    def push(self, data, cap):
        if self.isFull(cap):
            print("Stack Overflow!")
            return
        self.insert_ele(data)

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow!")
            return
        return self.del_head()
    
    def peek(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        return self.head.data
    
    def print_stack(self):
        if self.isEmpty():
            print("Stack is Empty!")
            return
        temp=self.head
        while temp:
            print(temp.data,end=' ')
            temp=temp.next
        print()

def main():
    
    #Formation of stack
    stack=stackLinkedList()
    n=int(input("Enter size of stack:"))
    for _ in range(n):
        ele=int(input("Enter element:"))
        stack.push(ele)