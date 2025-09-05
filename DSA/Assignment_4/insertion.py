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
        while temp:
            print(temp.data,end=' ')
            temp=temp.next
        print()

    def insert_pos(self, ele, pos):
        new_node=Node(ele)
        if pos==0:
            new_node.next=self.head
            self.head=new_node
            return
        temp=self.head
        p=1
        while temp and p<pos-1:
            temp=temp.next
            p+=1
        new_node.next=temp.next
        temp.next=new_node


list=Linked_list()

n=int(input("Enter number of elements:"))
for i in range(n):
    data=int(input("Enter an element:"))
    list.insert_ele(data)

print("Original List:",end=' ')
list.print_list()

ele=int(input("Enter element to insert:"))
pos=int(input("Enter position of element:"))
list.insert_pos(ele, pos)

print("Modified List:",end=' ')
list.print_list()