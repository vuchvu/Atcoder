#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, Y;
    int a, b, c;
    cin >> N >> Y;

    Y /= 1000;

    for (a = (Y - N) / (10 - 1); a >= -1; a--)
    {
        if (a == -1)
        {
            b = -1;
            c = -1;
            break;
        }

        b = (Y - N - 9 * a) / 4;
        c = Y - (10 * a + 5 * b);

        if (b >= 0 && c >= 0 && a + b + c == N)
        {
            break;
        }
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
