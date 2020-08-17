#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdio>
#include <iomanip>
using namespace std;

int reverse_add(int number)
{
    int temp = 0;
    while(number > 0){
        temp += (number%10);
        number /= 10;
    }
    if (temp>9)
        reverse_add(temp);
    else
        return temp;
}

int main ()
{
    int arr[124], n = 0;
    for (int i = 0; i<123; i++){
        if (i>=65 && i<=90){
            ++n;
            arr[i] = n;
            if(n==26){
                n = 0;
            }
        }
        else if (i>=97 && i<=122){
            ++n;
            arr[i] = n;
        }
    }
    string a, b;
    while (getline(cin, a) && getline(cin, b)){
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i<a.size(); i++){
            if ((a[i]>='a' && a[i]<='z') || (a[i] >= 'A' && a[i] <= 'Z')){
                sum1 += arr[a[i]];
            }
        }
        for (int i = 0; i<b.size(); i++){
            if ((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z')){
                sum2 += arr[b[i]];
            }
        }
        int r1 = reverse_add(sum1);
        int r2 = reverse_add(sum2);
        if (r1>r2){
            double ans = ((double) r2 * 100 )/ (double) r1;
            cout << setprecision(2) << fixed << ans << " \%" << endl;
        }
        else{
            double ans = ((double) r1 * 100 )/ (double) r2;
            cout << setprecision(2) << fixed << ans << " \%" << endl;
        }
    }
    return 0;
}
