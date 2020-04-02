#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp = X - temp;
        count += temp;
    }

    cout << count + X;

    return 0;
}
