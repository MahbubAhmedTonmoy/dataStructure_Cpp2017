#include<bits/stdc++.h>
using namespace std;

void mode(int a[],int n)
{
    int mode_count=0,mode_value,c=0;
    for(int i=0;i<n;i++)
    {   c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            if(c>mode_count)
            {
                mode_count = c;
                mode_value = a[i];
            }
        }
    }
    if(mode_count ==0) cout <<"no mode value"<<endl;
    else
        cout <<"\nmode value : " << mode_value << endl;
}
void max_min(int a[],int n)
{
    int mx=a[0],mn=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>mx) mx = a[i];
        if(a[i]<mn) mn = a[i];
    }
    cout << "max value : "<<mx;
    cout <<"\nmin value : " <<mn;

}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    max_min(a,n);
    mode(a,n);
}
