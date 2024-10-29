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

int main()
{
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
	
	
	
	return 0; 
}
