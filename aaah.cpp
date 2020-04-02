#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string inputJ;
    cin >> inputJ;
    string inputD;
    cin >> inputD;

    size_t aJ = std::count(inputJ.begin(), inputJ.end(), 'a');
    size_t aD = std::count(inputD.begin(), inputD.end(), 'a');

    if (aJ >= aD)
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
