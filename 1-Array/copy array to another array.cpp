#include<iostream>
#include<stdio.h>
#define MAX_SIZE 1000
using namespace std;
int main()
{
    int arr[6]={1,2,4,5,6,7},brr[6];

    for(int i=0; i<6; i++)
    {
        brr[i] = arr[i];
        printf("%d ", arr[i]);
    }
}
