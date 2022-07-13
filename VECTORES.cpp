#include <cstdlib>
#include <iostream>
#define MAXIMO 20
using namespace std;

int main(int argc, char *argv[])
{
 	double x[MAXIMO],suma=0.0, promedio, mayor,menor, porcsup,porcinf;
 	int n,sup,inf,i, igual;
 	cout<<"Cuantas Notas quiere prro? ";
 	cin>>n; //n<=MAXIMO
 	for(i=0; i<n;i++)
 	{
	 		cout<<"Nota "<<i+1<<" :";
	 		cin>>x[i];
	 		suma+=x[i]; //suma de los x[i]
			}
			promedio=suma/n;
    sup=0;
    inf=0;
    igual=0;
    for(i=0;i<n;i++)
    {
	 				if(x[i]>promedio)
	 				{sup++;}
	 				else if (x[i]<promedio)
	 				{inf++;}
	 				else
	 				{igual++;}
					}
    porcsup=sup*100.0/n; //convierto sup a double
    porcinf=inf*100.0/n;
    mayor=x[0]; menor=x[0];
    for (i=1;i<n;i++)
    {
	 	if (x[i]>mayor)
	 	{mayor=x[i];}
	 	if(x[i]<menor)
	 	{menor=x[i];}
		}
    cout<<"-Promedio :"<<promedio<<endl;
    cout<<"-% de Notas >Promedio :"<<porcsup<<endl;
    cout<<"-% de Notas <Promedio :"<<porcinf<<endl;
    cout<<"-Notas mas alta :"<<mayor<<endl;
	cout<<"-Notas mas baja :"<<menor<<endl;
	system("PAUSE");
    return EXIT_SUCCESS;
}
