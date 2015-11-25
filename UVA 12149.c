#include <stdio.h>
int main ()
{
    int n, i, total;
    while (scanf ("%d", &n)){
        if (n==0) break;
        total = 0;
        for (i=n; i>=1; --i){
            total += (i*i);
        }
        printf ("%d\n", total);
    }
    return 0;
}
