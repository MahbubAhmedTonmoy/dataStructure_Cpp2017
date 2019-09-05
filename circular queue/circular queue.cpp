#include<bits/stdc++.h>
using namespace std;
#define SIZE 5

int a[SIZE];
int front = -1;
int rear = -1;

int IS_FULL()
{
    if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
     return 0;
}

int IS_EMPTY()
{
    if(front==-1) return 1;
     return 0;
}

void enqueue(int x)
{
    if(IS_FULL()) cout << "queue is overflow"<<endl;
    else
    {
        if(front== -1) front = 0;
        rear = (rear+1)%SIZE;
        a[rear] = x;
        cout << "insert : "<< x << " at position : " << rear << endl;
    }
}

void dequeue()
{
    if(IS_EMPTY()) cout << "queue is under flow"<< endl;
    else
    {
        if(front==rear){
            rear = -1 ;front = -1;
        }
        else
        {
            front = (front+1)%SIZE;
        }
        cout << "deleted : " << a[front] << "now front is : " << front << endl;
    }
}


void display()
{
    cout << front << endl << rear << endl;
    cout << "queue : ";
    for(int i = front; i!=rear; i=(i+1)%SIZE)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
}

