//PROBLEM : Given the head of the sorted linked list, delete all the duplicates such that each appears only once.
//Return the sorted linked list as well.
//Delete all the duplicate elements from the singly linked list 

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void push(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

void deleteDuplicates(Node* head) {
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp; //Free the memory of the removed node
        } else {
            current = current->next;
        }
    }
}

int main() {
    head = NULL;
    push(5);
    push(4);
    push(4);
    push(3);
    push(2);
    push(2);
    push(1);
    
    cout << "Given Linked List: ";
    printList(head);
    
    deleteDuplicates(head);
    
    cout << "\n\nLinked List after removing duplicates: ";
    printList(head);
    
    return 0;
}
        
