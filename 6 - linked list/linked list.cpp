#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *next;
    List()
    {
        next = NULL;
    }

List *head = NULL;

void creat(int x)
{
    List *now;

    for(int i=1;i<=x;i++)
    {
        if(head==NULL)
        {
            head = new List();
            cin >> head->data;
            now = head;
        }
        else
        {
            List *temp = new List();
            cin>>temp->data;
            now->next = temp;
            now = temp;
        }
    }
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

void front_push(int x)
{
    List *p;
    p=new List();
    if(head==NULL)
    {
        p->data = x;
        p->next = NULL;
        head = p;
    }
    else
    {
        List *p = new List();
        p->data = x;
        p->next = head;
        head = p;
    }
}

void show()
{
    List *temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int length()
{
    int count = 0;
    List *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    //cout << "length : "<<count << endl;
}

void find_node(int n)
{
    List *temp = head;
    int c =1;
    while(temp!=NULL)
    {
        if(c ==n )
             cout<<n<< " th node : " << temp->data;

            c++;
            temp= temp->next;
    }
}

void update(int old,int new_data)
{
    List *temp= head;
    while(temp->data != old && temp != NULL)
        temp = temp->next;
    if(temp == NULL) return;
    temp->data = new_data;
}

void push_after(int pre,int new_data)
{
    List *n = new List();
    n->data = new_data;

    if(head ==NULL)
    {
        //n->next = head;
        head = n;
        return;
    }
    List *now = head;
    while(now->data != pre && now != NULL) now = now->next;
    if(now == NULL) return;
    n->next = now->next;
    now->next = n;
}
void Delete(int x)
{
    if(head->data==x)
    {
        head = head->next;
        return;
    }
    List *now = head , *prev;
    while(now->data!=x)
    {
        prev = now;
        now = now->next;
    }
    if(now == NULL) return;
    prev->next = now->next;
    now->next = NULL;
}

void Reverse(int len)
{
    cout << endl;
    int i,j,k,temp;
    List *p,*q;
    p=q=head;
    i=0;
    j=len-1;
    while(i<j)
    {
        k = 0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp = p->data;
        p->data = q->data;
        q->data = temp;
        i++;
        j--;
        p= p->next;
        q = head;
    }
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

            if (ptr1->data == ptr2->next->data)
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
    cout << current->data <<endl;

    if (current == NULL)
        return;

    List *kthNode = current;
     cout << kthNode->data <<endl;

    while (current->next != NULL)
    {
        current = current->next;
    }
    cout << current->data <<endl;
    current->next = head;
    cout << head->data << endl;
    head = kthNode->next;
    kthNode->next = NULL;
}



void merge(List l1, List l2,List &l3) // Here is my doubt
{
    List *p, *q;
    p=l1.head;
    q=l2.head;

    int dat;
    while(p!=NULL && q!=NULL)
    {
        if(p->data > q->data)
        {
            dat=q->data;
            l3.back_push(dat);
            q=q->next;
        }

        else{
            dat=p->data;
            l3.back_push(dat);
            p=p->next;
        }
    }
    if(p==NULL)
    {
        while(q!=NULL)
        {
            dat=q->data;
            l3.back_push(dat);
            q=q->next;
        }
    }
    else{
            while(p!=NULL)
        {
            dat=p->data;
            l3.back_push(dat);
            p=p->next;
        }
    }
    cout<<"lists merged"<<endl;

}

void Sort()
{
    List *i = head, *j;
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

};
int main()
{
    List l1,l2,l3;
    l1.creat(3);
    //l1.push_after(1,3);
    //l1.back_push(1);
    //l1.push_after(1,4);
    //l1.back_push(2);
    //l1.back_push(3);
    //l1.back_push(4);
    //l1.back_push(5);
    //l1.front_push(4);
    l1.show();
    //l1.rotate(2);
    //l1.show();
    //l1.rotate(2);
    //l1.show();
    //l1.push_after(4,5);
   // l1.Delete(2);
   // l1.show();
    //l1.update(1,10);
    //l1.show();
    //l1.Reverse(l1.length());
    //l1.show();
    //l1.delete_duplicate();
    //l1.show();
    //l1.move_last_to_front();
    //l1.show();
    //int l = l1.length(); cout << "length is : "<< l<<endl;
    //l1.find_node(10);
    //l2.back_push(10);
    //l2.back_push(20);
    //l2.back_push(30);
    //l2.front_push(40);
    //l2.show();
    //l3.merge(l1,l2,l3);
    //l3.show();

}
