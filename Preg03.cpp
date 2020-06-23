#include <stdio.h>
#include <string.h>
#include <windows.h>

int main (){
	char a[10];
	int x, y, espacios=0, letras=0;
	
	printf ("Ingrese datos: ");
	scanf ("%[^\n]",&a);
	
	y=strlen(a);
	
	for (x=0;x<=y;x++){
		if (a[x] == ' '){
			espacios++;
		}
	}
	letras = y - espacios;
	
	printf("%d\n", letras);
	
	system("pause");
}
