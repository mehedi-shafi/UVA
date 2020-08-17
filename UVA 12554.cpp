#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int t;
    string song[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    bool song_end = false, name_end = false;
    cin >> t;
    string name[t];
    for (int i = 0; i<t; i++){
        cin >> name[i];
    }
    int n = 0, s = 0;
    while (!song_end || !name_end){
        cout << name[n] << ": " << song[s] << endl;
        ++s;
        ++n;
        if (n==t){
            name_end = true;
            n = 0;
        }
        if (s == 16){
            if (name_end)
                song_end = true;
            s = 0;
        }
    }
    return 0;
}
