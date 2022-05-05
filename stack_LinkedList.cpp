#include <iostream>

using namespace std;
struct Node {
        int data;
        struct Node *next;
    };

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
void peak (struct Node** head_ref)
{
    struct Node* current = *head_ref;
    if (*head_ref == NULL)
    cout << "Stack is empty" <<endl;
    else
    cout <<  current -> data << endl;
}
void pop(struct Node** head_ref) {
    struct Node* temp = *head_ref;
    if (*head_ref == NULL)
    cout << "Stack is empty" <<endl;
    else{
    cout << "Popped element : " << temp->data << endl;
    *head_ref = temp->next;
    free(temp);
    }
}
void displayStack(struct Node** head_ref)
{
    struct Node* current = *head_ref;
    if (*head_ref == NULL)
    cout << "Stack is empty" <<endl;
    else
    {
        while (current != NULL)
        {
            cout << current -> data << " ";
            current = current -> next;
        }
        cout << endl;
    }
}
int main(){
    struct Node* head = NULL;
    int n;
    cin >> n;
    int temp;
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> temp;
        push(&head,temp);
    }
    displayStack(&head);
    pop(&head);
    displayStack(&head);
    peak(&head);

}
