#include<bits/stdc++.h>
using namespace std;
#define C 5
int a[C];
int rear = 0;
int front = 0;

void enqueue(int x)
{
    if(rear==C) cout <<"queue overflow "<<endl;
    else
    {
        a[rear]=x;
        rear++;
    }
}

void dequeue()
{
    if(front == rear) cout <<"queue underflow "<<endl;
    else
    {
        cout << "delete element is: " << a[front]<<endl;
        front++;
    }
}

void Top()
{
    if(front == rear) cout <<"queue underflow so no top"<<endl;
    else cout << "top value : "<<a[front]<<endl;
}

void Size()
{
    cout << "queue size is : "<<rear-front;
}

void print()
{
    if(front == rear) cout <<"queue underflow so no top"<<endl;
    else
    {
        cout << "queue is : ";
        for(int i=front;i<rear;i++)
            cout << a[i] << ' ';
        cout << endl;
    }

}
int main()
{
    enqueue(10); ///index 0
    enqueue(20); ///index 1
    enqueue(30); ///index 2
    print();
    Top();
    dequeue(); /// 20,30 index 1,2
    print();
    Top();
    enqueue(40); ///index 3
    enqueue(50); /// index 4
    enqueue(60); ///index 5 queue overflow
    enqueue(70); ///index 6 queue overflow
    print();
    return 0;
}
