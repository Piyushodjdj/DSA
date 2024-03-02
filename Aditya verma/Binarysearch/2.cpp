#include<iostream>
#include<vector>
using namespace std;
int main()
{
cout<<"hello";
vector<int>arr{10,9,8,7,6,5,4,3,2,1};
int key=5;
int s=0;
int e=arr.size()-1;
int m;

while(s<=e)
{
m=s+(e-s)/2;

if(arr[m]==key)
{
    cout<<m;
}else 
if(arr[m]>key)
{
    e=m-1;
}else
{
    s=m+1;
}
}  
cout<<((4 + 3 * 6 - 7 / 2));
cout<<"hello"+3;
  return 0;
}