#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

using namespace std;
bool palin(string palabra)
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

int main(int argc, char *argv[])
{
	string palabra;
	cout<<"INGRESE LA PFRASE PRRO : ";
	getline(cin, palabra);
	if(palin(palabra))
	{
		cout<<"silas"<<endl;
	}
	else
	{
		cout<<"nolas"<<endl;
	}
	system("pause");
	return 0;
}
/*/ESCALAR
int main(int argc, char *argv[])
{
       double y[100],x[100],a=0,b=0,u=0,v=0,alfa=0,mult=0;
       int i,j,num,c,suma=0,suma1=0;
        cout<<"Por Favor, digite el tamanio de los vetores ";
 		        cin>>num;
        cout<<"Ahora, digite el angulo alfa que separa a los vectores: ";
 		        cin>>alfa;
        cout<<endl<<"Primer Vector"<<endl;
        for(i=0;i<num;i++)
            {
                    cout<<"Ingrese el ["<<i+1<<"] elemento ";
			        cin>>y[i];
			        a=pow(y[i],2.0);
                    suma+=a;
                  }
       u=pow(suma,0.5);
        cout<<endl<<"Segundo Vector"<<endl;
         for(j=0;j<num;j++)
 		        {
                    cout<<"Ingrese el ["<<j+1<<"] elemento ";
	                cin>>x[j];
	                b=pow(x[j],2.0);
                    suma1+=b;
                  }
       v=pow(suma1,0.5);
       pord=((v)*(u));
       for(i=0;i<num;i++)
            {
                  for(j=0;j<num;j++)
 		        {
                         mult=(y[0]*x[0])+(y[1]*x[1])+(y[2]*x[2]);
                    
                    }     
            } 
       cout<<mult<<endl;
       alfa=acos(((mult)/(pord)));
       cout<<alfa<<endl;
       system("pause");
       return 0;     
}
/ESCALAR
double escalar(double x[],double x1[], int n)
{
       double a,b,u,v,prod;
       int i,j,suma,suma1;
       a=0.0;
       b=0.0;
       u=0.0;
       v=0.0;
       suma=0.0;
       suma1=0.0;
       prod=0.0;
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
       double escalar1=0,mult=0,alfa=0;
       int i,j,suma;
       escalar1=escalar(x,x1,n);
       mult=(x[0]*x1[0])+(x[1]*x1[1])+(x[2]*x1[2]);
       alfa=acos(((mult)/(escalar1)));
       return(alfa);
 }
/*int main(int argc, char *argv[])
{
	int i=2,n,j;
	double v[20]={0};
	cout<<"Ponga el numero prro: ";
	cin>>n;
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
     system("pause");
     return 0;
}
*/
