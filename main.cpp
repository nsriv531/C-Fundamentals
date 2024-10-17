#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>

// Node for Linked List
struct ListNode {
    int value;
    ListNode* next;
    ListNode(int val) : value(val), next(nullptr) {}
};

// Node for Binary Search Tree
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Basic Array Example
void basicArrayDemo() {
    std::cout << "\nBasic Array Demo:\n";
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        std::cout << "Array[" << i << "] = " << arr[i] << "\n";
    }
}

// Linked List Functions
void insertLinkedList(ListNode*& head, int value) {
    ListNode* newNode = new ListNode(value);
    newNode->next = head;
    head = newNode;
}

void displayLinkedList(ListNode* head) {
    std::cout << "Linked List: ";
    while (head) {
        std::cout << head->value << " -> ";
        head = head->next;
    }
    std::cout << "NULL\n";
}

// Stack Example
void stackDemo() {
    std::cout << "\nStack Demo (LIFO):\n";
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    while (!s.empty()) {
        std::cout << "Stack Top: " << s.top() << "\n";
        s.pop();
    }
}

// Queue Example
void queueDemo() {
    std::cout << "\nQueue Demo (FIFO):\n";
    std::queue<std::string> q;
    q.push("First");
    q.push("Second");
    q.push("Third");

    while (!q.empty()) {
        std::cout << "Queue Front: " << q.front() << "\n";
        q.pop();
    }
}

// Binary Search Tree Functions
TreeNode* insertBST(TreeNode* root, int value) {
    if (!root) {
        return new TreeNode(value);
    }
    if (value < root->value) {
        root->left = insertBST(root->left, value);
    } else {
        root->right = insertBST(root->right, value);
    }
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        std::cout << root->value << " ";
        inorderTraversal(root->right);
    }
}

void bstDemo() {
    std::cout << "\nBinary Search Tree Demo (In-Order Traversal):\n";
    TreeNode* root = nullptr;
    root = insertBST(root, 15);
    root = insertBST(root, 10);
    root = insertBST(root, 20);
    root = insertBST(root, 8);
    root = insertBST(root, 12);

    std::cout << "BST In-Order Traversal: ";
    inorderTraversal(root);
    std::cout << "\n";
}

int main() {
    // Array Demonstration
    basicArrayDemo();

    // Vector (dynamic array) Example
    std::cout << "\nVector Example:\n";
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Adding an element
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << "Vector[" << i << "] = " << vec[i] << "\n";
    }

    // Linked List Demonstration
    ListNode* head = nullptr;
    insertLinkedList(head, 1);
    insertLinkedList(head, 2);
    insertLinkedList(head, 3);
    displayLinkedList(head);

    // Stack Demonstration
    stackDemo();

    // Queue Demonstration
    queueDemo();

    // Binary Search Tree Demonstration
    bstDemo();

    return 0;
}
