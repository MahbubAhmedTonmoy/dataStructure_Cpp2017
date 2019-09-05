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
void second_max_min(int a[],int n)
{
    int temp;
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++)
        {
            if(a[i]>a[i+1])
            {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            }

        }
    }
    print_array(a,n);
    cout << "second max : "<<a[n-2];
    cout << "\nsecond min : "<<a[1];
}

int main()
{
    int arr[]={5,6,3,4,1,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout <<"array size : "<< n << endl;
    second_max_min(arr,n);
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    int arr[10000];
    cout <<"enter array size : ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    int mx=arr[0],mn=arr[0],smn=INT_MAX,smx=INT_MIN;
    for(int i=1;i<size;i++)
    {
        if(arr[i]>mx) mx = arr[i];
        if(arr[i]<mn) mn = arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]==mn) continue;
        if(arr[i]<smn) smn = arr[i];
        if(arr[i]==mx) continue;
        if(arr[i]>smx) smx = arr[i];
    }
    cout <<"minimum : "<< mn << endl;
    cout <<"maximum : "<< mx << endl;
    cout <<"second minimum : "<< smn << endl;
    cout <<"second maximum : "<< smx << endl;
}*/
