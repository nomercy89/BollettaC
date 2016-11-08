#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>


class orario
{
private:
    int secondi;
    int minuti;
    int ora;
public:

    orario(int=0,int=0,int=0);
    orario(const &);
    int Minuti() const;
    int Secondi() const;
    int Ore() const;
    operator int() const;
    orario operator+(const orario &) const;
    void AggiungiOra();
    void sommaOrario(const orario &);
    bool operator==(const orario&) const;
    bool operator!=(const orario&) const;


};

std::ostream& operator<<(std::ostream&,const orario &);

#endif // ORARIO_H
