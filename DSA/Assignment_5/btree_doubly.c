#include <stdio.h>
#include <stdlib.h>

// Binary Tree Node
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new tree node
TreeNode* createTreeNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert node in BST
TreeNode* insertInBST(TreeNode* root, int data) {
    if (root == NULL) {
        return createTreeNode(data);
    }
    
    if (data < root->data) {
        root->left = insertInBST(root->left, data);
    } else if (data > root->data) {
        root->right = insertInBST(root->right, data);
    }
    
    return root;
}

// Function to print binary tree (in-order)
void printInOrder(TreeNode* root) {
    if (root != NULL) {
        printInOrder(root->left);
        printf("%d ", root->data);
        printInOrder(root->right);
    }
}

// Global variable to keep track of previous node during conversion
TreeNode* prev = NULL;

// Function to convert binary tree to doubly linked list
TreeNode* binaryTreeToDLL(TreeNode* root) {
    if (root == NULL) return NULL;
    
    // Recursively convert left subtree
    TreeNode* head = binaryTreeToDLL(root->left);
    
    // If this is the first node (leftmost), it becomes head
    if (prev == NULL) {
        head = root;
    } else {
        // Link the previous node with current node
        root->left = prev;
        prev->right = root;
    }
    
    // Update previous node
    prev = root;
    
    // Recursively convert right subtree
    binaryTreeToDLL(root->right);
    
    return head;
}

// Alternative approach using helper function
void convertToDLL(TreeNode* root, TreeNode** head, TreeNode** tail) {
    if (root == NULL) return;
    
    // Convert left subtree
    convertToDLL(root->left, head, tail);
    
    // Process current node
    if (*head == NULL) {
        // First node - becomes head
        *head = root;
        *tail = root;
        root->left = NULL;
        root->right = NULL;
    } else {
        // Link with previous node
        (*tail)->right = root;
        root->left = *tail;
        root->right = NULL;
        *tail = root;
    }
    
    // Convert right subtree
    convertToDLL(root->right, head, tail);
}

// Function to print doubly linked list
void printDLL(TreeNode* head) {
    printf("Doubly Linked List (Forward): ");
    TreeNode* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->right;
    }
    printf("\n");
}

// Function to print doubly linked list in reverse
void printDLLReverse(TreeNode* head) {
    if (head == NULL) return;
    
    // Find the tail
    TreeNode* tail = head;
    while (tail->right != NULL) {
        tail = tail->right;
    }
    
    printf("Doubly Linked List (Backward): ");
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->left;
    }
    printf("\n");
}

// Function to find the leftmost node (head of DLL)
TreeNode* findHead(TreeNode* root) {
    if (root == NULL) return NULL;
    
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

int main() {
    TreeNode* root = NULL;
    int n, data;
    
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    printf("Enter node values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertInBST(root, data);
    }
    
    printf("Binary Tree (In-order): ");
    printInOrder(root);
    printf("\n");
    
    // Method 1: Using global previous pointer
    printf("\n--- Method 1: Using global previous pointer ---\n");
    prev = NULL;  // Reset global variable
    TreeNode* head1 = binaryTreeToDLL(root);
    head1 = findHead(head1);  // Find actual head
    printDLL(head1);
    printDLLReverse(head1);
    
    // Rebuild tree for second method
    root = NULL;
    printf("\nRebuilding tree...\n");
    printf("Enter node values again: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertInBST(root, data);
    }
    
    // Method 2: Using helper function with head and tail pointers
    printf("\n--- Method 2: Using helper function ---\n");
    TreeNode* head2 = NULL;
    TreeNode* tail2 = NULL;
    convertToDLL(root, &head2, &tail2);
    printDLL(head2);
    printDLLReverse(head2);
    
    return 0;
}