#include<iostream>
using namespace std;


void print_array(int arr[],int n)
{
    cout <<"array is : ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
}

void insert_element(int arr[],int n)
{
    int position,value;
    cout<<"\nenter position where u add element : ";
    cin >> position; /// input 7
    cout<<"value of element :";
    cin >> value; /// input 8
    int i=n-1;///last position of array (10-1) = 9 ->arr[9]=11
    while(position <= i) ///7<9 arr[9]->arr[10].... i--, 7<8 i--,7=7
    {
        arr[i+1] = arr[i]; /// we want add value at n position so at first shift value from arr[i] -> to arr[i+1] , means arr[4]->is now arr[5] and free arr[4]
        i--;
    }
    arr[position] = value;
    n++; /// size of array increase

    /*
    int pos,ele;
    cin >> pos;
    cin >> ele;
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    //n++;
    arr[pos-1]=ele;
    */

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]); /// size of array
    print_array(arr,n);
    insert_element(arr,n);
    print_array(arr,n);

}
