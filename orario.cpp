#include "orario.h"


orario::orario(int o,int m,int s){

    if(o>23 || o<0 || m>59 || m<0 || s>59 || s<0){secondi = 0;minuti=0;ora=0;}
     else{ora = o;minuti=m;secondi=s;}
}
int orario::Minuti() const{
    return minuti;
}
int orario::Secondi() const{
    return secondi;
}
int orario::Ore() const{
    return ora;
}
orario orario::operator+(const orario &a) const{
    orario o;
    o.minuti = (minuti + a.minuti) % 60;
    o.ora = (ora + a.ora) % 24;
    o.secondi = (secondi + a.secondi) %60;
    return o;
}
void orario::AggiungiOra(){
     ora = (ora + 1)%24;
}
void orario::sommaOrario(const orario &a){
    minuti = (minuti + a.minuti) % 60;
    ora = (ora + a.ora) % 24;
    secondi = (secondi + a.secondi) %60;
}

bool orario::operator==(const orario&o) const{
    return o.Ore() == ora && o.Minuti() == minuti && o.Secondi() == secondi;
}
bool orario::operator!=(const orario&o) const{
    return o.Ore() != ora || o.Minuti() != minuti || o.Secondi() != secondi;
}

orario::operator int() const{
    return (ora*3600+minuti*60+secondi);
}

std::ostream& operator <<(std::ostream& os,const orario &o){
    return os<<o.Ore() << " " << o.Minuti() << " " <<o.Secondi();

}


