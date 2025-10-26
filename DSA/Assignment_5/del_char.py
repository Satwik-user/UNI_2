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

    def del_ele(self, ele):
        if self.head is None:
            print("Empty List!")
            return
        
        temp=self.head
        while temp.next:
            if temp.data==ele:
                break
            temp=temp.next
        if temp.next==None:
            print("Element not in list!")
            return
        temp.prev.next=temp.next
        if temp.next:
            temp.next.prev=temp.prev

def main():
    dll=DoublyLinkedList()

    #Formation of Doubly Linked List
    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        ele=int(input("Enter element:"))
        dll.insert_ele(ele)
    
    print("Original List:",end='')
    dll.print_list()

    #Removal of element from list
    ele=int(input("Enter element to delete:"))
    dll.del_ele(ele)

    print()