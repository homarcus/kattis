#include <iostream>

using namespace std;

int main()
{
    int hours{};
    int mins{};
    int sum{};
    cin >> hours >> mins;

    hours = hours * 60;

    sum = hours + mins;

    sum = sum - 45;

    int myhours{};
    int mymins{};
    myhours=sum / 60;
    mymins=sum - (myhours * 60);

    if (sum<0)
    {
        myhours=23 - myhours;
        mymins=60 + mymins;
    }

    cout << myhours << " " << mymins;

    return 0;
}
