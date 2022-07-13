#include <cstdlib>
#include <iostream>
#include <math.h>
 /*1.EJERCICIO ESTADISTICO */
using namespace std;
 
//FUNCION PROMEDIO
double media(double x[], int n)
{
 	   double suma=0.0, res;
 	   int i;
 	   for (i=0;i<n;i++)
 	   {
	   	   suma+=x[i];
	   	   res=suma/n;
        }
        return(res);
}
//FUNCION NOTA MAX
double may(double x[], int n)
{
 	   double mayor=x[0];
		int i;
		for (i=1;i<n;i++)
		{
		 	if (x[i]>mayor)
	 	        {mayor=x[i];}
         }
         return(mayor);
}

//FUNCION NOTA MIN
double min(double x[], int n)
{
 	   double menor=x[0];
       int i;
		for (i=1;i<n;i++)
		{
		 	if(x[i]<menor)
 	            {menor=x[i];}

         }
         return(menor);
}
 		
//FUNCION PUTO INFIERNO (sup)
double compamediasup(double x[], int n)
{
 	   double porcsup=0;
       int i,sup=0,igual=0,prom=0;
 	   prom=media(x,n);
		for(i=0;i<n;i++)
		{
	        if(x[i]>prom)
			{sup++;}
			else
			{igual++;}
		}
    porcsup=sup*100.0/n; 
    return (porcsup);
}

//FUNCION PUTO INFIERNO 2.0 (min)
double compamediamin(double x[], int n)
{
 	   double porcinf=0;
       int i,inf=0,igual=0,prom=0;
 	   prom=media(x,n);
		for(i=0;i<n;i++)
		{
			if (x[i]<prom)
			{inf++;}
			else
			{igual++;}
		}
    porcinf=inf*100.0/n;
    return (porcinf);
}

//FUNCION VARIANZA^menor a 30 n, mayor 30-1
double varianza(double x[], int n)
{
	double prom=0, prom1=0, varianza=0;
	int i;
	prom=media(x,n);
	if(n>=30)
	{
             for(i=0;i<n;i++)
            {
                 prom1+=pow((x[i]-prom),2);	
	         }
          varianza=(prom1/(n));
     }
	else
    if(n<30)
	{
            for(i=0;i<n;i++)
            {
                 prom1+=pow((x[i]-prom),2);	
	         }
	           varianza=(prom1/(n-1));
     }
	return (varianza);
}

//FUNCION DESVIACION ESTANDAR
double desvest(double x[], int n)
{
	double prom=0, varianza1=0,desv;
	int i;
	prom=media(x,n);
	varianza1=varianza(x,n);
	desv=pow((varianza1/prom),0.5);
	return(desv);
}

//FUNCION DESVIACION MEDIA
double desvmed(double x[], int n)
{
	double prom=0, prom1=0, desvm=0;
	int i;
	prom=media(x,n);
	for(i=0;i<n;i++)
	{
		prom1+=(x[i]-prom);
	}
	desvm=(prom1/(n));
	return (desvm);
}

//FUNCION MEDIDA ARMONICA
double armonica(double x[], int n)
{
	int i,c=0;
	double prom=0,med1;
	prom=media(x,n);
	for (i=0;i<n;i++)
	{
		if(x[i]==0)//Como hacer que el sistema reconozca un cero en el array
		{
			c++;
		}
	}
	med1=(1/prom);	
	return(med1);
}

//FUNCION MEDIDA GEOMETRICA
double geometrica(double x[], int n)
{
	int i;
	double prom=0,geo=0,mult;
	prom=media(x,n);
	for(i=0;i<n;i++)
	{
		mult*=x[i];
	}
	geo=pow(mult,(1/n));
	return(geo);
}

//MENU KQUITA
int main(int argc, char *argv[])
{
 	double v[100000],med,may1,min1,compamediasup1,compamediamin1,var;
 	double est,desvmed1,armonica1,geom;
	 int opc,i,num,vec,f,c;
 	do
 	{
	system("cls");
 	opc=0;
 	vec=0;
 	med=0;
 	may1=0;
 	min1=0;
 	compamediasup1=0;
 	compamediamin1=0;
 	var=0;
 	est=0;
 	desvmed1=0;
 	armonica1=0;
 	geom=0;
	 /*cout<<"CAPTURA DE VECTOR"<<endl;
	 do
       {
       c=0;
      f=0;
     cout<<"Por Favor, Ingrese la cantidad de Notas a procesar :";
	 cin>>num;
       for(i=0;i<num;i++)
       {
            cout<<"Ingrese el ["<<i+1<<"] elemento ";
            cin>>v[i]; 
           if(v[i]== 0)
           {c++;}        
       }
       if(c>0)
       {
              f++;
              cout<<"Su vector contiene ceros"<<endl;
               cout<<"Compruebe de nuevo"<<endl;
       }
       }while(f>0);
	 cout<<endl<<"El Vector: "<<endl;
	 cout<<"{ ";
	 for (i=0;i<num;i++)
	 {
	 	cout<<v[i]<<",";
	 }
	 cout<<"}"<<endl;
	system("pause");
	system("cls");*/
    cout<<"\t \t  _____________________________________________ "<<endl;
    cout<<"\t \t |                    (0 0)                    |"<<endl;
    cout<<"\t \t |        ----o000---(_____)---0oo---          |"<<endl;
    cout<<"\t \t |_____________________________________________|"<<endl;
    cout<<"\t \t |---------------------------------------------|"<<endl;
    cout<<"\t \t |           EL FUTURO ES HOY, PRRO            |" <<endl;
    cout<<"\t \t |               EJERCICIO 1                   |" <<endl;
    cout<<"\t \t |---------------------------------------------|"<<endl;
    cout<<"\t \t |          ALGORITMO ESTADISTICO              |"<<endl;
 	cout<<"\t \t |---------------------------------------------|"<<endl;
 	cout<<"\t \t |   1. LA MEDIA DE LAS NOTAS.                 |"<<endl;
 	cout<<"\t \t |   2. LA NOTA MAXIMA Y MINIMA.               |"<<endl;
 	cout<<"\t \t |   3. CANTIDAD DE NOTAS MAS ALTAS            |"<<endl;
    cout<<"\t \t |      Y MAS BAJAS QUE LA MEDIA.              |"<<endl;
 	cout<<"\t \t |   4. LA VARIANZA.                           |"<<endl;
 	cout<<"\t \t |   5. LA DESVIACION ESTANDAR.                |"<<endl;
 	cout<<"\t \t |   6. LA DESVIACION MEDIA.                   |"<<endl;
 	cout<<"\t \t |   7. LA MEDIA ARMONICA.                     |"<<endl;
 	cout<<"\t \t |   8. LA MEDIA GEOMETRICA.                   |"<<endl;
 	cout<<"\t \t |   9. SALIR.                                 |"<<endl;
 	cout<<"\t \t |---------------------------------------------|"<<endl;
 	cout<<"\t \t |_____________________________________________|"<<endl;
 	cout<<endl<<"\t \t ---->POR FAVOR, ESCOJA EL PROCESO A REALIZAR: ";
 	cin>>opc;
 	system("cls");
	switch(opc)
 	{
	 			case 1: cout<<"\t LA MEDIA DE LAS NOTAS "<<endl;
	 			         cout<<"CAPTURA DE VECTOR"<<endl;
						 cout<<"Por Favor, Ingrese la cantidad de Notas a procesar :";
						 cin>>num;
	                     for (i=0;i<num;i++)
							 {
							     cout<<"Ingrese el ["<<i+1<<"] elemento ";
		                         cin>>v[i];
	                        }
						 med=media(v,num);
						 cout<<"La Media Del Conjunto de numeros es "<<med<<endl;
				     system("pause");
 			         break;
 			         
 			    case 2: cout<<"\t LA NOTA MAXIMA Y MINIMA. "<<endl;
 			            may1=may(v,num);
 			            min1=min(v,num);
 			            cout<<"La Nota Maxima del numeros es "<<may1<<endl;
 			            cout<<"La Nota Minima del numeros es "<<min1<<endl;
 			         system("pause");
 			         break;
 			         
 			    case 3: cout<<"\t CANTIDAD DE NOTAS MAS ALTAS Y MAS BAJAS QUE LA MEDIA. "<<endl;
 			             compamediasup1=compamediasup(v,num);
						 compamediamin1=compamediamin(v,num);
						 cout<<"-% de Notas >Promedio :"<<compamediasup1<<endl;
						 cout<<"-% de Notas <Promedio :"<<compamediamin1<<endl;
 			         system("pause");
 			         break;
 			    
 			    case 4: cout<<"\t  LA VARIANZA. "<<endl;
 			            var=varianza(v,num);
 			            cout<<"La Varianza del Sistema es: "<<var<<endl;
					 system("pause");
 			         break;
 			    
 			    case 5: cout<<"\t  LA DESVIACION ESTANDAR.     "<<endl;
 			            est=desvest(v,num);
 			            cout<<"La Desviacion Estandar es: "<<est<<endl;
					 system("pause");
 			         break;
 			    
 			    case 6: cout<<"\t LA DESVIACION MEDIA.    "<<endl;
 			            desvmed1=desvmed(v,num);
 			            cout<<"La Desviacion Media es: "<<desvmed1<<endl;
				     system("pause");
 			         break;
 			        
 			    case 7: cout<<"\t  LA MEDIA ARMONICA.    "<<endl;//Es el que no puede ir ceros
 			            armonica1=armonica(v,num);
 			            if(armonica>=1)
 			            {
 			            	cout<<"La Media Armonica es :"<<armonica1<<endl;
 			            	
						 }
						 else
						 {
						 	cout<<"No existe Media Armonica debido a que hay un factor 0 dentro del array"<<endl;
						 }
 			         system("pause");
 			         break;
 			         
 			    case 8: cout<<"\t LA MEDIA GEOMETRICA.     "<<endl;
 			            geom=geometrica(v,num)
						 cout<<"La Media Geometrica es: "<<geom<<endl;
					 system("pause");
 			         break;
 	default: T
	 }
}while(opc!=9);
cout<<"Gueno c:";
    system("PAUSE");
    return 0;
}
