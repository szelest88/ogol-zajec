//	lecimy z DESem
// source: http://www.prasal.com/kryptografia/des.html

#include <iostream>

using namespace std;

//jako ¿e wydaje siê, ¿e kolejnoœæ permutacji wstêpnej jest okreœlona odgórnie, to tutaj:
int kolejnosc[56]={
				56, 48, 40, 32, 24, 16, 8,  0,  57, 49, 41, 33, 25, 17,
				9, 	1, 	58, 50, 42, 34, 26, 18, 10, 2,  59, 51, 43, 35,
				62, 54, 46, 38, 30, 22, 14, 6,  61, 53, 45, 37, 29, 21,
				13, 5, 	60, 52, 44, 36, 28, 20, 12, 4,  27, 19, 11, 3 };


void permutuj(char* input, int* kolejnosc, char* output){ // funkcja permutuje input kolejnoœci¹ okreœlon¹ w kolejnosc (z i-tego na i-ty w tablicy i
	for(int i=0;i<56;i++)								// zapisuje wynik do output
		output[i]=input[kolejnosc[i]];					// czy kolejnoœæ jest jakoœ odgórnie okreœlona? Powinna - ogólnie rzecz bior¹c - byæ.
	//Ÿle, musimy pozamieniaæ poszczególne bity wejœcia na bity wyjœcia... Czyli... jak? Inaczej: jak okreœliæ n-ty bit, powiedzmy, tablicy charów?
														//xorem z drugim argumentem 0001000... (xor binarny to ^)... No to pozostaje problem jak
														// okreœliæ tak¹ liczbê (0001...) Ok, chyba chocia¿by unsigned int to praktycznie bezpoœrednie
														// okreœlenie dango bitu

}


int main()
{

	char* input = new char[8]; //przykladowy input...  sizeof(char) ==1, czyli pi razy oko git
	char* klucz = new char[7];
	char* output = new char[8];
	for(int i = 0;i<8;i++)
	{
		input[i]=i;
	}

	permutuj(input, kolejnosc,output);
	for(int i = 0;i<8;i++)
		{
			cout<<output[i]<<"\t";
		}
	cout<<"\n";
	unsigned int i = 0;
	cout<<i<<"\n"; //zero

	cout<<(i|(1<<0))<<"\n";
	cout<<(i|(1<<1))<<"\n";
	cout<<(i|(1<<2))<<"\n";



	return 0;
}
