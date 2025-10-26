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
        temp.prev.next=temp.next
        if temp.next:
            temp.next.prev=temp.prev
        
    def print_list(self):
        if self.head is None:
            print("Empty list!")
            return
        
        temp=self.head
        while temp.next:
            print(temp.data,end=' ')
            temp=temp.next
        print()

def main():
    dll=DoublyLinkedList()

    #Fomrmation of Doubly Linked List
    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        ele=int(input("Enter element:"))
        dll.insert_ele(ele)

    print("Original List:",end='')
    dll.print_list()

    #Insertion of element at start
    ele=int(input("Enter element to insert at start:"))
    dll.insert_start(ele)
    print("List after insertion at start:",end='')
    dll.print_list()

    #Insertion of element at end
    ele=int(input("Enter element to insert at end:"))
    dll.insert_ele(ele)
    print("List after insertion at end:",end='')
    dll.print_list()

    #Insertion of element at specific position
    pos=int(input("Enter position to insert element:"))
    ele=int(input(f"Enter element to insert at {pos} position:"))
    dll.insert_pos(pos, ele)
    print("List after insertion at position:",end='')
    dll.print_list()

    #Deletion of element at start
    dll.del_start()
    print("List after deletion of element at start:",end='')
    dll.print_list()

    #Deletion of element at end
    dll.del_end()
    print("List after deletion of element at end:")
    dll.print_list()

    #Deletion of element at specific position
    pos=int(input("Enter position of deletion of element:"))
    dll.del_pos(pos)
    print("List after deletion at position:",end='')
    dll.print_list()