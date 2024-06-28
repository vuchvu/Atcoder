#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char argv[100];
    cin >> argv;
    char wkstr[6];
    char *p = argv;

    while (*p != NULL)
    {
        memset(wkstr, 0, 6);
        memcpy(wkstr, p, 5);
        p += 5;

        if (strcmp(wkstr, "dream") == 0 || strcmp(wkstr, "erase") == 0)
        {
            if (*p == NULL || *p == 'd')
            {
                continue;
            }
            else
            {
                memcpy(wkstr, p, 3);

                if (strcmp(wkstr, "erd") == 0 || strcmp(wkstr, "ere") == 0)
                {
                    p += 2;
                    continue;
                }
                else if (strcmp(wkstr, "era") == 0)
                {
                    continue;
                }
            }
        }
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}
