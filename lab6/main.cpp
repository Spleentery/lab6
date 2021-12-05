#include <iostream>
using namespace std;

class cou {
char abs[20];

public:

    cou(char dsa[20]){
        for (int i = 0; i < 20; ++i) {
             abs[i] = dsa[i];
        }
    }
    friend ostream& operator<<(ostream& os, const cou& dt);
};

ostream& operator<<(ostream& os, const cou& dt)
{
    for (int i = 0; i < 20; ++i) {
        os << dt.abs[i];
    }
    return os;
}

int main () {
    cou bluh("djfgha");
    cout << bluh << endl;
}
