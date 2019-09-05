#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int n1, int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)      /// for(i=0,j=0;i<n&&j<m;)
    {
        if(arr1[i]<arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while(i<n1){
        arr3[k++] = arr1[i++];
    }
    while(j<n2){
        arr3[k++] = arr2[j++];
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 7,9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8,10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1+n2];
    merge(arr1, arr2, n1, n2, arr3);

    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++){
        cout << arr3[i] << " ";
    }

    //cout <<"delete duplicate from merged array" << endl;
    //delete_duplicate(arr3,(n1+n2));
/*for(int i=0;i<n+m;i++)
{
    if(i<n) c[i] = a[i];
    else c[i] = b[i-n];
}
*/
    return 0;
}

