#include <iostream>

using namespace std;

int main()
{
    int N{};
    cin >> N;
    int arr[N];
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++)
    {
        if (arr[j] % 2 == 0)
        {
        cout << arr[j] << " is even" << endl;
        }else{
        cout << arr[j] << " is odd" << endl;
        }
    }
    return 0;
}
