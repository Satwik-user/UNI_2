class Node:
    def __init__(self, data):
        self.daat=data
        self.next=None

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


list=Linked