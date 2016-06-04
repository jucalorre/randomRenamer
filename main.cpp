#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
using namespace std;
char ruta[40]="~/Documentos/Programacion/";
int crearArreglo(int f)
{
	int i;
	int **rutas = new int* [f];
	for (i = 0; i < f; i++)
	{
	rutas[i] = new int[50];
	}
	return EXIT_SUCCESS;
}
char *obtenerNombre(char *ruta, struct dirent *ent)
{
	char *nombrecompleto;
	int tmp;
	tmp=strlen(ruta);
	nombrecompleto=new char(tmp+strlen(ent->d_name)+2);
	if (ruta[tmp-1]=='/')
		sprintf(nombrecompleto,"%s%s", ruta, ent->d_name);
	else
		sprintf(nombrecompleto,"%s/%s", ruta, ent->d_name);
	return nombrecompleto;
}
int contarArchivos(char *cantidad)
{
	struct dirent *ent;
	char *nombrecompleto;
	int cont=0;
	struct dirent *ent;
	crearArreglo(cont);
	while((ent->d_name)!=0)
	{
		nombrecompleto=obtenerNombre(ruta, ent);
		cont+=1;
	}
	return 0;
}





int * cantidad;
int main()
{
	srand((unsigned)time(NULL));
	cout<<rand()%99<<endl;
	cin.get();
	return 0;
}



