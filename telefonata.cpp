#include "telefonata.h"
#include <iostream>


telefonata::telefonata(){}
telefonata::telefonata(orario a,orario b,int x):inizio(a),fine(b),numero(x){}
orario telefonata::Inizio() const{return inizio;}
orario telefonata::Fine()const{return fine;}
int telefonata::Numero() const{return numero;}
bool telefonata::operator==(const telefonata &t) const{
    return t.Fine() == fine && t.Inizio() == inizio && t.numero == numero;
}
bool telefonata::operator!=(const telefonata &t) const{

    return t.Fine() != fine || t.Inizio() != inizio || t.numero != numero;

}
std::ostream& operator<<(std::ostream &os,const telefonata &t){
    return os<<t.Inizio() << " "<<t.Fine() << " "<< t.Numero();
}
