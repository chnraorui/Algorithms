#include <iostream>
using namespace std;

int binarySearch(int A[], int left, int right, int x)
{
    int mid; //mid为left和right的中点
    while (left <= right) { //如果left>right无法形成闭区间
        mid = (left + right) / 2; //取中点
        if (A[mid] == x)
            return mid; //找到x返回下标
        else if (A[mid] > x) //中间的数大于x
            right = mid - 1; //往左子区间[left,mid-1]查找
        else //中间的数小于x
            left = mid + 1; //往右子区间[mid+1,right]查找
    }
    return -1; //查找失败返回-1
}
int lower_bound(int A[], int left, int right, int x)
{ //求序列中的第一个大于等于x的元素位置
    int mid;
    while (left < right) { //left==right意味着找到唯一位置
        mid = (left + right) / 2;
        if (A[mid] >= x)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
int upper_bound(int A[], int left, int right, int x)
{ //求序列中第一个大于x的元素位置
    int mid;
    while (left + 1 < right) {
        mid = (left + right) / 2;
        if (A[mid] > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
//寻找有序序列的第一个满足某条件的元素位置（左闭右闭）
int solve(int left, int right)
{
    int mid;
    while (left < right) {
        mid = (left + right) / 2;
        if (条件成立)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
//左开右闭
int solve(int left, int right)
{
    int mid;
    while (left + 1 < right) {
        mid = (left + right) / 2;
        if (条件成立)
            right = mid;
        else
            left = mid + 1;
    }
    return right;
}
int main()
{
    const int n = 10;
    int A[n] = { 1, 3, 4, 6, 7, 8, 10, 11, 12, 15 };
    cout << binarySearch(A, 0, n - 1, 6) << " " << binarySearch(A, 0, n - 1, 9);
    return 0;
}