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
            print(temp.data,end=' ')
            temp=temp.next
        print()

    def rev(self):
        if self.heada is None:
            print("Empty List!")
            return
        temp=self.head
        last=None
        while temp:
            swap=temp.next
            temp.next=temp.prev
            temp.prev=swap

            last=temp
            temp=temp.prev
        last=self.head

def main():
    list=DoublyLinkedList()

    #Formation of doubly linked list
    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        ele=int(input("Enter element:"))
        list.insert_ele(ele)
    print("Original List:",end='')
    list.print_list()

    #Reverse doubly linked list
    list.rev()

    #Print reversed doubly linked list
    print("Reversed List:",end=)