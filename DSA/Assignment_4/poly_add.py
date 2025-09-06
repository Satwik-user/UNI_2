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
            print(f"Coeffiecient-{temp.coeff} Exponent-{temp.exp}")
            temp=temp.next

list1=Linked_list()
list2=Linked_list()

n1=int(input("Enter number of nodes for 1st polynomial:"))
for i in range(n1):
    coeff1, exp1=map(int,input("Enter coeffiecient and exponent for 1st polynomial:").split())
    list1.insert_ele(coeff1, exp1)
n2=int(input("Enter number of nodes for 2nd polynomial:"))
for i in range(n2):
    coeff2,exp2=map(int, input("Enter coefficient and exponent for 2nd polynomial:").split())
    list2.insert_ele(coeff2, exp2)

print("Polynimial 1:",end=' ')
list1.print_list()
print("Pollllynomial")