#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int a;
    List *next;
    List *prev;
    List()
    {
        next=prev = NULL;
    }
};
    List *front = NULL;
    List *rear = NULL;

    void push_back(int x)
    {
        List *n = new List();
        n->a=x;
        if(front==NULL)
        {
            front=rear = n;
            rear->prev = NULL;
        }
        else
        {
            rear->next=n;
            n->prev = rear;
            rear = n;
        }
    }
    void push_front(int x)
    {
        List *n=new List();
        n->a=x;
        n->next = NULL;
        if(front==NULL)
        {
            front=rear=n;
            rear->prev = NULL;
            return;
        }
        else
        {
            n->next=front;
            front->prev = n;
            front=n;
        }

    }

    void pop_front()
    {
        if(front==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "pop value :: " <<front->a << endl;

            front = front->next;
             front->prev = NULL;

        }
    }
    void pop_back()
    {
        if(front==NULL)  cout<<"stack is empty."<<endl;
        else
        {
                cout << "pop value :: " <<rear->a << endl;

                rear = rear->prev;
                rear ->next = NULL;
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
    void Back()
    {
        if(front==NULL && rear==NULL)  cout<<"stack is empty."<<endl;
        else
        {
            cout << "rear value :: " <<rear->a << endl;
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

    push_back(1);
    push_back(2);
    push_front(10);
    push_back(3);
    push_back(4);
    display();
    Top();
    Back();
    size();
    pop_back();
    pop_back();
    pop_back();
    pop_back();
    //s.Back();
    display();

}


