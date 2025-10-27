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

        temp=self.head
        for _ in range(br):
            list1.insert_ele(temp.data)
            temp=temp.next
        for _ in range(br+1, len+1):
            list2.insert_ele(temp.data)
            temp=temp.next

        return list1, list2
    
    def rev(self):
        if self.head is None:
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
        self.head=last

    def join(self, list2):
        if self.head is None:
            print("Empty List!")
            return
        temp=self.head
        while temp.next:
            temp=temp.next
        temp.next=list2.head
        if list2.head is not None:
            list2.head.prev=temp

def main():
    list=DoublyLinkedList()

    n=int(input("Enter number of nodes:"))
    for _ in range(n):
        ele=int(input("Enter element:"))
        list.insert_ele(ele)
    print("Original List:",end='')
    list.print_list()
    