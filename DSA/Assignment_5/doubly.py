class Node:
    def __init__(self, data):
        self.data=data
        self.next=None
        self.prev=None

class DoublylinkedList():
    def __init__(self):
        self.head=None

    def createNode(self, data):
        return Node(data)
    
    def insert_ele(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.head=newNode
            return
        temp=self.head
        while temp.next:
            temp=temp.next
        temp.next=newNode
        newNode.prev=temp

    def insert_start(self, data):
        newNode=self.createNode(data)
        if self.head is None:
            self.head=newNode
            return
        newNode.next=self.head
        self.head.prev=newNode
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
        newNode.prev=temp
        if temp.next is not None:
            temp.next.prev=newNode
        temp.next=newNode

    def del_start(self):
        if self.head is None:
            print("Empty List!")
            return
        self.head=self.head.next

    def del_end(self):
        if self.head is None:
            print("Empty List!")
            return
        temp=self.head
        while temp.next:
            temp=temp.next
        temp.prev.next=None

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
        temp.next=