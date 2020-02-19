#include <iostream>
using namespace std;
struct mooncake {
    double store, sell, price;
} cake[1010];

bool cmp(mooncake a, mooncake b)
{
    return a.price > b.price;
}
int main()
{
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> cake[i].store;
    for (int i = 0; i < n; i++) {
        cin >> cake[i].sell;
        cake[i].price = cake[i].sell / cake[i].store;
    }
    sort(cake, cake + n, cmp);
    double ans = 0; //收益
    for (int i = 0; i < n; i++) {
        if (cake[i].store <= D) {
            D - = cake[i].store;
            ans += cake[i].sell;
        } else {
            ans += cake[i].price * d;
            break;
        }
    }
    cout << ans;
    return 0;
}