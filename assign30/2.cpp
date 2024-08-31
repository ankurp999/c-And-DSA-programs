#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number " << endl;
    cin >> a;
    void highest_digit(int);
    highest_digit(a);
}
void highest_digit(int a)
{
    int i, max, b;
    b = a;
    for (i = 0; a > 0; i++)
    {
        a = a / 10;
    }
    int *p = (int *)malloc(i * sizeof(int));
    if (b != 0)
    {
        for (i = 0; b > 0; i++)
        {
            *(p + i) = b % 10;
            b = b / 10;
        }
        max = *(p);
        int j;
        for (j = 1; j < i; j++)
        {
            if (max < *(p + j))
                max = *(p + j);
        }
    }
    else
    {
        max = 0;
    }
    cout << "the highest " << max;
    free(p);
}