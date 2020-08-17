#include <stdio.h>
#include <string.h>
int main ()
{
    int i, len;
    char ch[10000];
    while (gets (ch)){
        len = strlen(ch);
        for (i=0; i<len; i++){
            ch[i]-=7;
        }
        printf ("%s\n", ch);
    }
    return 0;
}
