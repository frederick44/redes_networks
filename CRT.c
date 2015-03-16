#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int extended_euclidian(int galois_field, int number){

int A1,A2,A3,B1,B2,B3,T1,T2,T3;
int R;
double t;


A1=1;
A2=0;
A3=galois_field;

B1=0;
B2=1;
B3=number;



while(B3!=0 && B3!=1){


t=floor(A3/B3);

if(t<0){
R=(int) t;
R=R-1;
}
else{
R=(int) t;
}


T1=A1-R*B1;

T2=A2-R*B2;


T3=A3-R*B3;


A1=B1;
A2=B2;
A3=B3;
B1=T1;
B2=T2;
B3=T3;

}

if (B3==1){
if(B2<0){
B2=B2+galois_field;
}
return B2;
}
else
return 0;
}

int main(){


int intentos;
int todo;
int* residuos;
int* modulos;
int* numeros;
int* inversos;
int nose;
int suma;
int result;
printf("CRT \n");

printf("dame el numero de modulos que checaras \n");
scanf("%d",&intentos);
todo=1;
suma=0;
numeros=(int*) malloc(sizeof(int)*intentos);
modulos=(int*) malloc(intentos*sizeof(int));
residuos=(int*) malloc(intentos*sizeof(int));
inversos=(int*) malloc(intentos*sizeof(int));


for (int i=0;i<intentos;i++){
printf("dame el residuo # %d \n",i+1);
scanf("%d",residuos+i);
printf("dame el modulo # %d \n",i+1);
scanf("%d",modulos+i);

todo=(todo)*(*(modulos+i));

}

printf("M=%d \n",todo);
printf(" \n");
printf("M's  \n");

for(int i=0;i<intentos;i++){
*(numeros+i)=todo/(*(modulos+i));
printf("%d ",*(numeros+i));

}
printf("\n");

printf("inversos \n");

for(int i=0;i<intentos;i++){
*(inversos+i)=extended_euclidian(*(modulos+i),*(numeros+i) );
printf("%d ",*(inversos+i));

suma=suma + (*(inversos+i))*( *(numeros+i))*( *(residuos+i));

}

result=suma%todo;
printf("\n");
printf("la suma es %d \n",suma);
printf("el resultado es: %d \n",result);

return 0;

}
