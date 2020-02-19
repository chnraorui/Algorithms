#include <iostream>
using namespace std;
const double eps = 1e-5; //精度为10^-5
double f()
{
    return x * x;
}

double calSqrt()
{
    double left = 1, right = 2, mid; //[left,right]
    while (right - left > eps) {
        mid = (left + right) / 2;
        if (f(mid) > 2) //mid>sqrt(2)
            right = mid;
        else //mid<sqrt(2)
            left = mid;
    }
    return mid;
}

int main()
{
    return 0;
}