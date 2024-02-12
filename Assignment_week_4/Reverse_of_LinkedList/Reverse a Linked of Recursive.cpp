#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to reverse a linked list recursively
Node* recursiveReverse(Node* current, Node* prev = nullptr) {
    if (current == nullptr) {
        return prev;  // Return the new head (last node of the original list)
    }

    Node* next = current->next;
    current->next = prev;  // Reverse the link
    return recursiveReverse(next, current);  // Recur with updated pointers
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

    Node* reversedHead = recursiveReverse(head);

    std::cout << "Reversed linked list: ";
    printList(reversedHead);

    // Remember to deallocate memory to avoid memory leaks
    delete reversedHead->next->next->next;
    delete reversedHead->next->next;
    delete reversedHead->next;
    delete reversedHead;

    return 0;
}
