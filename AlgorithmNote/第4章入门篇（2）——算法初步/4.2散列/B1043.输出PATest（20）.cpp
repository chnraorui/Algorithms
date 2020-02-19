#include <iostream>
using namespace std;

int hashTable[6] = { 0 };
char str[6] = { 'P', 'A', 'T', 'e', 's', 't' };
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < 6; j++)
            if (s[i] == str[j]) {
                hashTable[j]++;
                sum++;
            }
    }
    for (int i = 0; i < sum; i++) {
        for (int j = 0; j < 6; j++) {
            if (hashTable[j] > 0) {
                cout << str[j];
                hashTable[j]--;
            }
        }
    }
    return 0;
}