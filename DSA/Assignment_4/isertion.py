class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class Linked_list:
    def __init__(self, head):
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
        print("Elements of list:")
        while temp:
            print(temp.data,end=' ')
            

list=Linked_list()

n=int(input("Enter number of elements:"))
for i in range(n):
    data=int(input("Enter an element:"))
    list.insert_ele(data)

temp=list.head
print("Elements of list:",end=' ')
while temp:
    print(temp.data,end=' ')
    temp=temp.next
print()

ele=int(input("Enter element to insert:"))
pos=int(input("Enter position of element:"))
insert_pos