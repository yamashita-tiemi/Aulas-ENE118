#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "mylib.h"

using namespace std;

#define TAMVET 10 


int main()
{	
	int vet1[TAMVET];
	int vet2[TAMVET];
	
	for(int i=0 ; i<TAMVET; i++){
		vet1[i] = rand();
	}
	cout << "Vetor 1:" << vet1[TAMVET] << endl;
	
	
	vet2[TAMVET] = crescente(vet1[TAMVET], TAMVET);
	cout << "Vetor 2:" << vet2[TAMVET] << endl;

}

