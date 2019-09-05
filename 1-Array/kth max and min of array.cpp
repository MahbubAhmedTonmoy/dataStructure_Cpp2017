#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_value(int arr[],int  n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int max_value(int arr[],int  n,int k)
{
    sort(arr,arr+n);
    return arr[n-k];
}

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
}



int main()
{
    int arr[10]={1,2,5,7,3,6,4,9,10,8};  /// 1 2 3 4 5 6 7 8 9 10
    int n = sizeof(arr)/sizeof(arr[0]); /// size of array
    print_array(arr,n);
    cout << endl;
    cout << "K'th largest element is " <<  max_value(arr, n, 3);
    cout << endl;
   cout << "K'th smallest element is " <<  min_value(arr, n, 9);

}

