#include <iostream>
using namespace std;

int main()
{
    int ax;
    int ay;
    cin >> ax >> ay;

    int bx;
    int by;
    cin >> bx >> by;

    int cx;
    int cy;
    cin >> cx >> cy;

    int countX = 0;
    if (ax == bx)
    {
        countX++;
    }

    if (ax == cx)
    {
        countX++;
    }

    int countY = 0;
    if (ay == by)
    {
        countY++;
    }

    if (ay == cy)
    {
        countY++;
    }

    int outX;
    if (countX == 0)
    {
        outX = ax;
    }
    else
    {
        if (ax == bx)
        {
            outX = cx;
        }
        else
        {
            outX = bx;
        }
    }

    int outY;
    if (countY == 0)
    {
        outY = ay;
    }
    else
    {
        if (ay == by)
        {
            outY = cy;
        }
        else
        {
            outY = by;
        }
    }

    cout << outX << " " << outY;
    return 0;
}
