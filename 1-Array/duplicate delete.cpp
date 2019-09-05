#include<iostream>
using namespace std;

void delete_duplicate(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;)
       {
           if(arr[i]==arr[j])
           {
               for(int k=j;k<n;k++)
               {
                   arr[k]=arr[k+1];
               }
            n--;
           }
           else
            j++;
       }

    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    int arr[10]={1,2,1,2,5,6,5,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]); /// size of array
    //print_array(arr,n);
    cout <<"\nafter delete duplicate : ";
    delete_duplicate(arr,n);
    cout << endl;
    //print_array(arr,n);

}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000];
    int n,m=0;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    cout << "before delete same element : ";
    for(int i=0;i<n;i++)
        cout <<  a[i] << ' ';
    cout << endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]) continue;
        else
            b[m++] = a[i];
    }

    cout << "/nafter delete same element : ";
     for(int i=0;i<m;i++)
        cout <<  b[i] << ' ';
}*/
