class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class stackLinkedList:
    def __init__(self):
        self.head=None

    def createNode(self, data):
        return Node(data)
    
    def insert_ele(self, data):
        newNode=self.createNode(data)
        new