#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int score[101] = { 0 };
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        score[a]++;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        int b;
        cin >> b;
        cout << score[b];
        if (i < k - 1)
            cout << " ";
    }
    return 0;
}//ac