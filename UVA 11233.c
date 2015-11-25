#include <stdio.h>
#include <string.h>
int main ()
{
    int l, n, i, j, len;
    char singular[20][20], plural [20][20], change[100][20];
    scanf ("%d %d", &l, &n);
    for (i=0; i<l; ++i){
        scanf ("%s %s", singular[i], plural[i]);
    }
    for (i=0; i<n; ++i){
        scanf ("%s", change[i]);
    }
    for (i=0; i<n; ++i){
        int flag = 0;
        for (j=0; j<l; ++j){
            if (strcmp (singular[j], change[i]) == 0){
                strcpy (change[i], plural[j]);
                flag = 1;
            }
        }
        if (flag == 1) continue;
        len = strlen (change[i]);
        if (change[i][len-1] == 'y' && change[i][len-2] != 'a' && change[i][len-2] != 'e' && change[i][len-2] != 'i' && change[i][len-2] != 'o' && change[i][len-2] != 'u'){
            change [i][len-1] = 'i';
            strcat (change[i] , "e");
        }
        else if (change[i][len-1] == 'o' || change[i][len-1] == 's' ||(change[i][len-1] == 'h' && change[i][len-2] == 'c') || (change[i][len-1] == 'h' && change[i][len-2] == 's') || change[i][len-1] == 'x') {
            strcat (change[i], "e");
        }
        strcat (change [i], "s");

    }

    for (i=0; i<n; ++i){
        printf ("%s\n", change[i]);
    }
    return 0;
}
