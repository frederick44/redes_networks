#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int cipher[50];
char llave[50];
int numeros1[50];
int numeros2[50];
int numeros3[50];
int a=0;
int b=0;
int c=0;

int espacios[10];
char mensaje[50];

void completar(int numeros[],int vacia[], int a,int b, int espacios[]){

int f=0;

int d=0;

c=sizeof(espacios)/4;
 


printf("\n");


for (int i=0;i<a;i++){
	if (i==espacios[d]){
		vacia[i]=32;
		d=d+1;
		}
	else{
		vacia[i]=numeros[f%b];
		f=f+1;
		}
}
}

int main(){

printf("vigenere cipher: Elija una opcion  \n");
printf("1<-encriptar un mensaje  \n");
printf("2<-desencriptar un mensaje  \n");

int opcion;

scanf("%d",&opcion);

switch (opcion)
{
	case 1:

		printf("dame el mensaje  \n");
		scanf("%s",mensaje);
		
		printf("dame la llave: \n");
		scanf("%s",llave);
		printf("\n");

		
		a=strlen(mensaje);
		b=strlen(llave);
		
		printf("%d \n",b);
		for (int i=0;i<a;i++){
			if (mensaje[i]==95){
				espacios[c]=i;
				c=c+1;
				numeros1[i]=32;
			}
			else
				numeros1[i]=(int)mensaje[i]-96;
		}
		
			

		for (int i=0;i<b;i++){
		numeros2[i]=(int)(llave[i]-96);
		
		}
printf("\n");
		


		completar(numeros2,numeros3,a,b,espacios);


		for (int i=0;i<a;i++)
		{    
			if (numeros1[i]==32){
				cipher[i]=numeros1[i];
			} 
			else{
				if ((numeros1[i]+numeros3[i])%26 != 0)
					cipher[i]=((numeros1[i]+numeros3[i])%26) + 96;
	 			else
					cipher[i]=122;
		}
		}

		printf("el mensaje encriptado es: ");

		for (int i=0;i<a;i++)
		{
			printf("%c",cipher[i]);
		}

		printf("\n");
		
		


		break;
case 2:
		
		

		printf("dame el mensaje cifrado \n");
		scanf("%s",mensaje);
		printf("dame la llave a utilizar \n");
		scanf("%s",llave);

		a=strlen(mensaje);
		b=strlen(llave);

		

 		for (int i=0;i<a;i++){
		if (mensaje[i]==95){
		espacios[c]=i;
		c=c+1;
		numeros1[i]=mensaje[i];
		}
		else
		numeros1[i]=(int) mensaje[i]-96;	
		}


		for (int i=0;i<b;i++){
		numeros2[i]=(int) llave[i] -96;	
		}

		completar(numeros2,numeros3,a,b,espacios);

		for (int i=0;i<a;i++)
		{    
			if (numeros1[i]==95){
				cipher[i]=numeros1[i];
			} 
			else{
				if ((numeros1[i]-numeros3[i])%26 != 0)
					cipher[i]=abs(((numeros1[i] +26 -numeros3[i])%26)) + 96;
	 			else
					cipher[i]=122;
		}
		}
		



		printf("el mensaje desencriptado es: ");

		for (int i=0;i<a;i++)
		{
			printf("%c",cipher[i]);
		}

		printf("\n");


		break;
default:
		puts("opcion invalida");
}

return 0;
}
