#include <iostream>
using namespace std;

int main()
{
    int n; //This is the number of test cases
    cin >> n;

    int r; //This is expected revenue without advertisment
    int e; //This is expected revenue if you do advertise
    int c; //This is the cost of advertising

    for (int i = 0; i < n; i++)
    {
        cin >> r >> e >> c; //Initialize the variables
        if (e - c > r)
        {
            cout << "advertise" << endl;
        }
        else if (e - c < r)
        {
            cout << "do not advertise" << endl;
        }
        else
        {
            cout << "does not matter" << endl;
        }
    }
    return 0;
}
