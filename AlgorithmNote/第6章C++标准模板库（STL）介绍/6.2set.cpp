#include <iostream>
//内部自动有序且不含重复元素的容器
#include <set>
using namespace std;

int main()
{
    set<int> st;
    //insert()将x插入set中
    st.insert(i);
    //find(value)返回set中对应值为value的迭代器
    set<int>::iterator it = st.find(2);
    cout << *it; //可以直接写成cout<<*(st.find(2));
    //erase(it)删除单个元素
    st.erase(st.find(200));
    st.erase(100);
    //erase(first,last)删除区间内的所有元素
    st.erase(it, st.end());
    //size()获得set内元素的个数
    //clear()清空set中的所有元素
    return 0;
}