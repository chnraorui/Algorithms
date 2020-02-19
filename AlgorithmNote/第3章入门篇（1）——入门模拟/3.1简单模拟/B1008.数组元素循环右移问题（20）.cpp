#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> n >> m;//保证M<N
    vector<int> a(n);
    m = m % n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - m; i < n; i++) {
        cout << a[i];
        count++;
        if (count < n)
            cout << " ";
    }
    for (int i = 0; i < n - m; i++) {
        cout << a[i];
        count++;
        if (count < n)
            cout << " ";
    }
    return 0;
}//TODO: 记忆