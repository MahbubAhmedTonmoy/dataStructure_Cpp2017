#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *link;
    List()
    {
        link = NULL;
    }

List *start = NULL;

void back(int num){

    List *temp, *r;
    temp=start;
    if(start==NULL)
    {
        temp=new List();
        temp->data=num;
        temp->link=NULL;
        start=temp;
    }
    else{

        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        r= new List();
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
}

void push_front(int x)
{
    List *p;
    p=new List();
    if(start==NULL)
    {
        p->data = x;
        p->link = NULL;
        start = p;
    }
    else
    {
        List *p = new List();
        p->data = x;
        p->link = start;
        start = p;
    }
}

void show()
{
    List *temp=start;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

void merge(List l1, List l2,List& l3) // Here is my doubt
{
    List *p, *q;
    p=l1.start;
    q=l2.start;

    int dat;
    while(p!=NULL && q!=NULL)
    {
        if(p->data > q->data)
        {
            dat=q->data;
            l3.append(dat);
            q=q->link;
        }

        else{
            dat=p->data;
            l3.append(dat);
            p=p->link;
        }
    }
    if(p==NULL)
    {
        while(q!=NULL)
        {
            dat=q->data;
            l3.append(dat);
            q=q->link;
        }
    }
    else{
            while(p!=NULL)
        {
            dat=p->data;
            l3.append(dat);
            p=p->link;
        }
    }
    cout<<"lists merged"<<endl;

}
};

int main()
{
    List l1,l2,l3;
    l1.append(3);
    l1.append(1);
    l1.append(7);
    l1.push_front(2);
    l1.show();
    l2.append(4);
    l2.append(5);
    l2.append(6);
    l2.show();
    l3.merge(l1,l2,l3);
    l3.show();

}
