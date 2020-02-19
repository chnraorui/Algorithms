#include <iostream>
#include <sort>
using namespace std;

void selectSort()
{
    for (int i = 1; i <= n; i++) { //进行n趟操作
        int k = i;
        for (int j = i; j <= n; j++) { //选出[i,n]中最小的元素下标为k
            if (A[j] < A[k]) {
                k = j;
            }
        }
        int temp = A[i]; //交换A[k]与A[i]
        A[i] = A[k];
        A[k] = temp;
    }
}
int A[maxn], n;
void insertSort()
{
    for (int i = 2; i < n; i++) { //进行n-1趟排序
        int temp = A[i], j = i; //temp存放A[i],j从i开始往前枚举
        while (j > 1 && temp < A[j - 1]) { //temp小于前一个元素A[j-1]
            A[j] = A[j - 1]; //把A[j-1]后移一位至A[j]
            j--;
        }
        A[j] = temp; //插入位置为j
    }
}
//sort(a.begin,a.end,cmp)
//
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int a[6] = { 9, 4, 2, 5, 6, -1 };
    sort(a, a + 4); //将a[0]~a[3]从小到大排序
    for (int i = 0; i < 6; i++)
        cout << a[i];

    return 0;
}
void bubble_sort(int arr[], int len)
{ //冒泡排序
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void selection_sort(int arr[], int len)
{ //选择排序
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i + 1; j < len; j++) //走訪未排序的元素
            if (arr[j] < arr[min]) //找到目前最小值
                min = j; //紀錄最小值
        swap(&arr[min], &arr[i]); //做交換
    }
}

void insertion_sort(int arr[], int len)
{ //插入排序
    int temp;
    for (int i = 1; i < len; i++) {
        temp = arr[i];
        for (int j = i; j > 0 && arr[j - 1] > temp; j--)
            arr[j] = arr[j - 1];
        arr[j] = temp;
    }
}