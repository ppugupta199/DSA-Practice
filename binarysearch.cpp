#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int l = n;
    while (s <= l)
    {
        int mid = (s + l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            l = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int n;
    // cout << "Enter the size of length array" << endl;
    // cin >> n;
    int arr[5] = {1, 2, 3, 5, 8};
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Array of  number" << i << endl;
        cin >> arr[i];
    }
    int key;
    cout << "Enter  your search Element" << endl;
    cin >> key;

    cout << binarysearch(arr, 5, key);
    return 0;
}