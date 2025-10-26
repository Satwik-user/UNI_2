class Node:
    def __init__(self, data):
        self.data=data
        self.next=None
        self.prev=None

class DoublyCircularLinkedList():
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
        newNode.prev=temp
        newNode.next=self.head

    def insert_start(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.heaed=newNode
            newNode.next=self.head
            return
        
        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        self.head.prev=newNode
        newNode.next=self.head
        self.head=newNode
        temp.next=self.head

    def insert_pos(self, pos, data):
        newNode=self.createNode(data)
        if pos==1:
            self.insert_start(data)
            return
        
        temp=self.head
        for _ in range(1, pos-1):
            temp=temp.next
        newNode.prev=temp.prev
        newNode.next=temp
        temp.prev=newNode

    def del_start(self):
        if self.head is None:
            print("Empty List!")
            return

        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        self.head=self.head.next
        self.head.prev=None
        temp.next=self.head

    def del_end(self):
        if self.head is None:
            print("Empty List!")
            return
        
        temp=self.head
        while temp.next!=self.head:
            temp=temp.next
        temp.prev.next=self.head

    def del_pos(self, pos):
        if self.head is None:
            print("Empty List!")
            return
        
        if pos==1:
            self.del_start()
            return
        
        temp=self.head
        for _ in range(1, pos-1):
            temp=temp.next
        temp.next.prev=temp.prev
        temp.prev.next=temp.next

    def print_list(self):
        if self.head is None:
            print("Empty List!")
            return
        
        temp=self.head
        while temp.next!=self.head:
            print(temp.data,end=' ')
            temp=temp.next
        print()

def main():
    dcll=DoublyCircularLinkedList()

    #Formation of the list
    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        ele=int(input("Enter "))