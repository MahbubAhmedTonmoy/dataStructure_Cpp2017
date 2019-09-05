#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 5

int top= -1;
int arr[CAPACITY];

void push(int x)
{
    if(top==CAPACITY-1)
        cout << "stack is overflow" << endl;
    else
    {
        top++;
        arr[top] = x;
    }
}

void pop()
{
    if(top==-1)
        cout << "stack is underflow"<<endl;
    else
        cout << "pop element : "<< arr[top] << endl;
    top--;
}

void Top()
{
    if(top==-1)
        cout << "stack is underflow"<<endl;
    else
        cout <<  "top is : "<<arr[top] << endl;
}

void Size()
{
    cout << "stack size is : " << top+1<<endl;
}
void print()
{
    cout << "stack is : ";
    for(int i=0;i<=top;i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{
    //int Stack s;
    push(10);
    push(20);
    push(30);
    Size();
    print();
    Top();
    pop();
    print();
    Top();
    push(40);
    push(50);
    push(60);
    push(70);
    print();
    return 0;
}

