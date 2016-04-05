#include <iostream>

using namespace std;

int main()
{
   for (int i = 1; ; i++){
        int a, b, cause = 0, given = 0;
        cin >> a;
        if (a==0)
            break;
        while (a--){
            cin >> b;
            if (b==0)
                ++given;
            else if (b>0)
                ++cause;
        }
        cout << "Case " << i << ": " << (cause - given) << endl;
   }
   return 0;
}
