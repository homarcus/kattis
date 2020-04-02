#include <iostream>

using namespace std;

int main()
{
    int x{};
    cin >> x;
    int y{};
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "1";
    }else{
        if (x < 0 && y > 0)
        {
            cout << "2";
        }else{
        if (x < 0 && y < 0)
        {
            cout << "3";
        }else{
        cout << "4";
        }
        }
    }

    return 0;
}
