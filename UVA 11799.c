#include <stdio.h>
int main ()
{
    int i, j, k, t, n, speed[10000];
    scanf ("%d", &t);
    for (i=1; i<=t; ++i){
        scanf ("%d", &n);
        k = 0;
        for (j=0; j<n; ++j){
            scanf ("%d", &speed[j]);
        }
        for (j=0; j<n; ++j){
            if (speed[j] >= k) k=speed[j];
        }
        printf ("Case %d: %d\n", i, k);
    }
    return 0;
}
