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
        while temp.next:
            temp=temp.next
        temp.next=new_node
    
    def print_list(self):
        temp=self.head
        while temp:
            print(temp.data, end=' ')
            temp=temp.next
        print()

    def mod_list(self, ele, pos):
        if pos==0:
            self.head.data=ele
            return
        temp=self.head
        p=1
        while temp and p<pos+1:
            p+=1
            temp=temp.next
        temp.data=ele


list=Linked_list()

n=int(input("Enter number of elements:"))
for i in range(n):
    ele=int(input("Enter elements of list:"))
    list.insert_ele(ele)

print("Original List:",end=' ')
list.print_list()

ele=int(input("Enter the element to modify:"))
pos=int(input("Enter position of element to modify:"))
list.mod_list(ele, pos)

print("Modified List:",end=' ')
list.print_list()