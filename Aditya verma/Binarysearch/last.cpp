#include<iostream>
#include<vector>
using namespace std;
int main()
{


vector<int>arr{2,4,6,8,10,10,10,12,14};
int key=10;

int s=0;
int e=arr.size()-1;
int res=-1;
while(s<=e)
{
int mid=s+(e-s)/2;

if(arr[mid]==key)
{
res=mid;
s=mid+1;
}
else if(arr[mid]>key)
{
    e=mid-1;
}else if(arr[mid]<key)
{
    s=mid+1;
}
}
cout<<"last occurence is "<<res;











    return 0;
}