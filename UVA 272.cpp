#include <iostream>
#include <string>

using namespace std;

int main ()
{
    bool first = true;
    string in;
    while (getline(cin, in)){
        for (int i = 0; i<string.size(); i++){
            if (string[i] == '\"'){
                if(first){
                    string[i] = "``";
                    first = false;
                }
                else {
                    string[i] = "''";
                    first = true;
                }
            }
        }
        cout << string << endl;
    }
}
