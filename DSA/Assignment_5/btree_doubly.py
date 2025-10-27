class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None
        self.prev = None  # Global variable for tracking previous node
    
    # Create a new tree node
    def createTreeNode(self, data):
        return TreeNode(data)
    
    # Insert node in BST
    def insertInBST(self, root, data):
        if root is None:
            return self.createTreeNode(data)
        
        if data < root.data:
            root.left = self.insertInBST(root.left, data)
        elif data > root.data:
            root.right = self.insertInBST(root.right, data)
        
        return root
    
    # Print binary tree (in-order traversal)
    def printInOrder(self, root):
        if root is not None:
            self.printInOrder(root.left)
            print(root.data, end=" ")
            self.printInOrder(root.right)
    
    # Method 1: Convert BST to DLL using global previous pointer
    def binaryTreeToDLL(self, root):
        if root is None:
            return None
        
        # Recursively convert left subtree
        head = self.binaryTreeToDLL(root.left)
        
        # If this is the first node (leftmost), it becomes head
        if self.prev is None:
            head = root
        else:
            # Link the previous node with current node
            root.left = self.prev
            self.prev.right = root
        
        # Update previous node
        self.prev = root
        
        # Recursively convert right subtree
        self.binaryTreeToDLL(root.right)
        
        return head
    
    # Method 2: Convert BST to DLL using helper function
    def convertToDLL(self, root, head_tail):
        if root is None:
            return
        
        head, tail = head_tail[0], head_tail[1]
        
        # Convert left subtree
        self.convertToDLL(root.left, head_tail)
        
        # Process current node
        if head_tail[0] is None:
            # First node - becomes head
            head_tail[0] = root
            head_tail[1] = root
            root.left = None
            root.right = None
        else:
            # Link with previous node
            head_tail[1].right = root
            root.left = head_tail[1]
            root.right = None
            head_tail[1] = root
        
        # Convert right subtree
        self.convertToDLL(root.right, head_tail)
    
    # Print doubly linked list (forward)
    def printDLL(self, head):
        print("Doubly Linked List (Forward): ", end="")
        temp = head
        while temp is not None:
            print(temp.data, end=" ")
            temp = temp.right
        print()
    
    # Print doubly linked list (backward)
    def printDLLReverse(self, head):
        if head is None:
            return
        
        # Find the tail
        tail = head
        while tail.right is not None:
            tail = tail.right
        
        print("Doubly Linked List (Backward): ", end="")
        while tail is not None:
            print(tail.data, end=" ")
            tail = tail.left
        print()
    
    # Find the leftmost node (head of DLL)
    def findHead(self, root):
        if root is None:
            return None
        
        while root.left is not None:
            root = root.left
        return root
    
    # Search for element in BST
    def search(self, root, data):
        if root is None:
            return False
        
        if data == root.data:
            return True
        elif data < root.data:
            return self.search(root.left, data)
        else:
            return self.search(root.right, data)
    
    # Count nodes in tree
    def countNodes(self, root):
        if root is None:
            return 0
        return 1 + self.countNodes(root.left) + self.countNodes(root.right)
    
    # Find height of tree
    def height(self, root):
        if root is None:
            return 0
        return 1 + max(self.height(root.left), self.height(root.right))
    
    # Display tree structure (level order)
    def displayTree(self, root):
        if root is None:
            print("Tree is empty")
            return
        
        from collections import deque
        queue = deque([root])
        
        while queue:
            node = queue.popleft()
            print(f"Data: {node.data}", end=" | ")
            
            if node.left:
                print(f"Left: {node.left.data}", end=" | ")
                queue.append(node.left)
            else:
                print("Left: None", end=" | ")
            
            if node.right:
                print(f"Right: {node.right.data}")
                queue.append(node.right)
            else:
                print("Right: None")


def main():
    bst = BST()
    
    print("=== Binary Tree to Doubly Linked List Conversion ===\n")
    
    # Input
    n = int(input("Enter number of nodes: "))
    
    print("Enter node values: ", end="")
    values = list(map(int, input().split()))
    
    # Build BST
    bst.root = None
    for data in values:
        bst.root = bst.insertInBST(bst.root, data)
    
    # Display tree
    print("\nBinary Tree (In-order): ", end="")
    bst.printInOrder(bst.root)
    print()
    
    print(f"Tree Statistics:")
    print(f"  Total nodes: {bst.countNodes(bst.root)}")
    print(f"  Tree height: {bst.height(bst.root)}")
    
    # Method 1: Using global previous pointer
    print("\n--- Method 1: Using Global Previous Pointer ---")
    bst.prev = None  # Reset global variable
    head1 = bst.binaryTreeToDLL(bst.root)
    head1 = bst.findHead(head1)  # Find actual head
    bst.printDLL(head1)
    bst.printDLLReverse(head1)
    
    # Method 2: Using helper function with head and tail pointers
    print("\n--- Method 2: Using Helper Function with Head/Tail Pointers ---")
    head_tail = [None, None]  # [head, tail]
    bst.convertToDLL(bst.root, head_tail)
    bst.printDLL(head_tail[0])
    bst.printDLLReverse(head_tail[0])
    
    # Additional operations
    print("\n--- Additional Operations ---")
    search_val = int(input("Enter value to search: "))
    if bst.search(bst.root, search_val):
        print(f"{search_val} found in the BST!")
    else:
        print(f"{search_val} not found in the BST!")


def interactive_menu():
    """Interactive menu for various operations"""
    bst = BST()
    
    while True:
        print("\n=== BST to DLL Conversion Menu ===")
        print("1. Build BST")
        print("2. Display BST (In-order)")
        print("3. Convert to DLL (Method 1)")
        print("4. Convert to DLL (Method 2)")
        print("5. Search element")
        print("6. Tree statistics")
        print("7. Exit")
        
        choice = int(input("Enter choice: "))
        
        if choice == 1:
            n = int(input("Enter number of nodes: "))
            print("Enter values: ", end="")
            values = list(map(int, input().split()))
            
            bst.root = None
            for data in values:
                bst.root = bst.insertInBST(bst.root, data)
            print("BST created successfully!")
        
        elif choice == 2:
            print("In-order traversal: ", end="")
            bst.printInOrder(bst.root)
            print()
        
        elif choice == 3:
            if bst.root is None:
                print("Build BST first!")
            else:
                bst.prev = None
                head = bst.binaryTreeToDLL(bst.root)
                head = bst.findHead(head)
                bst.printDLL(head)
                bst.printDLLReverse(head)
        
        elif choice == 4:
            if bst.root is None:
                print("Build BST first!")
            else:
                head_tail = [None, None]
                bst.convertToDLL(bst.root, head_tail)
                bst.printDLL(head_tail[0])
                bst.printDLLReverse(head_tail[0])
        
        elif choice == 5:
            val = int(input("Enter value to search: "))
            if bst.search(bst.root, val):
                print(f"{val} found!")
            else:
                print(f"{val} not found!")
        
        elif choice == 6:
            print(f"Total nodes: {bst.countNodes(bst.root)}")
            print(f"Tree height: {bst.height(bst.root)}")
        
        elif choice == 7:
            print("Exiting...")
            break
        
        else:
            print("Invalid choice!")


if __name__ == "__main__":
    # Uncomment one of the following:
    main()
    # interactive_menu()