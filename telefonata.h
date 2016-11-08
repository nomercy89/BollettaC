#ifndef TELEFONATA_H
#define TELEFONATA_H
#include "orario.h"
#include <iostream>


class telefonata
{
private:
    orario inizio,fine;
    int numero;
public:
    telefonata();
    telefonata(orario,orario,int = 0);
    orario Inizio() const;
    orario Fine() const;
    int Numero() const;
    bool operator==(const telefonata &) const;
    bool operator!=(const telefonata &) const;


};

std::ostream& operator<<(std::ostream &,const telefonata &);





#endif // TELEFONATA_H
