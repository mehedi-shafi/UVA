///couldn't solve this one too. I am worthless

#include <stdio.h>
#include <string.h>
int main ()
{
    int t, r, i, len;
    char string[1000000], a, b;
    scanf ("%d", &t);
    ///getchar ();
    while (t--){
        string[1000000] = '\0';
        scanf ("%s", string);
        len = strlen (string);
        scanf ("%d", &r);
        ///getchar ();
        while (r--){
            scanf ("%c %c", &a, &b);
            ///getchar();
            for (i=0; i<len; ++i){
                if (string[i] == b)
                    string[i] = a;
            }
        }
        printf ("%s\n", string);
    }
    return 0;
}
