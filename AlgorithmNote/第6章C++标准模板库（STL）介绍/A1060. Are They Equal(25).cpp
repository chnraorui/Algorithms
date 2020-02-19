#include <iostream>
using namespace std;

int main()
{
    int a;
    string s1, s2;
    cin >> a >> s1 >> s2;
    for (int i = 0; i < a; i++) {
        if (s1[i] != s2[i]) {
            cout << "NO ";
            break;
        }
        cout<<"YES "<<
    }
    return 0;
}