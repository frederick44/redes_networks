#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int extended_euclidian(int module, int number){

int A1,A2,A3,B1,B2,B3,T1,T2,T3;
int R;
double t;


A1=1;
A2=0;
A3=module;

B1=0;
B2=1;
B3=number;

printf(" Q   A1   A2   A3   B1   B2   B3 \n");


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


printf(" %d  %d  %d  %d  %d  %d  %d  \n",R,A1,A2,A3,B1,B2,B3);

}

if (B3==1){
if(B2<0){
B2=B2+module;
}
printf("multiplicative inverse %d \n",B2);
}
else
printf("no multiplicative inverse \n");

return 0;
}


int main(){

int number,module,c;

printf("extended euclidian algorithm \n");
printf("multiplicative inverse \n");
printf("give me the number you wish find the inverse \n");
scanf("%d",&number);
printf("give me the module \n");
scanf("%d",&module);


extended_euclidian(module,number);

return 0;

}
