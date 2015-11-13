#include <stdio.h>
struct web
{
    char url[100];
    int rev;
}a[10];

int main ()
{
    int t, i, j, k;
    int max;
    scanf ("%d", &t);
    for (i=1; i<=t; i++){
        max = 0;
        for (j=0; j<10; ++j){
        scanf ("%s %d", a[j].url , &a[j].rev);
        if (a[j].rev>=max) max= a[j].rev;
        }
        printf ("Case #%d:\n", i);
     for (k=0; k<10; ++k){
        if (a[k].rev == max) printf ("%s\n", a[k].url);
     }
    }
    return 0;
}
