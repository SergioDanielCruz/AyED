
# include <iostream>
# include <cassert>
# include <string>
using namespace std::literals;

int main(){

//Tipo de dato: BOOL - Lo representamos matematicamente con dos valores, en este caso "True" y "False"
    /*Valores
    assert(true);
    assert(false);
    */
    //Operadores BOOL
    assert(true == true); //Operador Matematico "="
    assert(true != false); //Operador Matematico "≠"
    assert(true or false); //Operador Matematico "∨"
    assert(true and true); //Operador Matematico "∧"
    assert(not false); assert(!false); //Operador Matematico "~" 
    //Ejemplos conbinando operadores
    assert(true and true == true); //Operadores matematicos "∧" "="
    assert(true != false and false != true); //Operadores matematicos "∧" "="
    assert(true and false == false); //Operadores matematicos "∧" "="
    assert(true or false == true); //Operadores matematicos "∨" "="
    assert(not not not true == false); //operadores matematicos "~" "="
    assert(not false == true); //Operadores matematicos "~" "="
    assert(not true == false); //Operadores matematicos "~" "=" "∨"
    assert(not false == true or false); //Operadores matematicos "~" "=" "∨"
    assert(true == (not false != false) or false); //Operadores matematicos "=" "~" "≠" "∨"

// Tipo de dato: INT - Es el conjunto de valores el cual representamos matematicamente en los numeros enteros (Z)
    assert(4 == 2 + 2); // Suma
    assert(9 - 5 == 4); // Resta
    assert(6 != 4 + 4); // Diferencia
    assert(50.0 == 5.0 * 10.0); // Multiplicacion
    assert(60.0 == 120.0 / 2.0); // Division
    assert(-40.0 == 20.0 - 60.0); // Numero negativo

//Tipo de dato: DOUBLE - Es el conjunto de valores el cual representamos en los numeros reales (R)
    double x,y;
    x= 5.001; // Valores literales del tipo dato real 
    y=5.000;
    assert(x==y+0.001);

    assert(5.0 - 5.0 == 0.0); // Resta
    assert(4.0 + 5.0 == 9.0); // Suma
    assert(6.5 != 4.7 + 8.3); // Diferencia

//Tipo de dato: CHAR - Es el conjunto de valores en el que se encuentran todos los caracteres disponibles de la tabla ASCII (2^8 = 255 + 00) -> 256 posibles caracteres
    assert('A' == 'A'); // Igualdad
    assert('A' != 'B'); // Diferencia (Valor de A=65 distinto de B=66)
    assert('B' <= 'C'); // Menor o igual (Valor de B=66 menor de C=67)
    assert('D' >= 'C'); // Mayor o igual (Valor de D=68 mayor a C=67)
    assert('A' != 'a'); // Diferencia de valores MAYUSCULAS != minusculas (A=65 diferente de a=97)
    assert(140 == 'F' + 'F'); // Suma (Valor de F=70)
    assert(70 == 'x' - '2'); // Resta (Valor de x=120 - valor de 2(caracter)=50)

// Tipo de dato: STRING - Es un tipo de dato compuesto formado por caracteres. A diferencia del tipo de dato anterior (CHAR), se expresa en comillas.
    std::string gr="gracias";
    std::string abu="abuela";
    std::string grabu="graciasabuela";
    assert(gr+abu==grabu);
    
    assert("A"s == "A"s); // Igualdad
    assert("B"s != "A"s); // Diferencia
    assert("gonzalez"s == "gon"s + "zalez"s); // Igualdad (La suma de caracteres (8))

// Tipo de dato: UNSIGNED - Es el conjunto de valores que representamos matematicamente en los numeros naturales (N) 
    unsigned d,k; // Los literales son constantes qyue no se pueden cambiar.
    d=20;
    k=19;
    assert(k+1==d);

    assert(0u == 0u);
    assert(7u == 3u + 4u);
    assert(999u == 998u + 1u);
    assert(1400u <= 1500u);
    assert(8000u >= 1000u);
   

}
