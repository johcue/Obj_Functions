#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//FUNCION MAXIMO
double maximo(double x[], int n)
{
	double may=x[0];
	int i;
	for (i=1;i<n;i++)
	{
	   if (x[i]>may)
	 	{may=x[i];}
    }
	return(mayor);
}
//FUNCION MIN
double minimo(double x[], int n)
{
	double men=x[0];
	int i;
	for (i=1;i<n;i++)
	{
	   if (x[i]<men)
	 	{men=x[i];}
    }
	return(men);
}
//FUNCION RESTA DE MAX-MIN
double resta(double x[], int n)
{
	double res, max=0, min=0;
	max=maximo(x,n);
	min=minimo(x,n);
	res=max-min;
	return(res);
}
//FUNCION ESCALAR
double escalar(double x[],double x1[], int n)
{
       double a,b,u,v,prod;
       int i,j,suma,suma1;
       a=0.0; b=0.0; u=0.0; v=0.0; suma=0.0; suma1=0.0; prod=0.0;
       for(i=0;i<num;i++)
           {
                  a=pow(x[i],2);
                  suma+=a;
                  }
       u=pow(suma,0.5);
       for(j=0;j<num;j++)
           {
                  b=pow(x1[j],2);
                  suma1+=b;
                  }
       v=pow(suma1,0.5);
       pord=((v)*(u));
       return(pord);
 }
 
//HALLE EL ANGULO
double angulo(double x[],double x1[],int n)
{
       double esc=0,mult=0,alfa=0;
       int i,j,suma;
       esc=escalar(x,x1,n);
       for(i=0;i<num;i++)
            {
                  for(j=0;j<num;j++)
 		        {
                        mult=(x[0]*x1[0])+(x[1]*x1[1])+(x[2]*x1[2]);
                    
                    }     
            } 
       alfa=acos(((mult)/(esc)));
       return(alfa);
 }
//FUNCION MAYOR PAR
double maypar(double x[], int n)
{
	int i;
	double may=x[0];
	for(i=0;i<n;i++)
	{
		if(x[i]%2==0)
		{
			if(x[i]>may)
			{
				may=x[i];
			}
		}
	}
	return (may);
}

//FUNCION FACTORES PRIMOS
double primos(double n)
{
	int i=2,j;
	double v[20]={0}; 
	while(n!=1)
	{
	    if(n%i==0)
		   {
		     cout<<"-"<<i<<"\n";
		     n=n/i;
		   }
		else
		  {
			i++;
		   }
	 }
	 for(j=0;j<n;j++)//No se como meterlo en vector.
	 {
	 	if(i>0)
	 	{
	 		v[j]=i;
		 }
	 }
     return (v[j]);
}

//FUNCION NORMALIZACION
double normalizacion(double x[], int n)
{
	int i;
	double may=0,v[];
	may=maximo(x,n);
	for (i=0;i<n;i++)
	{
		v[i]=(x[i]/max);
	}
	return(v[i]);
}
//FUNCION NUMERO PALINDROMO
bool numeropalin(int n)
{
	int num,a,b,c,t;
	a=num%10;
	b=a/10;
	c=b/10;
	num=(a*100)+(t*10)+c;
	if(num==n)
	{
		return true;
	}
	else
	{
		return false;
	}	
}
//FUNCION FRASE PALINDROMO
bool frasepalin(string frase)
{
	int n=frase.length();
	int i;
	string aux="";
	for (i=0;i<n;i++)
	{
		if(frase[i] != ' ')
		{
			aux+=frase[i];
		}
	}
	frase=aux;
	n=frase.length();
	for (i=0; i<(n/2); i++)
	{
		if(frase[i] != frase[n-i-1])
		{
			return false;
		}
	}
	return true;
}

//FUNCION PALABRA PALINDROMO
bool palabrapalin(string frase)
{
	int n=frase.length();
	int i;
	for (i=0; i<(n/2); i++)
	{
		if(frase[i] != frase[n-i-1])
		{
			return false;
		}
	}
	return true;
}

//FUNCION NUMERO PALINDROMO
bool numeropalin(int n)
{
	int num,a,b,c,t;
	a=num%10;
	b=a/10;
	c=b/10;
	num=(a*100)+(t*10)+c;
	if(num==n)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

//MENU DEL CS
int main(int argc, char** argv)
{
	int opc, num,pri;
	double v[100000],v1[100000],men1, max1, rest,escalar1,alf,maypar1;
	char resp;
	do
	{
	men1=0;
	max1=0;
	rest=0;
	escalar1=0;
	alf=0;
	maypar1=0;
	pri=0;
	/*cout<<"\t CAPTURA DE VECTOR"<<endl;
	cout<<"Por Favor, Ingrese la cantidad de Notas a procesar :";
	cin>>num;
	 for (i=0;i<num;i++)
	 {
	    cout<<"Ingrese el ["<<i+1<<"] elemento ";
		cin>>v[i];
	 }
	system("pause");*/
	system("cls");
	cout<<"\t \t  _____________________________________________ "<<endl;
    cout<<"\t \t |                    (0 0)                    |"<<endl;
    cout<<"\t \t |        ----o000---(_____)---0oo---          |"<<endl;
    cout<<"\t \t |_____________________________________________|"<<endl;
    cout<<"\t \t |---------------------------------------------|"<<endl;
	cout<<"\t \t |-----------oo0 MENU DE OPCIONES 0oo----------|"<<endl;
	cout<<"\t \t |   1. DIFERENCIA ENTRE MAYOR Y MENOR.        |"<<endl;
	cout<<"\t \t |   2. PRODUCTO ESCALAR.                      |"<<endl;
	cout<<"\t \t |   3. ANGULO ENTRE DOS VECTORES.             |"<<endl;
	cout<<"\t \t |   4. MAYOR PAR.                             |"<<endl;
	cout<<"\t \t |   5. FACTORES PRIMOS DE UN NUMERO.          |"<<endl;
	cout<<"\t \t |   6. PROBABILIDAD (LANZAMIENTO DE DATOS).   |"<<endl;
	cout<<"\t \t |   7. NORMALIZACION DE UN CONJUNTO DE REALES.|"<<endl;
	cout<<"\t \t |   8. FRASE O NUMERO PALINDROMO.             |"<<endl;
	cout<<"\t \t |   9. NUMEROS QUE TERMINAN EN PRIMO.         |"<<endl;
	cout<<"\t \t |   10. SALIR.                                |"<<endl;
	cout<<"\t \t |---------------------------------------------|"<<endl;
    cout<<"\t \t |_____________________________________________|"<<endl;
	cout<<"\t \t POR FAVOR ELIJA SU OPCION ";
	cin>>opc;
	system("cls");
	switch(opc)
	{
		case 1: cout<<"\t DIFERENCIA ENTRE MAYOR Y MENOR."<<endl;
		        	cout<<"Por Favor, Ingrese la cantidad de Notas a procesar :";
					cin>>num;
					for (i=0;i<num;i++)
					{
					cout<<"Ingrese el ["<<i+1<<"] elemento ";
					cin>>v[i];
					}
					max1=maximo(v,num);
					men1=minimo(v,num);
					rest=resta(v,num);
					cout<<"La Resta entre el numero mayor "<<max1<<" y el numero menor "<<men1<<" es "<<rest<<endl;
 			    system("pause");
 			    break;
 		
 		case 2: cout<<"\t PRODUCTO ESCALAR. "<<endl;
 		        cout<<"Por Favor, el tamanio de los vetores ";
 		        cin>>num;
                cout<<"Ahora, digite el angulo alfa que separa a los vectores: ";
 		        cin>>alfa;
 		        cout<<endl<<"Primer Vector"<<endl;
 		        for(i=0;i<num;i++)
 		        {
                        cout<<"Ingrese el ["<<i+1<<"] elemento ";
					     cin>>v[i];
                                  }
                cout<<endl<<"Segundo Vector"<<endl;
                for(j=0;j<num;j++)
 		        {
                        cout<<"Ingrese el ["<<j+1<<"] elemento ";
					     cin>>v1[j];
                                  }
 		        escalar1=(cos(alfa)*escalar(v,v1,num));
 		        cout<<"El producto escalar de los vectores anteriores es: "<<escalar1<<endl;
                 system("pause");
 			    break;
 			    
 		case 3: cout<<"\t ANGULO ENTRE DOS VECTORES. "<<endl;
		         cout<<endl<<"Primer Vector"<<endl;
 		        for(i=0;i<3;i++)
 		        {
                        cout<<"Ingrese el ["<<i+1<<"] elemento ";
					     cin>>v[i];
                                  }
                cout<<endl<<"Segundo Vector"<<endl;
                for(j=0;j<3;j++)
 		        {
                        cout<<"Ingrese el ["<<j+1<<"] elemento ";
					     cin>>v1[j];
                 }
                alf=angulo(v,v1,n);
                cout<<"El Angulo entre Los vecotres :"<<alf<<endl;
                system("pause");
 			    break;
                 
        case 4:cout<<"\t MAYOR PAR DE UN CONJUNTO DE NUMEROS."<<endl;
               cout<<"Por Favor, el tamanio de los vetores ";
               cin>>num;
 		        for(i=0;i<num;i++)
 		        {
                        cout<<"Ingrese el ["<<i+1<<"] elemento ";
					     cin>>v[i];
                 }
                 maypar1=maypar(v,num);
                 cout<<"El numero Par Mayor del conjunto es: "<<maypar<<endl;
                system("pause");
 			    break;   
				
        case 5:cout<<"\t FACTORES PRIMOS DESCOMPUESTOS DE UN NUMERO. "<<endl;	
               cout<<"Por Favor, Digite el numero a procesar: ";
               cin>>num;
               pri=primos(num);
               cout<<"El Numero Descompuesto presenta "<<pri<<" como factores primos"<<endl;
		       system("pause");
               break;
               
        case 6:cout<<"\t PROBABILIDAD (LANZAMIENTO DE DATOS). "<<endl;
               system("pause");
               break;
        case 7: cout<<"\t NORMALIZACION DE UN CONJUNTO DE REALES."<<endl;
	           
               
               system("pause");
               break;
	}
	
		
	}while();
	
	
	
	
	
	system("pause");
	return 0;
}
