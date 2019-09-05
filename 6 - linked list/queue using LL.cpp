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
List *front = NULL;
List *rear = NULL;


    void push(int x)
    {
        List *n = new List();
        n->a=x;
        if(front==NULL)
        {
            front=rear = n;
        }
        else
        {
            rear->next=n;
            rear = n;
        }
    }

    void pop()
    {
        if(front==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "pop value :: " <<front->a << endl;
            front = front->next;
        }
    }
    void Top()
    {
        if(front==NULL && rear==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "top value :: " <<front->a << endl;
        }
    }
    void size()
    {
        List *temp = front;
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
        List *temp = front;
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

