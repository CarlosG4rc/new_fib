#include<iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Triangle Fibonacci: " << endl;
    for (int i = 1; i <= n; ++i)
    {
        cout << b << "\t";
        for (int j = 1; j < i; ++j)
        {
            c = a + b;
            cout << c << "\t";
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}