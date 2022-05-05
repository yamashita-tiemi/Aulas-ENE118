#include <iostream>

using namespace std;

int main()
{
	float p, h, imc;

	cout << "Digite seu peso em kg: ";
	cin >> p;
	cout << "Digitie sua altura em metros: ";
	cin >> h;
	imc = p/(h*h);
    cout << "Seu indice de massa corporal e: " <<imc<<endl;

	if(imc<18.5){
        cout << "Voce esta abaixo do peso";
    }
    else if(imc>=18.5 && imc<=24.9){
        cout << "Voce esta com peso normal";
    }
    else if(imc>=25 && imc<29.9){
        cout << "Voce esta acima do peso";
    }
    else if(imc>=30){
        cout << "Voce esta obeso";
    }

	system("pause");

	return 0;
}