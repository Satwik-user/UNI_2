class Node:
    def __init__(self, data):
        self.data=data
        self.next=None
        self.prev=None

class DoublyLinkedList:
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
        while temp.next:
            print(temp.data,end=' ')
            temp=temp.next
        print()

    def div(self, len):
        if len%2==0:
            br=len/2
        else:
            br=len/2+1

        list1=DoublyLinkedList()
        list2=DoublyLinkedList()

        temp.
        for _ in range(br):
            list1.insert_ele(temp.data)
        