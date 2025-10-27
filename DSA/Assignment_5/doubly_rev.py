class Node:
    def __init__(self, data):
        self.data=data
        self.next=None
        self.prev=None

class DoublyLinkedList():
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

    def print_list(self):
        if self.head is None:
            print("Empty List!")
            return
        temp=self.head
        while temp:
            
            temp=temp.next