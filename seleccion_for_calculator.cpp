#include <iostream>
using namespace std;
main(){
/*
	int tabla = 0, res= 0;
	
	cout<<"Ingrese Tabla: ";
	cin>>tabla;
	for (int i=1;i<=10;i++){// 0 hasta 9
		res = tabla * i;
		
		cout <<tabla<<" X "<< i << " = "<< res << endl;
	
		}	
*/
	int inicio = 0, fin = 0, res= 0;
	
	cout<<"Ingrese Tabla Inicial: ";
	cin>>inicio;
	cout<<"Ingrese Tabla Final: ";
	cin>>fin;

	for (int rango=inicio;rango<=fin;rango++){
	cout << "Tabla del " << rango << endl;	
		for (int i=1;i<=10;i++){// 0 hasta 9
		res = rango * i;
		
		cout <<rango<<" X "<< i << " = "<< res << endl;
	
		}		
		
		
	}
	
	
		
		
		

	system("pause");
}

