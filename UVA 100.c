#include <stdio.h>
#include <inttypes.h>
int cycle (int i);
int main ()
{
    int32_t  i, j,a, b, k, best, temp;
    while (scanf ("%d %d", &i, &j)!=EOF){
        if (i>j){
            a = j;
            b = i;
        }
        else {
            a = i;
            b = j;
        }
        best = 1;
        for (k=a; k<=b; ++k){
            temp = cycle(k);
            if (temp>=best) best = temp;
        }
        printf ("%d %d %d\n", i, j, best);
        }
        return 0;
}
int cycle (int i){
    int count = 1;
    while(1){
        if (i == 1) break;
        if (i%2!=0) {
            i = (3*i) +1;
            ++count;
        }
        else if (i%2 == 0){
            i/=2;
            ++count;
        }
        }
        return count;
}
