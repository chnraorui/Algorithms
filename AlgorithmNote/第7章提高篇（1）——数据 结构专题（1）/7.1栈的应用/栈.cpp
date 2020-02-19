#include <iostream>
#include <stack>
using namespace std;
int clear()
{
    TOP = -1;
}
int size()
{
    return TOP + 1;
}
bool empty()
{
    if (TOP == -1)
        return true;
    else
        return false;
}
void pop()
{
    TOP--;
}
int top()
{
    return st[TOP];
}
while (!st.empty()) {
    st.pop();
}
int main()
{

    return 0;
}