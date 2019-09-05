///   http://cforbeginners.com/insertionsort.html //////

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
void insertion_sort(int a[],int n)
{
    int temp,j;
    for(int i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        //j = i;
        //while(j>0 && a[j]<a[j-1])
        {
            if(a[j]<a[j-1])
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] =temp;
            }
           // j--;
        }
    }
    print_array(a,n);
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
    insertion_sort(arr,n);
}

