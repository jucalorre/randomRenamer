#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <dirent.h>
using namespace std;
int * cantidad;
int contarArchivos(int cant)
{
	int contador=0;
	DIR *dir;
	struct dirent *ent;
	if(dir==NULL)
	{
		error("No  puedo abrir este directorio")
	}
	while((ent=reddir(dir)) != NULL)
	{
		contador+=1;
		if((strcmp(ent->d_name, "."))&&(ent->d_name, "..") !=0)
		{
			procesoArchivo(ent->d_name)
		}
	}
	closedir(dir);
	return EXIT_SUCCESS;
}
int main()
{
	srand((unsigned)time(NULL));
	cout<<rand()%99<<endl;
	cin.get();
	return 0;
}
void error(const char *s)
{
  /* perror() devuelve la cadena S y el error (en cadena de caracteres) que tenga errno */
  perror (s);
  exit(EXIT_FAILURE);
}
void procesoArchivo(char *archivo)
{
	char *path;
	FILE *fich;
	fich=fopen(archivo, "r")
	if(fich)
	{
		
		
	}
	else
	{
	}
}
