#include <iostream>
using namespace std;
int menu();
int recursivaF(int);
int iterativaF(int);
int recursivaS(int);
int iterativaS(int);
int main(){
	int sa =0;
	while(sa==0){
		int opcion;
		opcion = menu();
		switch(opcion){
			case 1:
				cout<<"Ingrese el numero"<<endl;
				int n1;
				cin>>n1;
				cout<<"La respuesta es: "<<recursivaF(n1)<<endl;
				break;
			case 2:
				cout<<"Ingrese el numero"<<endl;
				int n2;
				cin>>n2;
				cout<<"La respuesta es: "<<iterativaF(n2)<<endl;
				break;
			case 3:
				cout<<"Ingrese el numero: "<<endl;
				int n3;
				cin>>n3;
				cout<<"La respuesta es: "<<recursivaS(n3)<<endl;
				break;
			case 4:
				cout<<"Ingrese el numero: "<<endl;
				int n4;
				cin>>n4;
				cout<<"La respuesta es: "<<iterativaS(n4)<<endl;
				break;
			case 5:
				sa = 1;
				cout<<"Gracias!!"<<endl;
		}
	}
	return 0;
}

int menu(){
	int salida;
	cout<<"     Menu"<<endl<<"1. Version recursiva factorial"<<endl<<"2. Version Iterativa factorial"<<endl;
	cout<<"3. Version recursiva sumatoria"<<endl<<"4. Version iterativa sumatoria"<<endl<<"5. Salir"<<endl;
	cin>>salida;
	return salida;
}

int recursivaF(int n){
	if(n == 0){
		return 1;
	}else{
		return n*recursivaF(n-1);
	}
}

int iterativaF(int n){
	int acum =1;
	for(int i = 1; i <= n; i++) {
		acum *=i;
	}
	return acum;
}

int recursivaS(int n){
	if(n == 0 ){
		return 0;
	}else{
		return n + recursivaS(n-1);
	}
}

int iterativaS(int n){
	int acum = 0;
	for(int i = 0; i <= n; i++) {
		acum+=i;
	}
	return acum;
}




























