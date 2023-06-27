/*
Calendarios:
    Julio Cesar(Juliano): Entre los años {0 a 1582}.Esta fijado en 365.25, por lo que contiene los años bisiestos que es cada 4 años
    Papa Greogorio XIII (Gregoriano): Entre {1582 a ∞}.Los Bisiestos son divisibles por 4 (años), no divisibles por 100 y si divisibles por 400


*/


#include <iostream>
#include <cassert>

bool esbiciesto(unsigned);

int main()
{
    assert(not esbiciesto(1600));
}

bool esbiciesto(unsigned a)
{
    return a%400 == 0 || a%4 == 0 && a%100 != 0;
}

/*
Notas:
    Operadores que si estan definidos su orden de evaluacion [and, or, Condicional/Ternario(if, ?, else, :) y ","].
        Los Demas operadores no lo tienen definidos, ya que evalua sus operandos en conjunto.
    
    La Presedencia y la Asociatividad tiene que ver con la estructura del arbol.
        Mientras que el orden de evaluacion es como recorremos el arbol 
*/