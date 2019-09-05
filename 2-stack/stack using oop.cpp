#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 5
class Stack
{
    int top= 0;
    int arr[CAPACITY];
public:
    void push(int x)
    {
        if(top==CAPACITY)
            cout << "stack is overflow" << endl;
        else
        {
            arr[top] = x;
            cout << "input " << x << " at index : " << top<<endl;
            top++;
            cout << "now top is : " << top << endl;
        }
    }

    void pop()
    {
        if(top==0)
            cout << "stack is underflow"<<endl;
        else
            cout << "pop element : "<< arr[top-1] << " which index number is :" << top-1 << endl;
        top--;
        cout << "now top is : "<< top << endl;
    }

    void Top()
    {
        if(top==0)
            cout << "stack is underflow"<<endl;
        else
            cout <<  "top is : "<<arr[top-1] << endl;
    }

    void Size()
    {
        cout << "stack size is : " << top<<endl;
    }
    void print()
    {
        cout << "stack is : ";
        for(int i=0;i<top;i++)
            cout << arr[i] << ' ';
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.Size();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    //s.Top();
    /*s.pop();
    s.print();
    s.Top();
    s.push(40);
    s.push(50);
    s.push(60);
    s.print();
    s.Size();
    s.push(70);
    return 0;*/
}
