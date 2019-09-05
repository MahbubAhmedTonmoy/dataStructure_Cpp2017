#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
void print(int arr[],int n)
{
    cout<<"given array : ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    cout <<"sum of this array element are : "<<sum(arr,n);
}
