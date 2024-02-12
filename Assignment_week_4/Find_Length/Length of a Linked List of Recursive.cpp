#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to find the length of a linked list recursively
int recursiveLength(Node* node) {
    if (node == nullptr) {
        return 0;  // Length is 0 for an empty list
    }
    else {
        return 1 + recursiveLength(node->next);
    }
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    int length = recursiveLength(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    // Remember to deallocate memory to avoid memory leaks
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
