#include "header.h"

// Main
int main() {
	// Definimos los datos
	int entero;
	float flotante;
	double doble;
	
	// Pedimos los datos al usuario
	cout<<"Introduce un entero: "; cin>>entero;
	cout<<"Introduce un float: "; cin>>flotante;
	cout<<"Introduuce un doble: "; cin>>doble;
	
	//Llamamos a la función
	entero = absoluto(entero);
	flotante = absoluto(flotante);
	doble = absoluto(doble);
	
	// Imprimirmos los resultados
	cout<<"\nEl absoluto del numero entero es: "<<entero<<endl;
	cout<<"El absoluto del numero flotante es: "<<flotante<<endl;
	cout<<"El absoluto del numero doble es: "<<doble<<endl<<endl;
	
	system("pause");
	return 0;
}


