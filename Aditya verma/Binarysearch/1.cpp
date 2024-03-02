#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int key = 6;

    int s = 0;
    int end = arr.size() - 1;
    int mid;

    while (s <= end)
    {
        mid = s + (end - s) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            break; // Add a break statement to exit the loop when the key is found
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return 0;
}
