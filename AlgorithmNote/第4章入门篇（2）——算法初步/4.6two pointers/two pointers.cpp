#include <iostream>
using namespace std;
//在序列中取两个数使其相加和为一个给定的数
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (a[i] + a[j] == M)
            cout << a[i] << a[j];
    }
} //该方法复杂度过高
while (i < j) {
    if (a[i] + a[j] == m) {
        printf("%d %d\n", i, j);
        i++;
        j--;
    } else if (a[i] + a[j] < m)
        i++;
    else
        j--;
}
int merge(int A[], int B[], int C[], int n, int m)
{
    int i = 0, j = 0, index = 0;
    while (i < n && j < m) {
        if (A[i] <= B[j])
            C[index++] = A[i++];
        else
            C[index++] = B[j++];
    }
    while (i < n)
        C[index++] = A[i++];
    while (j < m)
        C[index++] = B[j++];
    return 0;
}

int main()
{

    return 0;
}