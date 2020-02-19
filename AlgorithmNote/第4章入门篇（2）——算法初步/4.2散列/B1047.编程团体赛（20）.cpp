#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, score;
    int maxa = -1, maxscore = -1;
    int hashTable[1010] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d-%d %d", &a, &b, &score);
        hashTable[a] += score;
    }
    for (int i = 0; i < 1010; i++) {
        if (hashTable[i] > maxscore) {
            maxa = i;
            maxscore = hashTable[i];
        }
    }
    cout << maxa << ' ' << maxscore;
    return 0;
}//ac