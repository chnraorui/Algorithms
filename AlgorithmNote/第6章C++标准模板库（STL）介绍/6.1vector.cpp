#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> name;
    // vector<double> name;
    // vector<char> name;
    // vector<node> name;
    // vector<vector<int>> name;
    //迭代器  *it
    // vector<int>::iterator it;
    vector<int> vi;
    for (int i = 1; i <= 5; i++) //vi元素为1 2 3 4 5
        vi.push_back(i); //在vi末尾添加元素i
    //vi.begin()为取vi的首元素地址，it指向这个地址
    vector<int>::iterator it = vi.begin();
    for (int i = 0; i < 5; i++)
        cout << *(it + i);
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
        cout << *it;
    }
    //push_back(x)在vector后面添加一个元素
    vi.push_back(i);
    //pop_back()删除vec尾元素
    vi.pop_back();
    //size()获得vector元素的个数
    //clear()清空vector所有元素
    //insert(it,x)向vector的任意迭代器it中插入一个元素
    vi.insert(vi.begin() + 2, -1);
    for (int i = 0; i < vi.size(); i++)
        cout << vi[i];
    //erase(it)删除单个元素
    vi.erase(vi.begin() + 3);
    //erase(first,last)删除[first,last)所有元素
    vi.erase(vi.begin() + 1, vi.begin + 4);
    return 0;
}