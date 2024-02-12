#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to search for an element recursively
Node* recursiveSearch(Node* node, int target) {
    if (node == nullptr) {
        return nullptr;  // Element not found
    }
    else if (node->data == target) {
        return node;  // Element found
    }
    else {
        return recursiveSearch(node->next, target);
    }
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    int target = 3;
    Node* result = recursiveSearch(head, target);

    if (result != nullptr) {
        std::cout << "Element " << target << " found in the linked list." << std::endl;
    }
    else {
        std::cout << "Element " << target << " not found in the linked list." << std::endl;
    }

    // Remember to deallocate memory to avoid memory leaks
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
