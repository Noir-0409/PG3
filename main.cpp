#include "stdio.h"
#include <list>
#include <iostream>

using namespace std;

void Printf(const list<const char*>& name) {
    for (const auto& station : name) {
        cout << station << endl;
    }
}

int main() {

    list<const char*> s1970 = {
       
        "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata",
        "Komagome","Sugamo","Otuka","Ikebukuro","Mejiro","Takadanobaba","Shinokubo","Shinjuku",
        "Yoyogi","Harajuku","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatucho",
        "Shinbashi","Yurakucho\n"

    };

    list<const char*> s2019 = s1970;
    list<const char*>::iterator it = s2019.begin();
    advance(it, 7);
    s2019.insert(it, "Nishi-Nippori");

    list<const char*> s2022 = s2019;
    it = s2022.begin();
    advance(it, 24);
    s2022.insert(it, "Takanawa Geteway");

    cout << "1970年" << endl;
    Printf(s1970);

    cout << "2019年" << endl;
    Printf(s2019);

    cout << "2022年" << endl;
    Printf(s2022);


return 0;

}