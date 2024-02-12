#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to reverse a linked list iteratively
Node* iterativeReverse(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;  // Save the next node
        current->next = prev;  // Reverse the link
        prev = current;        // Move to the next nodes
        current = next;
    }

    return prev;  // The new head is the last node (prev)
}

// Function to print the reversed linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original linked list: ";
    printList(head);

    Node* reversedHead = iterativeReverse(head);

    std::cout << "Reversed linked list: ";
    printList(reversedHead);

    // Remember to deallocate memory to avoid memory leaks
    delete reversedHead->next->next->next;
    delete reversedHead->next->next;
    delete reversedHead->next;
    delete reversedHead;

    return 0;
}
