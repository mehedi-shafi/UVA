#include <stdio.h>
int main ()
{
    int t, i, x, y, z;
    scanf ("%d", &t);
    for (i=1; i<=t; ++i){
        scanf ("%d %d %d", &x, &y, &z);
        if (x> 20 || y>20 || z>20) printf ("Case %d: bad\n", i);
        else printf ("case %d: good\n", i);
    }
    return 0;
}
