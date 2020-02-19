#include <iostream>
#include <vector>
using namesapce std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
        int id, score;
        cin >> id >> score;
        a[id] = score;
    }
    int maxn = a[1], temp = 1;
    for (int i = 0; i < n; i++) {
        if (maxn < a[i]) {
            maxn = a[i];
            temp = i;
        }
    }
    cout << temp << " " << maxn;
}//TODO复习