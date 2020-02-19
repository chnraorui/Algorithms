/*bitset ⽤用来处理理⼆二进制位⾮非常⽅方便便。头⽂文件是 #include <bitset> ， bitset 可能在PAT、蓝桥OJ中不不常
⽤用，但是在LeetCode OJ中经常⽤用到～⽽而且知道 bitset 能够简化⼀一些操作，可能⼀一些复杂的问题能够直
接⽤用 bitset 就很轻易易地解决 */
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    bitset<5> b("11"); //5表示5个⼆二进位
    // 初始化⽅方式：
    // bitset<5> b; 都为0
    // bitset<5> b(u); u为unsigned int，如果u = 1，则输出b的结果为00001
    // bitset<8> b(s); s为字符串串，如"1101"，则输出b的结果为00001101，在前⾯面补0
    // bitset<5> b(s, pos, n); 从字符串串的s[pos]开始， n位⻓长度
    // 注意， bitset相当于⼀一个数组，但是它是从⼆二进制的低位到⾼高位分别为b[0]、 b[1]……的
    // 所以按照b[i]⽅方式逐位输出和直接输出b结果是相反的
    cout << b << endl; // 如果bitset<5> b("11"); 则此处输出00011(即正常⼆二进制顺序)
    for (int i = 0; i < 5; i++)
        cout << b[i]; // 如果bitset<5> b("11"); 则此处输出11000(即正常⼆二进制顺序的倒序)
    cout << endl
         << b.any(); //b中是否存在1的⼆二进制位
    cout << endl
         << b.none(); //b中不不存在1吗？
    cout << endl
         << b.count(); //b中1的⼆二进制位的个数
    cout << endl
         << b.size(); //b中⼆二进制位的个数
    cout << endl
         << b.test(2);              //测试下标为2处是否⼆二进制位为1

    b.set(4);                       //把b的下标为4处置1
    b.reset();                      //所有位归零
    b.reset(3);                     //b的下标3处归零
    b.flip();                       //b的所有⼆二进制位逐位取反
    unsigned long a = b.to_ulong(); //b转换为unsigned long类型
    
    return 0;
}