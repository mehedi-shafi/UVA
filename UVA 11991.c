/*baler code #TIME LIMIT EXCEEDED SHOW KORE. Try to reduce.. No idea how.*/

#include <stdio.h>
int main ()
{
    int array [100000], n, m, k, v, i, j, occur;
    while (scanf ("%d %d", &n, &m)!=EOF){
            for (i = 0; i<n; ++i){
                scanf ("%d", &array[i]);
            }
            while (m--){
                scanf ("%d %d", &k, &v);
                occur = 0;
                for (j=0; j<n; ++j){
                    if (array[j] == v){
                        ++occur;
                    }
                    if (occur == k) break;
                }
                if (occur < k) printf ("0\n");
                else printf ("%d\n", j+1);
            }
    }
    return 0;
}
