#include <iostream>
#include <string>

using namespace std;

int main ()
{
    bool first = true;
    string in;
    while (getline(cin, in)){
        for (int i = 0; i<in.size(); i++){
            if (in[i] == '\"'){
                if(first){
                    in[i] = '`';
                    in.insert((i+1), 1, '`');
                    first = false;
                }
                else {
                    in[i] = '\'';
                    in.insert((i+1), 1, '\'');
                    first = true;
                }
            }
        }
        cout << in << endl;
    }
}

