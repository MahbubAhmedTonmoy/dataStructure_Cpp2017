#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *next;

List *head = NULL;
public:

void creat(int x)
{
    List *now;
    for(int i=1;i<=x;i++)
        {
            List *temp = new List();
            cin >> temp->data;
            temp->next = NULL;
            if(head == NULL)
            {
                now = head = temp;
            }
            else
            {
                now->next = temp;
                now = temp;
            }
        }

}
void show()
{
    List * temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void add_after(int new_data,int pre)
{
    List *temp = new List(),*now=head;
    temp->data = new_data;
    temp->next = NULL;
    //if(head == NULL) head = temp;
    while(now->data!=pre && now!=NULL)
    {
        now = now->next;
    }
    temp->next = now->next;
    now->next = temp;
}
int length()
{
    List * temp = head;
    int c=0;
    while (temp!=NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void find_node(int x)
{
    List *temp= head;
    int c=1;
    while(temp!=NULL)
    {
        if(c==x)
            cout<<x<< "nth node :" <<temp->data<<endl;
        c++;
        temp = temp->next;
    }
}
void update(int old,int now)
{
    List *temp =head;
    while(temp->data != old && temp!= NULL)
    {
        temp=temp->next;
    }
    temp->data = now;
}
void delete_node(int x)
{
    if(head->data == x)
    {
        head = head->next;
        return;
    }
    List *now = head,*pre;
    while(now->data != x)
    {
        pre = now;
        now = now->next;
    }
    pre->next = now->next;
    now->next = NULL;
}

void reverse()
{
    int k,i=0,j=length()-1,temp;
    List *p=head,*q=head;
    while(i<j)
    {
        k=0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp= p->data;
        p->data = q->data;
        q->data = temp;
        i++,j--;
        p=p->next;
        q = head;
    }

}
void printReverse(List * head)
{
    if (head == NULL)
       return;
    printReverse(head->next);
    printf("%d  ", head->data);
}
void delete_dup()
{
    List *p1=head,*p2,*d;
    while(p1!=NULL && p1->next!=NULL)
    {
        p2=p1;
        while(p2->next!=NULL)
        {
            if(p1->data == p2->next->data)
            {
                d = p2->next;
                p2->next = p2->next->next;
                delete(d);
            }
            else
                p2=p2->next;
        }
        p1=p1->next;
    }
}
void move_fast()
{
    List *temp = head,*last=head;
    while(last->next!=NULL)
    {
        temp = last;
        last = last->next;
    }
    temp->next = NULL;
    last->next = head;
    head = last;
}

void sort()
{
    List *i,*j;
    int temp;
    for(i=head;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void rotate_kth_node(int k)
{
    List *current,*kth;
    current = head;
    int c =1;
    while(c<k && current!=NULL)
    {
        current = current->next;
        c++;
    }
    kth = current;
    while(current->next!=NULL)
    {
        current = current->next;
    }
    current ->next = head;
    head = kth->next;
    kth->next = NULL;
}

void back_push(int num){

    List *temp, *r;
    temp=head;
    if(head==NULL)
    {
        temp=new List();
        temp->data=num;
        //temp->next=NULL;
        head=temp;
    }
    else{

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        r= new List();
        r->data=num;
        //r->next=NULL;
        temp->next=r;
    }
}
void merge(List l1,List l2,List &l3)
{
    List *p,*q;
    p = l1.head;
    q= l2.head;
    int d;
    while(p!=NULL && q!=NULL)
    {
        if(p->data > q->data)
        {
            d = q->data;
            l3.back_push(d);
            q = q->next;
        }
        else
        {
            d = p->data;
            l3.back_push(d);
            p = p->next;
        }
    }
    if(p==NULL)
    {
          while(q!=NULL)
        {
            d = q->data;
            l3.back_push(d);
            q = q->next;
        }
    }

    else
    {
         while(p!=NULL)
        {
            d = p->data;
            l3.back_push(d);
            p = p->next;
        }
    }
       cout << " merged : ";
}
};
int main()
{
    List l1,l2,l3;
    l1.creat(5);
    l1.show();
    l2.creat(3);
    l2.show();
    //add_after(4,3);
    //show();
   // int l = length();
    //cout << "length : "<<l<<endl;
    //find_node(4);
    //update(5,6);
    //delete_node(3);
    //delete_dup();
    //move_fast();
    //sort();
    //l1.rotate_kth_node(3);
    //l1.show();
    l3.merge(l1,l2,l3);
    l3.show();
}
