#include <iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[10], arr3[30];
    int i, j, k, index, n1, n2;
    cout << "Enter the 1st array" << endl;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        arr3[index] = arr1[i];
        index++;
    }
    cout << "Enter second array " << endl;
    cin >> n2;
    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
        arr3[index] = arr2[j];
        index++;
    }

    cout << "merging two array" << endl;
    for (k = 0; k < n1 + n2; k++)
    {
        cout << arr3[k];
        cout << endl;
    }
    return 0;
}