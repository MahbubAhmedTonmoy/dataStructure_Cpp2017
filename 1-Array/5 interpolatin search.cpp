#include<bits/stdc++.h>
using namespace std;

bool interpolation_search(int a[],int n,int e)
{
    int lo=0,hi=n-1;
    while(lo<=hi)
    {
        int m = lo + (((double)(hi-lo) /(a[hi]-a[lo]))*(e - a[lo]));  ///m = mid
        cout << " mid : " << m << endl;
        if(a[m]==e) return true;
        if(a[m]<e) lo=m+1;
        else hi=lo-1;

    }
return false;
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

    bool f = interpolation_search(arr,n,ele);
   if(f==true) cout << "find";
   else cout << "no";
}

