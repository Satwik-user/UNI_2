class Node:
    def __init__(self, coeff, exp):
        self.coeff=coeff
        self.exp=exp
        self.next=None

class Linked_list:
    def __init__(self):
        self.head=None

    def insert_ele(self, coeff, exp):
        new_node=Node(coeff, exp)
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
            print(f"Coeffiecient-{temp.coeff} Exponent-{temp.exp}",end=' ')
            temp=temp.next

list1=Linked_list()

n=int(input("Enter number of nodes for 1st polynomial:"))
for i in range(n):
    coeff, exp=int(input("Enter coeffiecient and exponent:")).split(' ')
    list.insert_ele(coeff, exp)

print("Original List:",end=' ')
list.print_list()