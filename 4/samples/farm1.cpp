#include <iostream>

using namespace std;

class kura{
    public:
    void dzwiek(){cout << "KoKoKo" << endl;}
    void chodz(){/* implementuje poruszanie sie */}
};
class swinia{
    public:
    void dzwiek(){cout << "HrumHrumHrum" << endl;}
    void chodz(){/* implementuje poruszanie sie */}
};
class kon{
    public:
    void dzwiek(){cout << "IchaCha" << endl;}
    void chodz(){/* implementuje poruszanie sie */}
};

int main(){
    cout << "Farma wuja Sama" << endl;
    kura ktab[5];
    swinia stab[2];
    kon k;
    
    //wydajemy dzwieki
    for(int i=0; i<5; ++i)
        ktab[i].dzwiek();
    for(int i=0; i<2; ++i)
        stab[i].dzwiek();
    k.dzwiek();
}
