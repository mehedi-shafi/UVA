#include <iostream>
#include <cstdio>
using namespace std;
int arr[1000001];

void srt(int low, int high)
{
    long long i = low, j = high, pivot, temp;
    pivot = arr[(low+high)/2];
    while (i<j){
        while(arr[i] < pivot)
            ++i;
        while (arr[j] > pivot)
            --j;
        if (i<=j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            ++i;
            --j;
        }
    };
    if (low < j)
        srt(low, j);
    if (i < high)
        srt(i, high);
}
int main ()
{
    int n;
    while (scanf("%d", &n) && n){
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        srt(0, n-1);
        for (int i = 0; i < n; i++){
            if (i != 0)
                printf (" ");
            printf ("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
