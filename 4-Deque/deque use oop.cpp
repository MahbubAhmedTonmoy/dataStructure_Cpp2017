#include<iostream>
using namespace std;
#define SIZE 5
class dequeue
{
    int a[SIZE],front,rear;
    public:
        dequeue();
        void add_at_beg(int);
        void add_at_end(int);
        void delete_fr_front();
        void delete_fr_rear();
        void display();
        void getFront();
        void getRear();
};
dequeue::dequeue()
{
    front=0;
    rear=0;
}
void dequeue::add_at_end(int item)
{

    if(rear==SIZE)
    {
        cout<<"\ninsertion is not posibble,overflow!!!!";
    }
    else
    {
    a[rear]=item;
    cout<<"\nInserted item is "<<a[rear]<< " at : "<<rear<<endl;
     rear=rear+1;
     cout << "now front and rear : " << front << " " << rear << endl;
    }
}
void dequeue::add_at_beg(int item)
{

        if(front==0 && rear==0)
        {
            a[rear]=item;
            rear++;
            cout<<"\n inserted element is"<<item;
        }
        else if(front!=0)
        {
            front--;
            a[front]=item;
            cout<<"\n inserted element is "<<item;
            cout << "\nnow front and rear : " << front << " " << rear << endl;
        }
        else
        {
              cout<<"\n insertion is not posibble,overflow!!!";
        }

}
void dequeue::display()
{
    //cout << front<< " " << rear << endl;
    if(front==rear)
    {
        cout<<"Dequeue is empty";
   }
    else
    {
        cout << endl;
        for(int i=front;i<rear;i++)
        {
            cout<<a[i]<<" ";
        }
        cout << endl;
    }
}
void dequeue::delete_fr_front()
{
        if(front== rear)
        {
            cout<<"\ndeletion is not possible::dequeue is empty";
            return;
        }
        else
        {
            cout<<"\nthe deleted element is "<<a[front];
            front=front+1;
            if(front==rear)
            {
                front=rear=0;
            }

            cout << "\nnow front and rear : " << front << " " << rear << endl;
        }
}
void dequeue::delete_fr_rear()
{
        if(front==rear)
        {
            cout<<"\ndeletion is not possible::dequeue is empty";
            return;
        }
        else
        {

            cout<<"\nthe deleted element is "<<a[rear-1];
            if(front==rear)
            {
                front=rear=0;
            }
            else
                rear=rear-1;
            cout << "\nnow front and rear : " << front << " " << rear << endl;
        }
}

void dequeue::getFront()
{
    // check whether Deque is empty or not
    if(front==0 && rear==0) cout << "empty" << endl;
else
    cout << "\nfront is : " <<  a[front] << endl;
}

// function return rear element of Deque
void dequeue::getRear()
{
    // check whether Deque is empty or not
    if(front==0 && rear==0) cout << "empty" << endl;
else
    cout << "\nrear is : " << a[rear-1] << endl;
}


int main()
{
    dequeue d1;
    d1.display();
    cout << endl;
    d1.add_at_end(1);
    d1.add_at_end(2);
    d1.add_at_end(3);
    d1.add_at_end(4);
    d1.add_at_end(5);
    d1.add_at_end(6);
      d1.display();
    d1.getFront();
    d1.getRear();

    d1.delete_fr_front();
    d1.delete_fr_front();
    d1.delete_fr_front();
    d1.delete_fr_front();
    d1.delete_fr_front();
    d1.delete_fr_front();
    d1.getFront();
    d1.getRear();
}
