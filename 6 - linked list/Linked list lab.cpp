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
List *head = NULL;

void creat(int x)
{
    for(int i=0;i<x;i++)
    {
        List *now;
        if(head==NULL)
        {
            head = new List();
            cin >> head->a;
            now = head;
        }
        else
        {
            List *n = new List();
            cin >> n->a;
            now->next = n;
            now = n;
        }
    }
}

void add_head_node(int x)
{
    if(head == NULL)
    {
        head  = new List();
        head->a = x;
    }
    else
    {
        List *n = new List();
        n->a = x;
        n->next = head;
        head = n;
    }
}
void add_tail(int x)
{
    List *now;
    if(head == NULL)
    {
        head  = new List();
        head->a = x;
    }
    else
    {
        List *n = new List();
        while(now->next!=NULL)
        {
            now = now->next;
        }
        n->a = x;
        now->next = n;
    }
}

void count()
{
    int c=0;
    List *temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        c++;
    }
    cout << "\ntotal node : " << c << endl;
}

void show()
{
    List *temp = head;
    while(temp!=NULL)
    {
        cout << temp->a << " ";// << temp->next << endl;
        temp = temp->next;
    }
    cout << endl;
}
void max()
{
    if(head == NULL) return;
    int mn = INT_MIN;
    List *temp = head;
    while(temp!=NULL)
    {
        if(temp->a > mn) mn = temp->a;
        else temp=temp->next;
    }
    cout << "max : "<< mn << endl;
}

void min()
{
    if(head == NULL) return;
    int mn = INT_MAX;
    List *temp = head;
    while(temp!=NULL)
    {
        if(temp->a < mn) mn = temp->a;
        else temp=temp->next;
    }
    cout << "min : "<< mn << endl;
}

void mode()
{
    if(head == NULL) return;
    int cnt=0,md=-1;
    List *temp = head;
    while(temp!=NULL)
    {
        List *n = head;
        int co = 0;
        while(n!= NULL)
        {
            if(n->a==temp->a) co++;
            n=n->next;
        }
        if(co>cnt) cnt = co, md=temp->a;
        temp=temp->next;
    }
    cout << "mode value :" << md << endl;
}

void delete_duplicate()
{
    if(head == NULL) return;
    List *ptr1, *ptr2, *dup;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {

            if (ptr1->a == ptr2->next->a)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

void sort()
{
    List *i,*j;
    int temp;
    for(i=head;i->next != NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->a > j->a)
            {
                temp = i->a;
                i->a = j->a;
                j->a = temp;
            }
        }
    }
}

void second_max()
{
    sort();
    List *temp = head;
    int c = 1;
    while(c!=2 && temp != NULL)
    {
        c++;
        temp= temp->next;
    }
    cout << "second max = " << temp->a << endl;
}


void delete_first_node()
{
    //List *temp = head;
    head = head->next;
    //temp->next = NULL;

}

void delete_last_node()  /// work to delete any node from linked list
{
    List *now=head, *prev;
    while(now->next != NULL)
    {
        prev = now;
        now = now->next;
    }
    prev->next = now->next;
    now->next = NULL;
}
int main()
{
    creat(5);
    //show();

    //sort();
    //second_max();
    //add_head_node(10);
    //add_tail(20);
    show();
    //count();
    delete_first_node();
    //delete_last_node();
    show();
    delete_first_node();

    show();
    //max();
    //min();
    //mode();
}
