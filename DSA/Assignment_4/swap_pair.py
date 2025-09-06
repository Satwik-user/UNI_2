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
        