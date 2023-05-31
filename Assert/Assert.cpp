#include <iostream>
#include <cassert> // Habilitar el uso de assert
using namespace std::literals;

int main()
{
    int z = 2132;
    std::cout << "a";
    //    BOOL
    assert (    not true == false   );
    assert (    not true != true    );
    assert (    true and false == false ); //assert sirve para comprobar cosas
    assert (    false or false == false );
    assert (    false or true == true   );
    
    //    TAREA Entender como funcionan los siguientes tipos de datos:
    //    CHAR
    assert (    'a' + 1 == 'b'  );
    assert (    'c' - 'a' == 2  ); //Distancia entre a y c
    assert (    '@' == 64   );
    assert (    '@' + 1 == 'A');
    //    UNSIGNED
    unsigned a = 3, b = 4;
    assert (    a + b == 7);
    //    INT
    //    DOUBLE
    //    STRING
    assert (    "gracias "s + "abuela"s == "gracias abuela"s);

}