#include <iostream>
#include <string>
using namespace std;
int hashTable[30] = { 0 };
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            hashTable[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            hashTable[s[i] - 'A']++;
    }
    int k = 0;
    for (int i = 0; i < 26; i++) {
        if (hashTable[i] > hashTable[k])
            k = i;
    }
    printf("%c %d", 'a' + k, hashTable[k]);
    return 0;
}