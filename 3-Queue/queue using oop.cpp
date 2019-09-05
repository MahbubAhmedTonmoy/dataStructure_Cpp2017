#include<bits/stdc++.h>
using namespace std;
#define C 5

class Queue
{
private:
    int a[C];
    int rear = 0;
    int front = 0;
public:
    void enqueue(int x)
    {
        if(rear==C) cout <<"queue overflow "<<endl;
        else
        {
            a[rear]=x;
            cout << "add : " << x << " at position : " << rear << endl;
            rear++;
            cout << "now rear is : " << rear << endl;
        }
    }

    void dequeue()
    {
        if(front == rear) cout <<"queue underflow "<<endl;
        else
        {
            cout << "delete element is: " << a[front] <<endl;
            front++;
            cout << "now front is : " << front << endl;
        }
    }

    void Front()
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
};

int main()
{
    Queue q;
    q.enqueue(10); ///index 0
    q.enqueue(20); ///index 1
    q.enqueue(30); ///index 2
    q.enqueue(40);
    q.enqueue(50);
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    /*
    q.Front();
    q.dequeue(); /// 20,30 index 1,2
    q.print();
    q.Front();
    q.enqueue(40); ///index 3
    q.enqueue(50); /// index 4
    q.enqueue(60); ///index 5 queue overflow
    q.enqueue(70); ///index 6 queue overflow
    q.print();
    q.Size();
    return 0;
    */
}

