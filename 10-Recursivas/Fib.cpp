// B. Fibonacci: Fib.
/*
Definicion Matematica:

    Fib: N → N / Fib(x) = { x                    0 ≤ x < 2 }
                          { Fib(x-1) + Fib(x-2)     eoc    }
*/

#include <cassert>
#include <iostream>

unsigned Fib (unsigned);

int main ()
{
    assert (Fib(0u)  == 0u);
    assert (Fib(3u)  == 2u);
    assert (Fib(5u)  == 5u);
    assert (Fib(6u)  == 8u);
    assert (Fib(11u) == 89u);
    assert (Fib(14u)  == 377u);
    assert (Fib(19u)  == 4181u);
    assert (Fib(43u)  == 433494437u);
}

unsigned Fib (unsigned x) {return x < 2 ? x : Fib(x-1) + Fib(x-2);}

/*
    Fib (5)
    Fib = Fib(5-1) + Fib(5-2)
    Fib = [Fib(4)] + [Fib(3)]
    Fib = [Fib(4-1) + Fib(4-2)] + [Fib(3-1) + Fib(3-2)]
    Fib = Fib(3) + Fib(2) + Fib(2) + Fib(1)
    Fib = [Fib(3-1) + Fib(3-2)] + [Fib(2-1) + Fib(2-2)] + [Fib(2-1) + Fib(2-2)] + [Fib(1-1) + Fib(1-2)]
    Fib = Fib(2) + Fib(1) + Fib(1) + Fib(0) + Fib(1) + Fib(0) + Fib(0) + Fib(-1)
    Fib = [Fib(2-1) + Fib(2-2)] + 1 + 1 + 0 + 1 + 0 + 0 + anulado

*/
