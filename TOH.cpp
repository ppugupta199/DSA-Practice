#include <iostream>
using namespace std;
void TOH(int n, char sour, char axu, char des)
{
    if (n == 1)
    {
        cout << "move disk " << n << " From " << sour << " to " << des << endl;
        return;
    }
    TOH(n - 1, sour, des, axu);

    cout << "move disk " << n << " Form " << sour << " to " << des << endl;
    TOH(n - 1, axu, sour, des);
}
int main()
{
    int n;
    cout << "Enter the no. of disk\n";
    cin >> n;
    TOH(n, 'A', 'B', 'C');

    return 0;
}