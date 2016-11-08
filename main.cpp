#include <iostream>
#include "orario.h"
#include "bolletta.h"

using namespace std;

int main(int argc, char *argv[])
{

    orario a(19,10,0);
    orario b(20,10,0);
   orario c(21,10,0);
    telefonata t(a,b,123);
   telefonata t2(b,c,345);
    telefonata t3(a,c,5890);
    bolletta boll;
    boll.aggiungi(t);
    boll.aggiungi(t2);
    boll.aggiungi(t3);
    cout<<endl;
    cout<<boll;



    cout<<"MAIN"<<endl;



}
