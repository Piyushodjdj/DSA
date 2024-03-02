#include<iostream>
using namespace std;
int main()
{

int arr[]={11,12,15,18,2,5,6,};


int s=0;
int e=7;
while (s<=e)
{
    int mid=s+(e-s)/2;
   int prev=(mid+7-1)%7;
    int next=(mid+1)%7;
    if(arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1])
    {
        cout<<mid;
    }else if(arr[s]<arr[mid])
    {
        s=mid+1;
    }else 
    {
        e=mid-1;
    }
}
















    return 0;
}