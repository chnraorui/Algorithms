#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q; // 定义⼀一个空队列列q
    for (int i = 0; i < 6; i++)
    {
        q.push(i); // 将i的值依次压⼊入队列列q中
    }
    cout << q.front() << " " << q.back() << endl; // 访问队列列的队⾸首元素和队尾元素
    cout << q.size() << endl;                     // 输出队列列的元素个数
    q.pop();                                      // 移除队列列的队⾸首元素

    return 0;
}