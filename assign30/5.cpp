#include <iostream>
using namespace std;
void fabanacci(int n)
{
    int a = 1, b = 0, c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << " " << c;
    }
}
int main()
{
    int n;
    cin >> n;
    fabanacci(n);
}