#include <iostream>
using namespace std;
struct Node {
        int data;
        struct Node *next;
    };
void insertAtBeginning(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
void insertAtEnd (struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node -> data = new_data;
    new_node -> next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last -> next != NULL) last = last ->next;
    last -> next = new_node;
    return;
}
void insertAfter (struct Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }
    struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}
void getLastElement (struct Node** head)
{
    struct Node* last = *head;
    while (last -> next != NULL)
        last = last -> next;
    cout << last -> data;
}
void traverseLinkedList(struct Node** head_ref)
{
    struct Node* current = *head_ref;
    while (current != NULL)
    {
        cout << current -> data;
        current = current -> next;
    }
}
int main ()
{
    struct Node* head = NULL;
    insertAtEnd(&head,1);
    insertAtBeginning(&head,2);
    insertAtBeginning(&head,3);
    insertAtEnd(&head,4);
    insertAfter(head->next,5);
    cout << "Linked List : ";
    traverseLinkedList(&head);
    return 0;
}