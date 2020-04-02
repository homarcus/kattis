#include <iostream>
using namespace std;

int main()
{
    int N; //Number of test cases
    cin >> N;

    int b; //Number of beats
    float p; //Number of seconds
    for (int i = 0; i < N; i++)
    {
        cin >> b >> p;
        float min; //Minimum
        float ave; //Average
        float max; //Maximum

        min = (60 * (b - 1)) / p;
        ave = (60 * b) / p;
        max = (60 * (b + 1)) / p;

        cout << min << " " << ave << " " << max << endl;
    }

    return 0;
}
