#include <iostream>
using namespace std;

void f(n)
{
    if (n == 0)
        return 1;
    else
        return f(n - 1) * n;
}
void f1()
{
    if (n == 0 || n == 1)
        return 1;
    else
        return f1(n - 1) + f(n - 2);
}

const int maxn = 11;
int n,P[maxn],hashTable[maxn]={false};
void generateP(){
    if(index == n+1)
    {
        for (int i = 0; i < n; i++)
            cout<<P[i];
        cout<<"\n";
        return ;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}