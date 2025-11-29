#include <iostream>
using namespace std;
int main()
{
    int n = 5, i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n - i)
        {
            cout << char('A' + j) << " ";
            j++;
        }
        j = 0;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        j = n - i - 1;
        while (j >= 0)
        {
            cout << char('A' + j) << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}