class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class CircularLinkedList:
    def __init__(self):
        self.head=None

    def createNode(self, data):
        return Node(data)
    
    def insert_ele(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.head=newNode
            newNode.next=self.head
            return
        
        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        temp.next=newNode
        newNode.next=self.head

    def insert_start(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.head=newNode
            newNode.next=self.head
            return
        
        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        newNode.next=self.head
        temp.next=newNode
        self.head=newNode

    def insert_pos(self, pos, data):
        newNode=self.createNode(data)
        if pos==1:
            self.insert_start(data)
            return
        
        temp=self.head
        for _ in range(1, pos-1):
            temp=temp.next
        newNode.next=temp.next
        temp.next=newNode

    def del_start(self):
        if self.head is None:
            print("Empty List!")
            return
        
        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        self.head=self.head.next
        temp.next=self.head

    def del_end(self):
        if self.head is None:
            print("Empty List!")
            return
        
        temp=self.head
        prev=None
        while temp.next!=self.head:
            prev=temp
            temp=temp.next
        prev.next=self.head

    def del_pos(self, pos):
        if self.head is None:
            print("Empty List!")
            return
        
        if pos==1:
            self.del_start()
            return
        
        temp=self.head
        prev=None
        for _ in range(1, pos-1):
            prev=temp
            temp=temp.next
        prev.next=temp.next

    def print_list(self):
        if self.head is None:
            print("Empty List!")
            return
        
        print("Circular Linked List:",end='')
        temp=self.head
        while temp.next!=self.head:
            print(temp.data,end=' ')
            temp=temp.next
        print()

def main():
    cll=CircularLinkedList()

    #Formation of Circuar Linked List
    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        data=int(input("Enter element:"))
        cll.insert_ele(data)

    print(Original)