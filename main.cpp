#include <iostream>
using namespace std;

int menu();
void leerElementos(int[],int);
void imprimirElementos(int[],int);
int main(){
    int si = 0;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>> si;
    int arr[si];
    int s = 1;
/*	menu();
	int arr[5];
    leerElementos(arr,5);
    imprimirElementos(arr,5);
	return 0;*/
    do{
        switch(menu()){
            case 1:
                leerElementos(arr,si);
                s = 1;
                 break;
            case 2:
                imprimirElementos(arr,si);
                cout<<endl;
                s = 1;
                break;
             case 3:
                cout<<"gracias";
                cout<<endl;
                s = 5;
                break;
          }   
    }while(s == 1);
}


void leerElementos(int arreglo[],int size){
	for(int i = 0;i < size; i++){
		cout<<"Ingrese el valor para la casilla " << i << " :";
		cin >> arreglo[i];
	
	}
}
void imprimirElementos(int arreglo[],int size){
    for(int i = 0; i < size; i++){
        cout<<"["<<arreglo[i]<<"]";
    }
}

int menu(){

	int opcion=0;
	while(opcion==0){
		cout<<"		Menu"<<endl
		    <<"1. Leer Elementos"<<endl
		    <<"2. Imprimir Elementos"<<endl
		    <<"3. Salir"<<endl
		    <<"Ingrese una opcion: ";
		cin >> opcion;
		if( opcion < 1 || opcion > 3){
			cout<<"La Opcion no es valida."<<endl;
			cout<<"Intente nuevamente."<<endl;
			opcion = 0;
		}//fin if
	}
	return opcion;
}
