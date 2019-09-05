#include<iostream>
using namespace std;

void reverse(int arr[],int start, int end)
{
    int temp;
    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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
    int arr[10]={1,2,3,4,5,6,7,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]); /// size of array
    print_array(arr,n);
    cout <<"print after reverse : ";
    reverse(arr,0,n-1);
    print_array(arr,n);

}

