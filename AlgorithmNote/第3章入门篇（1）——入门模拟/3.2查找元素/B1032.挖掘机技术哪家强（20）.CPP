#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    string id, score;
    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;
        a[s1] += s2;
    }
    int max = a[1], t = 1;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            t = i;
        }
    }
    cout << t << " " << max;
    return 0;
} //记a[1],a(n+1)两个测试点