class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class Linked_list:
    def __init__(self):
        self.head=None

    def insert_ele(self, data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return
        temp=self.head
        while temp:
            temp=temp.next
        temp.next=new_node

list=Linked_list()

n=int(input("Enter number of elements:"))
for i in range(n):
    ele=int(input("Enter elements of list:"))
    