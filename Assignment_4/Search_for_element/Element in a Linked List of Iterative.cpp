#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to search for an element iteratively
Node* iterativeSearch(Node* head, int target) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == target) {
            return current;  // Element found
        }
        current = current->next;
    }

    return nullptr;  // Element not found
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    int target = 3;
    Node* result = iterativeSearch(head, target);

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
