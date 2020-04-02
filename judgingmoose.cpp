#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l;
    int r;
    cin >> l >> r;

    string oe;
    if (l == r)
    {
        oe = "Even";
    }
    else
    {
        oe = "Odd";
    }
    
    int temp;
    if (l > r)
    {
        temp = l * 2;
    }
    else if (r > l)
    {
        temp = r * 2;
    }
    else 
    {
        temp = l * 2;
    }
    
    if (r == 0 && l == r)
    {
        cout << "Not a moose" << endl;
    }
    else
    {
        cout << oe << " " << temp << endl;
    }
    
    return 0;
}
