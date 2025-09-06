class Node:
    def __init__(self, data):
        self.daat=data
        self.next=None

class Linked_list:
    def __init___(self):
        self.head=None

    def insert_ele(self, data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return
        cur=self.head
        while cur.next:
            cur=cur.next
        cur.next=new_node

    def print_list(self):
        temp=self.head
        while temp:
            print(temp.data,end=' ')
            temp=temp.next
        print()


list1=Linked_list()
list2=Linked_list()

n1=int(input("Enter number of elements of 1st list:"))
n2=int(input("Enter number of elements of 2nd list:"))
for i in range(n1):
    ele1=int(input("Enter element:"))
    list1.insert_ele(ele1)
for i in range(n2):
    ele2=int(input("Enter element:"))
    list2.insert_ele(ele2)

print("Original List 1:",end=' ')
list1.print_list()
print("Original List 2:",end=' ')
list2.print_list()

temp=list1.head
while temp.next:
    temp=temp.next
temp.next=list2.head

print("Merged List:",end=' ')
