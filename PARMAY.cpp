#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
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
bool palabrapalin(string palabra)
{
	int n=palabra.length();
	int i;
	for (i=0; i<(n/2); i++)
	{
		if(palabra[i] != palabra[n-i-1])
		{
			return false;
		}
	}
	return true;
}

//FUNCION NUMERO PALINDROMO
bool numeropalin(int n)
{
	int m,a,b,c,t;
	a=m%10;
	b=a/10;
	c=b/10;
	m=(a*100)+(t*10)+c;
	if(m==n)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int main(int argc, char *argv[])
{
	int s=0,num;
	string palabra;
	string frase;
	double npa=0,fpa=0,ppa=0;
	cout<<"\t  FRASE O NUMERO PALINDROMO. "<<endl;
                cout<<"Oprima ="<<endl;
                cout<<"-1 para Procesar un Numero."<<endl;
                cout<<"-2 para Procesar una Palabra."<<endl;
                cout<<"-3 para Procesar una Frase. "<<endl;
                cout<<"Que desea procesar? ";
                cin>>s;
                if(s==1)
                {
                	cout<<"Por Favor, Ingrese el Numero a procesar: ";
                	cin>>num;
					if(numeropalin(num))
					{
						cout<<"El Numero  es Palindromo."<<endl;
					}
					else
					{
					    cout<<"El Numero NO es Palindromo."<<endl;	
					}
				}
				else
				if(s==2)
				{
					cout<<"Por Favor Ingrese la Palabra a Procesar: ";
					getline(cin, palabra);
					if(palabrapalin(palabra))
					{
					    cout<<"La Palabra es Palindroma."<<endl;
	                }
                 	else
	                {
		                cout<<"La Palabra NO es Palindroma."<<endl;
	                 }
				}
				else
				if(s==3)
				{
					cout<<"Por Favor Ingrese la Frase a Procesar: ";
					getline(cin, frase);
					if(frasepalin(frase))
					{
					    cout<<"La Frase es Palindroma."<<endl;
	                }
                 	else
	                {
		                cout<<"La Frase NO es Palindroma."<<endl;
	                 }
					
				}
	system("pause");
	return 0;
                
}

{
	int i=2,n,k=0;
	double v[20]={0}; 
	cout<<"\t FACTORES PRIMOS."<<endl;
	cout<<"Por Favor, Ingrese el numero :";
	cin>>n;
	while(n!=1)
	{
	    if(n%i==0)
		   {
			 cout<<"-"<<i<<"\n";
			 v[k]=i;
			 k++;
		     n=n/i;
		   }
		else
		  {
			i++;
		   }
	 for(k=0;k<i;k++)
		{
		   	cout<<v[k]<<endl;
		   }
	 }
	
     system("pause");
	  return 0;
}

int main(int argc, char *argv[])
   {                   
    srand(time(0)); 
    int lanzamiento;
    double v[13]={0};
	int i,n;   
	cout<<"LANZAMIENTO DE DADOS"<<endl;
	for (i = 1; i <= 100; i++ )
      {   
       lanzamiento = (1+(rand()%6)); 
       v[lanzamiento]++;  
      }                 
	  for (n = 1; 6 >= n; n++ ) 
	  {
	  	cout <<"La frecuencia de la cara " << n << " es: " << v[n]<<endl;
	  }
	  system("pause");
	  return 0;

   } 
   
//Numeros Aleatorios
int main(int argc, char *argv[])
{
	int x,n,i,j;
	cout<<"Cuantos Numeros prro: ";
	cin>>n;
	srand(time(NULL));
	for(i=1;i<=n;i++)
	{
		x=rand()%1000+1;
		cout<<setw(8)<<x;
}
	  system("pause");
	  return 0;
}*/
