#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i] cin >> m;
    for (int i = 0; i < n; i++) {
        if (a[i] = m) {
            cout << i;
            break;
        } else
            cout << "-1";
    }
    return 0;
}//ac