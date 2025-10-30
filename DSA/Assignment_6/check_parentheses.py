class Stack:
    def __init__(self, cap):
        self.arr=[]
        self.cap=cap
        self.top=-1
    
    @staticmethod
    def createStack(capacity):
        return Stack(capacity)