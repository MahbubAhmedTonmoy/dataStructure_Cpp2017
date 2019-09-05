#include<bits/stdc++.h>
using namespace std;

void print_array(int a[],int n)
{
    for(int i=0;i<n;i++) ///  for(int i=1;i<=n;i++)
    {
        cout<< a[i] << " ";
    }
    cout << endl;
}
void bubble_sort(int a[],int n)
{
    int temp;
    for(int j=0;j<n-1;j++) /// (int j=1;j<=n-1;j++)
    {
        for(int i=0;i<n-1-j;i++) ///  (int i=1;i<=n-1-j;i++)
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
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) /// for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr,n);
}

