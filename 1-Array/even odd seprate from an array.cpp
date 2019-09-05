#include<iostream>
#define MAX_SIZE 1000
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
void even_odd(int arr[],int size)
{
    int even[MAX_SIZE],odd[MAX_SIZE];
    int o=0,e=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 == 0)
        {
            even[e]=arr[i];
            e++;
        }
        else
        {
            odd[o]=arr[i];
            o++;
        }
    }
    cout << "even  array : ";
    for(int i=0;i<e;i++)
    cout <<even[i]<< " ";
    cout << "\nodd array : ";
    for(int i=0;i<o;i++)
    cout <<odd[i]<< " ";
}

int main()
{
    int size;
    int arr[MAX_SIZE];
    cout <<"enter array size : ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    print(arr,size);

    even_odd(arr,size);

}
