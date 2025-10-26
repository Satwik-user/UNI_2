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
        newNode.next=self.head