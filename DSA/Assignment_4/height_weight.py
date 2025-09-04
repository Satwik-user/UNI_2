class Node:
    def __init__(self, height, weight):
        self.height=height
        self.weight=weight
        self.next=None

class Linked_list:
    def __init__(self):
        self.head=None

    def insert_ele(self, height, weight):
        new_Node=Node(height, weight)
        if self.head is None:
            self.head=new_Node
            return
        cur=self.head
        while cur.next:
            cur=cur.next
        cur.next=new_Node

list=Linked_list()

n=int(input("Enter number of students:"))
for i in range(n):
    height=int(input("Enter height of student:"))
    weight=int(input("Enter weight of student:"))
    list.insert_ele(height, weight)

temp=list.head
print()