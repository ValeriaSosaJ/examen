/** 
	AUTOR: Valeria Sosa Juarez 
	VERSION: 1.0
	Codigo creado para realizar el factorial de un numero con recursividad
**/

#include <iostream>
using namespace std;
	
	/**FUNCION QUE CALCULA EL FACTORIAL**/
	int factorial(int n)
	{
	/**SI EL NUMERO ES 0 O 1**/
		if (n<=1) 
		{
			return 1; 
		}
	/**SI ES NUMERO CUALQUIERA ENTONCES SE PASA A LA RECURSIVIDAD EN ELSE**/
		else
		{
			return n*factorial(n-1);
		}
		
	}

/**FUNCION DEL CAJERO AUTOMATICO**/
void cajeroautomatico()
{
	int saldo=20000;
	int cantidad, opcion;
	
	do{
		cout<<"menu"<<endl;
		cout<<"1: consultar saldo "<<endl;
		cout<<"2: retirar efectivo "<<endl;
		cout<<"3: salir "<<endl;
		cout<<"selecciona una opcion: ";
		cin >>opcion;
		switch (opcion)
		{
			case 1:
				cout<<"el saldo actual es de: "<<saldo<<endl;
			break;
			
			case 2: 
				cout<<"ingresa cant a retirar: ";
				cin>>cantidad;
				if (cantidad>saldo)
				{
					cout<<"no cuentas con suficiente efectivo"<<endl;
				}
				else if(cantidad<saldo)
				{
					saldo-=cantidad;
					cout<<"tu retiro ha sido de: "<<cantidad<<endl;
					cout<<"tu saldo disponible es de: "<<saldo<<endl;		
				}
			break;
			
			case 3: 
				cout<<"saliendo "<<endl;
			break;
			
			default:
				cout<<"ingresa de nuevo"<<endl;
			break;
		}	
	}while (opcion!=3);
}

int main()
{
	int op;
		cout<<"menu"<<endl;
		cout<<"1: FACTORIAL "<<endl;
		cout<<"2: BANCO "<<endl;
		cin>>op;
	
	/**AQUI SE ELIGE ENTRE HACER EL DEL FACTORIAL O EL DEL BANCO**/
	switch (op)
	{
		case 1:
				/**INGRESAR EL NUMERO **/
				int num;
				cout<<"Ingresa el numero: "<<endl;
				cin>>num;
				
				/**CONDICIONAL MOSTRANDO QUE SI EL NUMERO INGRESADO ES UN NUMERO 
				NEGATIVO ENTONCES NO SE PUEDE CALCULAR EL FACTORIAL**/
				if (num<0)
				{
					cout<<"El factorial no esta definido para un numero negativo"<<endl;
				}
				else 
				{
					/** SE IMPRIME EL FACTORIAL CALCULADO EN LA FUNCION **/
					cout<<"El factorial de "<<num<<" es de: "<< factorial(num) <<endl;
				}
		break;
		
		case 2:
			cajeroautomatico();
		break;
		
		default: 
		cout<<"INGRESA OTRA OPCION";
		break;
	}
	return 0; 
}
