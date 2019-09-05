#include<iostream>
using namespace std;

void left_roatinon(int arr[],int d,int n)
{
    int temp;
    for(int i=0;i<d;i++)
    {

        for(int j=0;j<n-1;j++)
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }

    }
}
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
void left_roatinon_using_reverse(int arr[],int d,int n)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void rightRotate(int arr[],int d,int n)
{
    int temp;
    for(int i=0;i<d;i++)
    {
        for(int j=n-2;j>=0;j--)
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
    }
}


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
     int arr1[] = {1,2, 3,4, 5,6,7};
     int arr2[] = {1,2, 3,4, 5,6,7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    print(arr1,n1);
    cout<<"\nroted right : ";
    rightRotate(arr1,2,n1);
   print(arr1,n1);
    cout <<"\nroted left : ";
    left_roatinon(arr2,2,n2);
    print(arr2,n2);
    cout << endl;
    cout <<"left rotation using reverse formula : ";
    left_roatinon_using_reverse(arr2,4,n2);
    print(arr2,n2);

}

