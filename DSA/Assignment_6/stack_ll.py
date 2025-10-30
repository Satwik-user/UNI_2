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
    
    def isFull(self):
        i