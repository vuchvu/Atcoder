#include <iostream>
using namespace std;

int recursiveCall(int n);

int main()
{
    int n;
    cin >> n;

    cout << recursiveCall(n) << '\n';
    return 0;
}

int recursiveCall(int n)
{
    if (n != 1)
    {
        return n + recursiveCall(n - 1);
    }
    else
    {
        return n;
    }
}
