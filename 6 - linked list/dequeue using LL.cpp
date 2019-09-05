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
    void push_back(int x)
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
    void push_front(int x)
    {
        List *n=new List();
        n->a=x;
        n->next = NULL;
        if(front==NULL)
        {
            front=rear=n;
            return;
        }
        else
        {
            n->next=front;
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
        }
    }
    void pop_back()
    {
        if(front==NULL)  cout<<"stack is empty."<<endl;
        else
        {
             List *now = front , *prev;
                while(now->next!=NULL)
                {
                    prev = now;
                    now = now->next;
                }
                if(now == NULL) return;
                prev->next = now->next;
                //now->next = NULL;
                cout << "pop value :: " <<now->a << endl;
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
    display();
    Top();
    Back();
    size();
    pop_back();
    display();
    //s.pop();
}


