#ifndef BOLLETTA_H
#define BOLLETTA_H
#include "telefonata.h"
using namespace std;


class bolletta
{
friend std::ostream& operator<<(std::ostream &,const bolletta &);

private:

    class nodo;
    class smartp{

    public:
        nodo* n;
        smartp(nodo* =0);
        smartp(const smartp&);
        smartp& operator =(const smartp&);
        ~smartp();
        nodo& operator*() const;
        nodo* operator->() const;
        bool operator==(const smartp&) const;
        bool operator!=(const smartp&) const;


    };


    class nodo{
    public:
        nodo();
        nodo(const telefonata &,const smartp&);
        telefonata info;
        smartp next;
        int riferimenti;

    };


    smartp first;



public:
    bolletta();
    bolletta(const bolletta &);
    bool vuota() const;
    void aggiungi(const telefonata &);
    void togli(const telefonata &);
    telefonata estrai();
    bolletta& operator=(const bolletta&);

};
//std::ostream& operator<<(std::ostream &,const bolletta &);


#endif // BOLLETTA_H
