#include <stdio.h>
int main ()
{
    int t, x, y, s, d;
    scanf ("%d", &t);
    while (t--){
        scanf ("%d %d", &s, &d);
        if (s>=d&&(s+d)%2==0){
            x = (s+d)/2;
        y = (s-d)/2;
        if (x>y) printf ("%d %d\n", x, y);
        else printf ("%d %d\n", y, x);
        }
        else printf ("impossible\n");
    }
    return 0;
}
