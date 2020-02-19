#include <iostream>
using namespace std;
int Partition(int A[], int left, int right)
{
    int temp = A[left]; //将A[left]存放至临时变量temp（主元）
    while (left < right) { //只要left与right不相遇
        while (left < right && A[right] > temp)
            right--; //反复左移righ
        A[left] = A[right]; //将A[right]挪到A[left]
        while (left < right && A[left] <= temp)
            left++; //反复右移left
        A[right] = [left]; //将A[left]挪到A[right]
    }
    A[left] = temp; //把temp放到left与right相遇的地方
    return left; //返回相遇的下标
}
void quickSort(int A[], int left, int right)
{
    if (left < right) { //当区间长度不超过1
        //将[left,right]按照A[left]一分为二
        int pos = Partition(A, left, right);
        quickSort(A, left, pos - 1); //对左子区间递归进行快速排序
        quickSort(A, pos + 1, right); //对右子区间递归进行快速排序
    }
}
int main()
{
}