class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class Linked_list:
    def __init__(self):
        self.head=None

    def insert_ele(self, data):
        new_Node=Node(data)
        if self.head is None:
            self.head=new_Node
            return
        cur=self.head
        while cur.next:
            cur=cur.next
        cur.next=new_Node

    def print_list(self):
        temp=self.head
        while temp:
            print("")

list=Linked_list()

n=int(input("Enter no of terms:"))
for i in range(n):
    ele=int(input("Enter element:"))
    list.insert_ele(ele)

temp=list.head
print("Elemments of list:",end=' ')
while temp:
    print(temp.data,end=' ')
    temp=temp.next
print()

