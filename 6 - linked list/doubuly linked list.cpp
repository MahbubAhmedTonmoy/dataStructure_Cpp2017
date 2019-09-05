#include<bits/stdc++.h>
using namespace std;

class List
{
public :
    int data;
    List *next;
    List *prev;
    List()
    {
        next = NULL;
        prev = NULL;
    }
};
List *head = NULL;
void creat(int x)
{
    List *now;
    for(int i=0;i<x;i++)
    {
        if(head == NULL)
        {
            head = new List();
            cin >> head->data;
            now = head;
        }
        else
        {
            List *n = new List();
            cin >> n->data;
            now->next = n;
            n->prev = now;
            now = n;
        }
    }
}

void Show()
{
    List *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

void reverse()
{
    List *temp = head;
    while(temp->next!= NULL)
    {
        temp = temp->next;
    }
    cout << "reverse : ";
    while(temp!=NULL)
    {
        cout<< temp->data << " ";
        temp = temp->prev;
    }
}

int main()
{
    creat(5);
    Show();
    reverse();
}
