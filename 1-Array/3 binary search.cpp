#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int l,int r,int e)
{

    if(l<=r)
    {
        int m = (l+r)/2;
        if(a[m]==e) return m;
        if(a[m]>e) return binary_search(a,l,m-1,e);
        else return binary_search(a,m+1,r,e);
    }
return -1;
}

int main()
{
    int arr[1000];
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "enter element : ";
    cin >> ele;

    int result = binary_search(arr, 0, n-1,ele);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
}

/*while (l <= r)
  {
    int m = l + (r-l)/2;

    // Check if x is present at mid
    if (arr[m] == x)
        return m;

    // If x greater, ignore left half
    if (arr[m] < x)
        l = m + 1;

    // If x is smaller, ignore right half
    else
         r = m - 1;
  }
  */
