#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int i = input.find('B'); // Bが存在する最小のインデックス

    // 入力文字列内にBが存在しなくなるまで繰り返す
    while (i != (int)string::npos)
    {
        if (i > 0)
        {
            // エディタ上の文字列が空でない
            // 入力文字列内のBより1文字前とB(2文字)を削除する
            input.erase(i - 1, 2);
            i = input.find('B', i - 1);
        }
        else
        {
            // エディタ上の文字列が空
            // 入力文字列内のB(1文字)を削除する
            input.erase(i, 1);
            i = input.find('B', 0);
        }
    }

    cout << input << '\n';

    return 0;
}
