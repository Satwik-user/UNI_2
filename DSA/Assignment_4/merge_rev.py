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
        