///not completed
#include <stdio.h>
#include <string.h>
struct alphabet {
    char alpha;
    int amount;
};

int main ()
{
    int n, letter[26] = {0};
    char ch[10000], input[1000];
    scanf ("%d", &n);
    getchar ();
    while (n--){
        gets(input);
        strcat (ch, input);
    }
    int i,len;
    len = strlen (ch);
    for (i=0; i<len; i++){
        if (isalpha (ch[i])){

        }
    }
}
