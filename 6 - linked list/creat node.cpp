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


List *head = NULL;

void create(int x)
{
    List *now;
    for(int i=1;i<=x;i++)
    {

        if(head == NULL)
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

void show()
{
    List *temp=head;
    while(temp!=NULL)
    {
        cout << temp->a << " ";
        temp = temp->next;
    }
}
void Count()
{
    List *temp;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    cout << "length is : " << c<<endl;
}
void Delete(int x)
{
    if(head->a==x)
    {
        head = head->next;
        return;
    }
    List *now = head , *prev;
    while(now->a!=x)
    {
        prev = now;
        now = now->next;
    }
    if(now == NULL) return;
    prev->next = now->next;
    now->next = NULL;
}

void add(int k, int r)
{
    List *n = new List();
    n->a = k;

    if(r==-1)
    {
        n->next = head;
        head = n;
        return;
    }
    List *now = head;
    while(now->a != r && now != NULL) now = now->next;
    if(now == NULL) return;
    n->next = now->next;
    now->next = n;
}

void get_nth_node(int n)
{
    List *temp = head;
    int check= 1;
    while(temp!=NULL)
    {
        if(check == n)
            cout<<n<< " th node : " << temp->a;
        check++;
        temp= temp->next;
    }
}
void update(int n, int o)
{
    List *now = head;
    while(now->a != o && now != NULL) now = now->next;
    if(now == NULL) return;
    now->a = n;
}

void Reverse(int len)
{
    cout << endl;
    int i,j,k,temp;
    List *p,*q;
    p=q=head;
    i=0;j=len-1;
    while(i<j)
    {
        k = 0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp = p->a;
        p->a = q->a;
        q->a = temp;
        i++;
        j--;
        p= p->next;
        q = head;
    }
}

void remove_duplicate()
{
    List *p,*q;
    p=head;
    if(head == NULL) cout <<"no element" << endl;
    else
    {
        while(p->next != NULL)
        {
            if(p->a == p->next->a)
            {
                q=p->next->next;
                p->next= q;
            }
            else
            {
                p=p->next;
            }
        }
    }
}

void move_last_to_front()
{
    if(head==NULL || head->next==NULL) cout << "empty " <<endl;

    List *p=head,*last=head;
    while(last->next != NULL)
    {
        p=last;
        last = last->next;
    }
    p->next = NULL;
    last->next = head;
    head = last;
}

void rotate(int k)
{
     if (k == 0)
       return;

    List *current = head;

    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return;

    List *kthNode = current;

    while (current->next != NULL)
        current = current->next;

    current->next = head;

    head = kthNode->next;
    kthNode->next = NULL;
}
void Sort()
{
    List *current = head, *current2 = current->next, *temp;
    while(current->next->next != NULL)
    {
        if(current->a < current->next->a)
        {
            temp = current;
            current = current2;
            current2 = temp;
        }
        current = current->next;
    }
}

};
int main()
{
    List L1,L2,L3;
    L1.create(5);
    //L1.move_last_to_front();
    L1.show();
    L1.Sort();
    L1.show();
    //show();
    //get_nth_node(2);
    //Reverse(5);
    //remove_duplicate();

    return 0;
}
