// insertion sort :insertion sort are used to sort the array of unsorted array  before compare the array of element then find the each array location.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array of Element" << endl;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "This array is sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}