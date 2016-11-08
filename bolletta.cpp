#include "bolletta.h"
#include <iostream>


//SMARTP


bolletta::smartp::smartp(nodo* nod):n(nod){}

bolletta::smartp::smartp(const smartp &s):n(s.n){
    if(n)
    n->riferimenti++;
}

bolletta::smartp::~smartp(){
    if(n){
    n->riferimenti--;
    if(n->riferimenti==0)
        delete n;
    }
}

bolletta::nodo & bolletta::smartp::operator *() const{

    return *n;
}
bolletta::nodo * bolletta::smartp::operator ->() const{
    return n;

}
bool bolletta::smartp::operator ==(const smartp&s)const{
    return s.n == n;
}
bool bolletta::smartp::operator !=(const smartp&s)const{
    return s.n != n;
}







std::ostream& operator<<(std::ostream &os,const bolletta &b){

    bolletta::smartp n = b.first;

    while(n!=0){
        cout<<endl<<n->info<<endl;
        os<<n->info<<" "<<n->riferimenti<<endl;
        n= n->next;
    }
    os<<endl;
    return os;

}

bolletta::nodo::nodo():riferimenti(0){}


bolletta& bolletta::operator =(const bolletta&b){
   first = b.first;
   return *this;
}

bolletta::nodo::nodo(const telefonata &t,const smartp &n):info(t),next(n),riferimenti(0){}

bolletta::bolletta():first(0){}

bolletta::bolletta(const bolletta &b){

    first = b.first;
}

bool bolletta::vuota() const{
    return first==0;

}
void bolletta::aggiungi(const telefonata &b){
    first = new nodo(b,first);
}



telefonata bolletta::estrai(){

    telefonata t = first->info;
    first = first->next;
    return t;

}

bolletta::smartp& bolletta::smartp::operator =(const smartp&s){
    if(this != &s){

        nodo * p = n;
        n = s.n;

        if(n) n->riferimenti++;
       /* if(p){
            p->riferimenti--;
            if(p->riferimenti==0) delete p;
        }
    */
    }
    return *this;

}




