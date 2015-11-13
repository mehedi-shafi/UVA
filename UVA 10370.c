#include <stdio.h>
int main ()
{
    int t, i, n, num[1001], sum, j, count;
    double avg, out;
    scanf ("%d", &t);
    for (i=0; i<t; ++i){
        scanf ("%d", &n);
        sum = 0;
        for (j=0; j<n; ++j){
            scanf ("%d", &num[j]);
            sum+=num[j];
        }
        avg = (double) sum/ (double) n;
        count = 0;
        for (j=0; j<n; ++j){
            if (num[j] > avg) ++count;
        }
        out = (( (double) count*100)/ (double) n);
        printf ("%.3lf%%\n", out);
    }
    return 0;
}
