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

    def del_list(self, pos):
        temp=self.head
        if pos==0:
            self.head=temp.next
            temp=None
            return
        p=1
        while temp and p<pos:
            prev=temp
            temp=temp.next
            p+=1
        prev.next=temp.next
        temp=None


list=Linked_list()

n=int(input("Enter number of elements:"))
for i in range(n):
    ele=int(input("Enter element:"))
    list.insert_ele(ele)

print("Original List:",end=' ')
list.print_list()

del_pos=int(input("Enter position of element to delete:"))
list.del_list(del_pos)

print("modified List:")
list.print_list()
