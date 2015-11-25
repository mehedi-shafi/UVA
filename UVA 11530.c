#include <stdio.h>
#include <string.h>
int main ()
{
    int t, i, len, j, count;
    char input[100];
    scanf ("%d", &t);
    getchar ();
    for (i=1; i<=t; i++){
        count = 0;
        gets (input);
        len = strlen (input);
        for (j=0; j<len; ++j){
            if (input[j] == 'a' || input[j] == 'd' || input[j] ==  'g' || input[j] == 'j' || input[j] == 'm' || input[j] == 'p' || input[j] ==  't' || input[j] == 'w' || input[j] ==  ' ' ) count+=1;
            else if (input[j] == 'b' || input[j] ==  'e' || input[j] == 'h' || input[j] == 'k' || input[j] ==  'n' ||input[j] == 'q' || input[j] ==  'u' || input[j] == 'x') count += 2;
            else if (input[j] == 'c' || input[j] == 'f' || input[j] ==  'i' || input[j] == 'l' || input[j] == 'o' || input[j] == 'r' || input[j] == 'v' || input[j] == 'y') count+=3;
            else if (input[j] == 's' || input[j] == 'z') count+=4;
        }
        printf ("Case #%d: %d\n", i, count);
    }
    return 0;
}
