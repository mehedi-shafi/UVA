#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    for (int i = 1; ; i++){
        cin >> s;
        if (s.compare("*")==0)
            break;
        if (s.compare("Hajj")==0)
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        else if (s.compare("Umrah")==0)
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
    }
    return 0;
}
