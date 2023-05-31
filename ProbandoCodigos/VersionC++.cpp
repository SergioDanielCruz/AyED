#include<iostream>
using namespace std;

//Contenido sacado de:
//URL: https://stackoverflow.com/questions/62100553/how-do-i-use-c20-in-vscode
//URL: https://learn.microsoft.com/en-us/cpp/build/reference/zc-cplusplus?view=msvc-170
// PROBADOR DE VERSION DE C++
int main() {
    if (__cplusplus == 202002L)
        cout << "C++20" << endl;
    else if (__cplusplus == 201703L)
        cout << "C++17" << endl;
    else if (__cplusplus == 201402L)
        cout << "C++14" << endl;
    else if (__cplusplus == 201103L)
        cout << "C++11" << endl;
    else if (__cplusplus == 199711L)
        cout << "C++98" << endl;
    else
        cout << "pre-standard C++" << endl;
}

// OTRA FORMA ES EN LINE DE COMANDO APUNTANDO A UN ARCHIVO g++ hello.cpp -std=c++23