#include <cstring>
#include <iostream>
#include <memory>
using namespace std;

string GetCurrentScale(char color, int index);

int main()
{
    string s;
    cin >> s;

    int index;
    for (index = 0; index < s.size() - 1; index++)
    {
        char &c = s.at(index);
        char &c_next = s.at(index + 1);

        if (c == 'W' && c_next == 'W' && index + 6 < s.size())
        {
            cout << GetCurrentScale(s.at(index + 6), index) << endl;
            break;
        }
        else if (c_next == 'B')
        {
            index++;
        }
    }

    return 0;
}

string GetCurrentScale(char color, int index)
{
    string onkai[7] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};

    index = index % 12;

    string retOnkai = "";

    if (color == 'W')
    {
        if (index == 0)
        {
            retOnkai = onkai[6];
        }
        else if (index == 2)
        {
            retOnkai = onkai[5];
        }
        else if (index == 4)
        {
            retOnkai = onkai[4];
        }
        else if (index == 6)
        {
            retOnkai = onkai[3];
        }
        else if (index == 7)
        {
            retOnkai = onkai[2];
        }
        else if (index == 9)
        {
            retOnkai = onkai[1];
        }
        else if (index == 11)
        {
            retOnkai = onkai[0];
        }
    }
    else
    {
        if (index == 0)
        {
            retOnkai = onkai[2];
        }
        else if (index == 2)
        {
            retOnkai = onkai[1];
        }
        else if (index == 4)
        {
            retOnkai = onkai[0];
        }
        else if (index == 5)
        {
            retOnkai = onkai[6];
        }
        else if (index == 7)
        {
            retOnkai = onkai[5];
        }
        else if (index == 9)
        {
            retOnkai = onkai[4];
        }
        else if (index == 11)
        {
            retOnkai = onkai[3];
        }
    }

    return retOnkai;
}
