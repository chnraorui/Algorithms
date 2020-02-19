#include <iostream>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n;
    string s[1001][2], s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> s1 >> t >> s2;
        s[t][0] = s1;
        s[t][1] = s2;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> t;
        cout << s[t][0] << " " << s[t][1] << endl;
    }

    return 0;
} //TODO remember
//准考证号存在stu[t][0]中，
//考试座位号存在stu[t][1]中，试机座位号为t，
