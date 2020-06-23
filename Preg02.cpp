#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
	char correo[50];	
	char dominio[20]="@untels.edu.pe",
	delimitador[]="@";
	cout<<"Ingrese el correo: ";
	cin>>correo;
	char *token = strtok(correo, delimitador);
	if(token != NULL){
		while(token != NULL){	
			printf("%s\n", token);	
			token = strtok (NULL, delimitador);		
	}
	}
	
	system ("pause");
	
	}
