#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned char K[256];
unsigned char M[256];
unsigned char S[256];
unsigned char T[256];
unsigned char C[256];
unsigned char numbers[]={'0','1','2','3','4','5','6','7','8','9'};


void swap(int i,int j){
unsigned char b;

b=S[i];
S[i]=S[j];
S[j]=b;

}




int main(){

int a=0;
int b=0;
int j=0;
int k=0;
int t;
int l;

printf("RC4 cipher  T_T \n");
printf("give me the message \n");
scanf("%s",M);
printf("give me the KEY \n");
scanf("%s",K);

a=strlen(M);
b=strlen(K);

//printf("%d \n",a);
//printf("%d \n",b);


for (int h=0;h<b;h++){        //inicia conversion de numeros en codigo ascii a numeros reales
for (int f=0;f<10;f++){
if(K[h]==numbers[f])
K[h]=f;
else
K[h]=K[h];
}
}

for (int i=0;i<256;i++){

S[i]=i;

T[i]=K[i%b];

}



//printf("KSA\n");
for (int i=0;i<256;i++){
j=(j+S[i]+T[i])%256;

swap(i,j);
}

//printf("PRGA\n");

j=0;
k=0;

for(int p=0;p<a;p++){

k=(k+1)%256;
j=(j+S[k])%256;
swap(k,j);

t=(S[k]+S[j])%256;
l=S[t];
C[p]=M[p]^S[t];

}

for(int i=0;i<a;i++){
printf("%x ",C[i]);
}

printf("\n");


return 0;

}