#include<bits/stdc++.h>
using namespace std;

void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
    cout << endl;
}

void linner_search(int a[],int n)
{
    int ele,flag=0,pos;
    cout << "enter element u want search : ";
    cin >> ele;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            flag = 1;
            pos = i+1;
            break;
        }

    }
    if(flag == 0) cout << "not found in your given array."<<endl;
    else cout << "find element : "<< ele<< " at position " << pos;

}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    linner_search(arr,n);
}
