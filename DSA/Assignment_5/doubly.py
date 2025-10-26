class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class DoublylinkedList():
    def __init__(self):
        self.head=None

    def createNode(self, data):
        return Node(data)