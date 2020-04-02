#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Get User input
    int N{};
    cin >> N;
    int arr[N];
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    //Reads the last character
    int lastDigit[N];
    lastDigit[N] = arr[N];
    for (int j = 0; j < N; j++)
    {
        lastDigit[j] = arr[j] % 10;
    }

    //Deletes the last digit
    for (int z = 0; z < N; z++)
    {
        arr[z] = arr[z] / 10;
    }

    //Numbers in the array are changed by their powers
    int power[N];
    for (int a = 0; a < N; a++)
    {
        power[a] = pow(arr[a], lastDigit[a]);
    }

    //Adds all the elements in the array
    int sum = 0;
    for (int b = 0; b < N; b++)
    {
      sum += power[b];
    }
    cout << sum;

    return 0;
}
