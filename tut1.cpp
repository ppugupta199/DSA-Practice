#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void dispaly(struct Array arr)
{
    int i;
    cout << "element are" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i];
}
int main()
{
    struct Array arr;
    int i, n;
    cout << "Enter size of an array" << endl;
    cout << &arr.size;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    cout << "print number of numbers" << endl;
    cout << &n;
    cout << "Enter all Element" << endl;
    for (i = 0; i < n; i++)
        cout << &arr.A[i];
    arr.length = n;
    dispaly(arr);

    return 0;
}