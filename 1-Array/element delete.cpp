#include<iostream>
using namespace std;

void delete_array_element(int arr[],int size)
{
    int position;
    cout << "enter location wherer you wish to delete element : ";
    cin >> position;
    if(position>size+1)
        cout <<"invalide case" << endl;
    else
    {
        for(int i=position-1;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        for(int i=0;i<size;i++)
        {
            cout << arr[i] <<" ";
        }

    }
}

int main()
{
    int arr[100],size,position;
    cout<<"Enter number of elements in array : ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout << "your array : ";
    for(int i=0;i<size;i++)
    {
        cout << arr[i]<<" ";
    }

    delete_array_element(arr,size);
    return 0;

}
