#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *next;
    List * prev;
};
List * head = NULL;

void creat(int x)
{
    List *now;
    for(int i=0;i<x;i++)
    {
        List *temp = new List();
        cin >> temp->data;
        temp->next = NULL;
        temp->prev = NULL;
            if(head == NULL)
            {
                now =head = temp;
            }
            else
            {
                now->next = temp;
                temp->prev = now;
                now = temp;
            }
    }
}
void show()
{
    List *temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_node(int x)
{
    if(head->data==x)
    {
        head = head->next;
        head->next = NULL;
        return;
    }

        List *now= head,*prev;
        while(now->data!= x)
        {
            prev = now;
            now = now->next;
        }
        now->next->prev=prev->next;
        prev->next = now->next;
        now->next = NULL;
        now->prev = NULL;

}
void reverse()
{
    List *temp = head;
    while(temp->next != NULL)
    {
        temp= temp->next;
    }
    cout << " reverse : ";
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}
List *Reverse(List* node)
{
    // If empty list, return
    if (node==NULL)
        return NULL;

    // Otherwise, swap the next and prev
    List* temp = node->next;
    node->next = node->prev;
    node->prev = temp;

    // If the prev is now NULL, the list
    // has been fully reversed
    if (node->prev!=NULL)
        return node;

    // Otherwise, keep going
    return Reverse(node->prev);
}

int main()
{
    creat(4);
    //delete_node(3);
    Reverse(head);
    //show();
}
