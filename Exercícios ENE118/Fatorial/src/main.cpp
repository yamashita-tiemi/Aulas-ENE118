#include <iostream>
#include "mymath.h"

using namespace std;

int main()
{
    int a,b,d;
    float c;
    int f;
    float p;
    float y;

    a = 25;
    b = 7;
    c = 2.5;
    d = 3;

    f = fatorial(b);
    p = potencia(c,d);


    cout<<"Resultado y(25): "<<expressao(a)<<endl;
    cout<<"Resultado y(7!): "<<expressao(f)<<endl;
    cout<<"Resultado y(2.5³): "<<expressao(p)<<endl;



    system("pause");
    return 0;
    
}