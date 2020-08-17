#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main ()
{
    char s[100000];
    char * split;
    while (gets(s)){
        long long c = 0;
        split = strtok(s, " ,./\'\"\%$@#!~`*&^[{]}()<>|:;-+_=0123456789");
        while (split != NULL){
            ++c;
            split = strtok(NULL, " ,./\'\"\%$@#!~`*&^[{]}()<>|:;-+_=0123456789");
        }
        cout << c << endl;
    }
    return 0;
}
