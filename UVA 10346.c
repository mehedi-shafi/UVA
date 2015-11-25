#include <stdio.h>
int main ()
{
    int total, n, k;
    while (scanf ("%d %d", &n, &k) != EOF && k > 1){
        total = n;
        while (n>=k){
            total += n/k;
            n = (n/k) + (n%k);
        }
        printf ("%d\n", total);
    }
    return 0;
}
