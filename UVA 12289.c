#include <stdio.h>
#include <string.h>
#include <math.h>
void main ()
{
    int t, l, i;
    char ch[6];
    scanf ("%d", &t);
    getchar();
    while (t--){
        gets(ch);
        l = strlen (ch);
        if (l==5){
            printf ("3\n");
            continue;
        }
        else{
            if ((ch[0] == 'o' && ch[1] == 'n') || (ch[0] == 'o' && ch[2] == 'e') || (ch[1] == 'n' && ch[2] == 'e')) printf ("1\n");
            else printf ("2\n");
        }
    }
}
