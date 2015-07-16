#ifndef ROMANO_H
#define ROMANO_H
#include <string>
#include <math.h>

using namespace std;

class Romano
{
	private:
        string numero_romano="";

	public:
		Romano();
        int cuenta_digitos(int x,int c,int aux);
        int multiplicador(int x,int c);
        void buscar_numero(int x);
        void conversion(int x);
        void imprimir();
        int valida_entrada();
        int valida_entrada_f();
};



#endif
