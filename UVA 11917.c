///WA
#include <stdio.h>
#include <string.h>
int main ()
{
    unsigned int t, i, n, j, comfort[1000], time, d, c_time, flag, d_t;
    char subject[100][20], given[20];
    scanf ("%d", &t);
    getchar ();
    for (i=1; i<=t; ++i){
        scanf ("%d", &n);
        getchar ();
        int loop = 100;
        for (j=0; j<n; ++j){
            scanf ("%s %d", subject[j], &comfort[j]);
        }
        scanf ("%d", &time);
        getchar ();
        d= time +5;
        gets (given);
        flag = 0;
        for (j=0; j<n; ++j){
            if (strcmp (given, subject[j]) == 0) {
                    c_time = comfort[j];
                    flag = 1;
                    break;
            }
        }
        if (flag == 0) printf ("Case %d: Do your own homework!\n", i);
        else {
        if (c_time <= time) printf ("Case %d: Yesss\n", i);
        else if (time < c_time && c_time <= d) printf ("Case %d: Late\n", i);
        }
    }
    return 0;
}
