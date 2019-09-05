#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int a;
    List *next;

    List()
    {
        next = NULL;
    }
};
List *head = NULL;
    void push(int x)
    {
        List *n = new List();
            n->a=x;
        if(head==NULL)
        {
            head=n;
        }
        else
        {

            n->next=head;
            head = n;
        }
    }

    void pop()
    {
        if(head==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "pop value :: " <<head->a << endl;
            head = head->next;
        }
    }
    void Top()
    {
        if(head==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "top value :: " <<head->a << endl;
            //head = head->next;
        }
    }
    void size()
    {
        List *temp = head;
        int c = 0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        cout << "size : " << c<<endl;
    }
    void display()
    {
        List *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->a << " ";
            temp=temp->next;
        }
        cout << endl;
    }

int main()
{

    push(1);
    push(2);
    push(3);
    display();
    Top();
    size();
    pop();
    pop();
}
