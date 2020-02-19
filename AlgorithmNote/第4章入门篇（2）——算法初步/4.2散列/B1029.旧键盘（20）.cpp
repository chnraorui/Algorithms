#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
//1.不区分大小写判断第一个字符串中那些字符没有在第二个字符串中出现
//2.保证同一个字符只输出一次，且英文字幕均使用大写输出

int main()
{
    char str1[100], str2[100];
    bool HashTable[128] = { false }; //用来标记字符是否已被输出
    gets(str1);
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++) { //枚举第一个字符串中的每个字符
        int j;
        char c1, c2;
        for (int j = 0; j < len2; j++) { //枚举第二个字符串中的每个字符
            c1 = str1[i];
            c2 = str2[j];
            if (c1 >= 'a' && c1 <= 'z') //小写字母转化为大写
                c1 -= 32;
            if (c2 >= 'a' && c2 <= 'z')
                c2 -= 32;
            if (c1 == c2) //c1在第二个字符中出现则跳出
                break;
        }
        if (j == len2 && HashTable[c1] == false) {
            cout << c1; //在第二个字符串中未出现c1，且c1未被输出过
            HashTable[c1] = true;
        }
    }
    return 0;
} //TDOD remember