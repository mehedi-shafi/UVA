#include <iostream>
using namespace std;
int bestTwoAvg(int a, int b, int c)
{
    if (a>=b && a>=c){
        if (b>=c)
            return ((a+b)/2);
        else
            return ((a+c)/2);
    }
    else if (b>=a && b>=c){
        if (a>=c)
            return ((b+a)/2);
        else
            return ((b+c)/2);
    }
    else if (c>=a && c>=b){
        if (a>=b)
            return ((c+a)/2);
        else
            return ((c+b)/2);
    }
}
int main ()
{
    int t, term1, term2, finale, att, ct1, ct2, ct3, total;
    cin >> t;
    for (int i= 1; i<=t; ++i){
        cin >> term1 >> term2 >> finale >> att >> ct1 >> ct2 >> ct3;
        total = term1+term2+finale+att+bestTwoAvg(ct1, ct2, ct3);
        if (total>=90)
            cout << "Case " << i << ": A" << endl;
        else if (total>=80 && total<90)
            cout << "Case " << i << ": B" << endl;
        else if (total>=70 && total <80)
            cout << "Case " << i << ": C" << endl;
        else if (total+=60 && total <70)
            cout << "Case " << i << ": D" << endl;
        else
            cout << "Case " << i << ": F" << endl;
    }
}
