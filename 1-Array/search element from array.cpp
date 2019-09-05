#include<iostream>
using namespace std;

void search(int a[],int n)
{
    int flag=0,value,pos;
    cout << "enter value you want to search :";
    cin >> value;
    for(int i=0;i<n;i++)
    {
        if(value == a[i]){
            flag = 1;
            pos = i+1;
        }

    }

    if(flag == 1) cout << "found" << " at : " << pos << endl;
    else cout << "not in list."<<endl;


    /*int i = 0;
    while (i < n && value != a[i]) {
      i++;
   }

   //If i < num then Match found
   if (i < value) {
      printf("Number found at the location = %d", i + 1);
   } else {
      printf("Number not found");
   }*/
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
   search(arr,n);

}
