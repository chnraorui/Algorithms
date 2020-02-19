#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] == '-')
        printf('-');

    int pos = 0; //存放E的位置
    while (s[pos] != 'E')
        pos++;

    int exp = 0; //存放指数（先不考虑正负）
    for (int i = pos + 2; i < len; i++) {
        exp = exp * 10 + (str[i] - '0');
    }
    if (exp == 0) {
        for (int i = 1; i < pos; i++)
            cout << str[i];
    }

    if (str[pos + 1] == '-') {
        printf('0,');
        for (int i = 0; i < exp - 1; i++)
            cout << '0';
        cout << str[1];
        for (int i = 3; i < pos; i++)
            cout << str[i];
    } else {
        for (int i = 1; i < pos; i++) {
            if (str[i] == '.')
                continue;
            cout << str[i];
            if (i == exp + 2 && pos - 3 != exp) {
                cout << '.';
            }
        }
        for (int i = 0; i < exp - (pos - 3); i++) {
            cout << '0';
        }
    }

    return 0;
}//TODO：看不懂