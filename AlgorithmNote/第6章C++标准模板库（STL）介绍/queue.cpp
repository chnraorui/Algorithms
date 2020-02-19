#include <iostream>
#include <queue>

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i); //压入队列
    cout << q.front() << q.back(); //对头对尾
    //push(i)入队
    //front(),back()队首队尾
    //pop()队首出队
    //empty()
    q.empty() == true;
    //size()
    
    return 0;
}i