class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Linked_list:
    def __init__(self):
        self.head=None

    def insert_ele(self,data):
        new_Node=Node(data)
        if self.head is None:
            self.head=new_Node
            return
        cur=self.head
        while cur.next:
            cur=cur.next
        cur.next=new_Node

list=Linked_list()

string=input("Enter a string:")
n=len(string)
for i in range(n):
    list.insert_ele(string[i])

temp=list.head
print("Elements of list:",end=' ')