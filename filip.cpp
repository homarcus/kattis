#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int revA = 0;
    while (a > 0) {
        revA = (revA * 10) + (a % 10);
        a = a / 10;
    }

    int revB = 0;
    while (b > 0) {
        revB = (revB * 10) + (b % 10);
        b = b / 10;
    }
    if (revA > revB)
    {
        cout << revA;
    }
    else
    {
        cout << revB;
    }

    return 0;

}
