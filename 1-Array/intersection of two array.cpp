#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int arr2[],int m,int n)
{
   int i,j;
   for(i=0; i<m ;i++)
   {
       for(j=0;j<n;j++)
       {
       /*if(arr1[i]<arr2[j])
       {
           continue;
       }
       else if(arr2[j]<arr1[i])
       {
           continue;
       }*/
       if(arr1[i] == arr2[j])
       {
           cout << arr2[j] << " ";
       }
       }
   }
}
int Union(int arr1[], int arr2[], int m, int n)
{
    int i=0,j=0;
   while(i<m && j<n)
   {
       if(arr1[i]<arr2[j])
       {
           cout << arr1[i] << " ";
           i++;
       }
       else if(arr2[j]<arr1[i])
       {
           cout << arr2[j] << " ";
           j++;
       }
       else /// arr1[1] == arr2[2]
       {
           cout << arr2[j] << " ";
           i++;
           j++;
       }
   }
       ///Print remaining elements of the larger array ///
    while(i<m)
        {
            cout << arr1[i] << " ";
            i++;
        }
    while(j<n)
        {
            cout << arr2[j] << " ";
            j++;
        }
}


int main()
{
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,arr2,m,n);
    cout << endl;
    Union(arr1,arr2,m,n);
}
