#include <iostream>
#include <cmath>
using namespace std;
struct Node {
        int data;
        struct Node *next;
    };
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
void midLinkedList(struct Node** head_ref,int num)
{
    struct Node* current = *head_ref;
    for (int i = 0 ; i <= num;i++)
    {
        if (i == num)
        {
            cout << current -> data;
        }
        current = current -> next;
    }
}
int main ()
{
    struct Node* head = NULL;
    int n,temp,num;
    cin >> n;
    if (n%2==0)
        num = (n/2) - 1;
    else
        num = n/2;
    for (int i = 0 ; i < n; i ++)
    {
        cin >> temp;
        insertAtEnd(&head,temp);
    }
    midLinkedList(&head,num);
    return 0;
}