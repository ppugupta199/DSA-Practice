#include <iostream>
using namespace std;
int Linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array of element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter your search key" << endl;
    cin >> key;
    cout << Linearsearch(arr, n, key) << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int insert(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return key;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter Element" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout << "insert element" << endl;
//     cin >> key;
//     cout << "inserting the element" << endl;
//     arr[n] = key;

//     cout << insert(arr, n, key);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int linearsearch(int arr[], int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 12};
//     int k = 8;
// int n = sizeof(arr) / sizeof(arr[0]); This line is to calculate the length of the array arr, and store it in n. sizeof(arr) is the size of the whole array (size as in how much space it takes in memory), and sizeof(arr[0]) is the size of a single element.
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int index = linearsearch(arr, n, k);
//     cout << "The array present " << k << "at index " << index << endl;
//     return 0;
// }