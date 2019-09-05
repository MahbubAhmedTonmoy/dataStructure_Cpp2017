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
};
List *head = NULL;

void create(int x)
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
int Reverse(List *prev, List *now)
{
    if(now==NULL)
    {
        head = prev;
        return 0;
    }

    Reverse(now,now->next);
    now->next = prev;

}
int Reverse_list(List *now)
{
    if(now==NULL)
    {
        return 0;
    }

    Reverse_list(now->next);
    cout << now->data << ' ';

}
int main()
{
    create(5);
    cout << endl;
    Reverse_list(head);
    //show();
}
