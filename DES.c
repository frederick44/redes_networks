#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char digitos[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char matrix[8][8]; //se utiliza pasa la llave
char entrada[16];
char llave[16];
char S1[4][16]={{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}};
char S2[4][16]={{15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10},{3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5},{0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15},{13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9}};
char S3[4][16]={{10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8},{13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1},{13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7},{1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12}};
char S4[4][16]={{7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15},{13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9},{10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4},{3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14}};
char S5[4][16]={{2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9},{14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6},{4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14},{11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3}};
char S6[4][16]={{12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11},{10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8},{9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6},{4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13}};
char S7[4][16]={{4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1},{13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6},{1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2},{6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12}};
char S8[4][16]={{13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7},{1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2},{7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8},{2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11}};


void convertir_resultado(int resultado[],char nose[]){

for(int i=0;i<16;i++){
resultado[i]=(int) (nose[4*i]<<3)^(nose[4*i+1]<<2)^(nose[4*i+2]<<1)^nose[4*i+3];
}

}



void inverse_permutation(char inverse_perm_block[],char R[],char L[]){

inverse_perm_block[0]=R[7];
inverse_perm_block[1]=L[7];
inverse_perm_block[2]=R[15];
inverse_perm_block[3]=L[15];
inverse_perm_block[4]=R[23];
inverse_perm_block[5]=L[23];
inverse_perm_block[6]=R[31];
inverse_perm_block[7]=L[31];
inverse_perm_block[8]=R[6];
inverse_perm_block[9]=L[6];
inverse_perm_block[10]=R[14];
inverse_perm_block[11]=L[14];
inverse_perm_block[12]=R[22];
inverse_perm_block[13]=L[22];
inverse_perm_block[14]=R[30];
inverse_perm_block[15]=L[30];
inverse_perm_block[16]=R[5];
inverse_perm_block[17]=L[5];
inverse_perm_block[18]=R[13];
inverse_perm_block[19]=L[13];
inverse_perm_block[20]=R[21];
inverse_perm_block[21]=L[21];
inverse_perm_block[22]=R[29];
inverse_perm_block[23]=L[29];
inverse_perm_block[24]=R[4];
inverse_perm_block[25]=L[4];
inverse_perm_block[26]=R[12];
inverse_perm_block[27]=L[12];
inverse_perm_block[28]=R[20];
inverse_perm_block[29]=L[20];
inverse_perm_block[30]=R[28];
inverse_perm_block[31]=L[28];
inverse_perm_block[32]=R[3];
inverse_perm_block[33]=L[3];
inverse_perm_block[34]=R[11];
inverse_perm_block[35]=L[11];
inverse_perm_block[36]=R[19];
inverse_perm_block[37]=L[19];
inverse_perm_block[38]=R[27];
inverse_perm_block[39]=L[27];
inverse_perm_block[40]=R[2];
inverse_perm_block[41]=L[2];
inverse_perm_block[42]=R[10];
inverse_perm_block[43]=L[10];
inverse_perm_block[44]=R[18];
inverse_perm_block[45]=L[18];
inverse_perm_block[46]=R[26];
inverse_perm_block[47]=L[26];
inverse_perm_block[48]=R[1];
inverse_perm_block[49]=L[1];
inverse_perm_block[50]=R[9];
inverse_perm_block[51]=L[9];
inverse_perm_block[52]=R[17];
inverse_perm_block[53]=L[17];
inverse_perm_block[54]=R[25];
inverse_perm_block[55]=L[25];
inverse_perm_block[56]=R[0];
inverse_perm_block[57]=L[0];
inverse_perm_block[58]=R[8];
inverse_perm_block[59]=L[8];
inverse_perm_block[60]=R[16];
inverse_perm_block[61]=L[16];
inverse_perm_block[62]=R[24];
inverse_perm_block[63]=L[24];

}



void permutation(char bruto_expansion[] ,char nose[] ){
nose[0]=bruto_expansion[15];
nose[1]=bruto_expansion[6];
nose[2]=bruto_expansion[19];
nose[3]=bruto_expansion[20];
nose[4]=bruto_expansion[28];
nose[5]=bruto_expansion[11];
nose[6]=bruto_expansion[27];
nose[7]=bruto_expansion[16];
nose[8]=bruto_expansion[0];
nose[9]=bruto_expansion[14];
nose[10]=bruto_expansion[22];
nose[11]=bruto_expansion[25];
nose[12]=bruto_expansion[4];
nose[13]=bruto_expansion[17];
nose[14]=bruto_expansion[30];
nose[15]=bruto_expansion[9];
nose[16]=bruto_expansion[1];
nose[17]=bruto_expansion[7];
nose[18]=bruto_expansion[23];
nose[19]=bruto_expansion[13];
nose[20]=bruto_expansion[31];
nose[21]=bruto_expansion[26];
nose[22]=bruto_expansion[2];
nose[23]=bruto_expansion[8];
nose[24]=bruto_expansion[18];
nose[25]=bruto_expansion[12];
nose[26]=bruto_expansion[29];
nose[27]=bruto_expansion[5];
nose[28]=bruto_expansion[21];
nose[29]=bruto_expansion[10];
nose[30]=bruto_expansion[3];
nose[31]=bruto_expansion[24];
}


void convertir_coordenadas(char coordenadas[],char outer_bits[],char middle_bits[]){

int a=sizeof(outer_bits)/(sizeof(char));


for(int i=0;i<a;i++){
coordenadas[2*i]=(outer_bits[2*i]<<1) ^ outer_bits[2*i+1] ;
coordenadas[2*i+1]=(middle_bits[4*i]<<3)^(middle_bits[4*i+1]<<2)^(middle_bits[4*i+2]<<1) ^ middle_bits[4*i+3];
}

}

void tratamiento_s_box(char coordenadas[], char bruto[],int r){

switch (r){
case 0:
bruto[r]=S1[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 1:
bruto[r]=S2[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 2:
bruto[r]=S3[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 3:
bruto[r]=S4[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 4:
bruto[r]=S5[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 5:
bruto[r]=S6[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 6:
bruto[r]=S7[coordenadas[2*r]][coordenadas[2*r+1]];
break;
case 7:
bruto[r]=S8[coordenadas[2*r]][coordenadas[2*r+1]];
break;
defaul:
printf("ocurrio algo\n");
break;
}
}




void obtener_coordenadas(char outer_bits[],char middle_bits[], char expansion_r[]){

for (int i=0;i<8;i++){
outer_bits[2*i]=expansion_r[5*i+i];
outer_bits[2*i+1]=expansion_r[(i+1)*5+i];
middle_bits[4*i]=expansion_r[6*i+1];
middle_bits[4*i+1]=expansion_r[6*i+2];
middle_bits[4*i+2]=expansion_r[6*i+3];
middle_bits[4*i+3]=expansion_r[6*i+4];
}
}

void expansion(char R[], char expansion_r[]){
expansion_r[0]=R[31];
expansion_r[1]=R[0];
expansion_r[2]=R[1];
expansion_r[3]=R[2];
expansion_r[4]=R[3];
expansion_r[5]=R[4];
expansion_r[6]=R[3];
expansion_r[7]=R[4];
expansion_r[8]=R[5];
expansion_r[9]=R[6];
expansion_r[10]=R[7];
expansion_r[11]=R[8];
expansion_r[12]=R[7];
expansion_r[13]=R[8];
expansion_r[14]=R[9];
expansion_r[15]=R[10];
expansion_r[16]=R[11];
expansion_r[17]=R[12];
expansion_r[18]=R[11];
expansion_r[19]=R[12];
expansion_r[20]=R[13];
expansion_r[21]=R[14];
expansion_r[22]=R[15];
expansion_r[23]=R[16];
expansion_r[24]=R[15];
expansion_r[25]=R[16];
expansion_r[26]=R[17];
expansion_r[27]=R[18];
expansion_r[28]=R[19];
expansion_r[29]=R[20];
expansion_r[30]=R[19];
expansion_r[31]=R[20];
expansion_r[32]=R[21];
expansion_r[33]=R[22];
expansion_r[34]=R[23];
expansion_r[35]=R[24];
expansion_r[36]=R[23];
expansion_r[37]=R[24];
expansion_r[38]=R[25];
expansion_r[39]=R[26];
expansion_r[40]=R[27];
expansion_r[41]=R[28];
expansion_r[42]=R[27];
expansion_r[43]=R[28];
expansion_r[44]=R[29];
expansion_r[45]=R[30];
expansion_r[46]=R[31];
expansion_r[47]=R[0];
}

void extraer_R_L(char initial_perm_block[], char R[], char L[]){

for (int i=0;i<32;i++){
L[i]=initial_perm_block[i];
R[i]=initial_perm_block[32+i];
}

}


void initial_permutation_block(char initial_perm_block[],char vaciado_block[]){

initial_perm_block[0]=vaciado_block[57];
initial_perm_block[1]=vaciado_block[49];
initial_perm_block[2]=vaciado_block[41];
initial_perm_block[3]=vaciado_block[33];
initial_perm_block[4]=vaciado_block[25];
initial_perm_block[5]=vaciado_block[17];
initial_perm_block[6]=vaciado_block[9];
initial_perm_block[7]=vaciado_block[1];
initial_perm_block[8]=vaciado_block[59];
initial_perm_block[9]=vaciado_block[51];
initial_perm_block[10]=vaciado_block[43];
initial_perm_block[11]=vaciado_block[35];
initial_perm_block[12]=vaciado_block[27];
initial_perm_block[13]=vaciado_block[19];
initial_perm_block[14]=vaciado_block[11];
initial_perm_block[15]=vaciado_block[3];
initial_perm_block[16]=vaciado_block[61];
initial_perm_block[17]=vaciado_block[53];
initial_perm_block[18]=vaciado_block[45];
initial_perm_block[19]=vaciado_block[37];
initial_perm_block[20]=vaciado_block[29];
initial_perm_block[21]=vaciado_block[21];
initial_perm_block[22]=vaciado_block[13];
initial_perm_block[23]=vaciado_block[5];
initial_perm_block[24]=vaciado_block[63];
initial_perm_block[25]=vaciado_block[55];
initial_perm_block[26]=vaciado_block[47];
initial_perm_block[27]=vaciado_block[39];
initial_perm_block[28]=vaciado_block[31];
initial_perm_block[29]=vaciado_block[23];
initial_perm_block[30]=vaciado_block[15];
initial_perm_block[31]=vaciado_block[7];
initial_perm_block[32]=vaciado_block[56];
initial_perm_block[33]=vaciado_block[48];
initial_perm_block[34]=vaciado_block[40];
initial_perm_block[35]=vaciado_block[32];
initial_perm_block[36]=vaciado_block[24];
initial_perm_block[37]=vaciado_block[16];
initial_perm_block[38]=vaciado_block[8];
initial_perm_block[39]=vaciado_block[0];
initial_perm_block[40]=vaciado_block[58];
initial_perm_block[41]=vaciado_block[50];
initial_perm_block[42]=vaciado_block[42];
initial_perm_block[43]=vaciado_block[34];
initial_perm_block[44]=vaciado_block[26];
initial_perm_block[45]=vaciado_block[18];
initial_perm_block[46]=vaciado_block[10];
initial_perm_block[47]=vaciado_block[2];
initial_perm_block[48]=vaciado_block[60];
initial_perm_block[49]=vaciado_block[52];
initial_perm_block[50]=vaciado_block[44];
initial_perm_block[51]=vaciado_block[36];
initial_perm_block[52]=vaciado_block[28];
initial_perm_block[53]=vaciado_block[20];
initial_perm_block[54]=vaciado_block[12];
initial_perm_block[55]=vaciado_block[4];
initial_perm_block[56]=vaciado_block[62];
initial_perm_block[57]=vaciado_block[54];
initial_perm_block[58]=vaciado_block[46];
initial_perm_block[59]=vaciado_block[38];
initial_perm_block[60]=vaciado_block[30];
initial_perm_block[61]=vaciado_block[22];
initial_perm_block[62]=vaciado_block[14];
initial_perm_block[63]=vaciado_block[6];
}

void PC2(char PermCh2[],char D[],char C[]){
PermCh2[0]=C[13];
PermCh2[1]=C[16];
PermCh2[2]=C[10];
PermCh2[3]=C[23];
PermCh2[4]=C[0];
PermCh2[5]=C[4];
PermCh2[6]=C[2];
PermCh2[7]=C[27];
PermCh2[8]=C[14];
PermCh2[9]=C[5];
PermCh2[10]=C[20];
PermCh2[11]=C[9];
PermCh2[12]=C[22];
PermCh2[13]=C[18];
PermCh2[14]=C[11];
PermCh2[15]=C[3];
PermCh2[16]=C[25];
PermCh2[17]=C[7];
PermCh2[18]=C[15];
PermCh2[19]=C[6];
PermCh2[20]=C[26];
PermCh2[21]=C[19];
PermCh2[22]=C[12];
PermCh2[23]=C[1];
PermCh2[24]=D[12];
PermCh2[25]=D[23];
PermCh2[26]=D[2];
PermCh2[27]=D[8];
PermCh2[28]=D[18];
PermCh2[29]=D[26];
PermCh2[30]=D[1];
PermCh2[31]=D[11];
PermCh2[32]=D[22];
PermCh2[33]=D[16];
PermCh2[34]=D[4];
PermCh2[35]=D[19];
PermCh2[36]=D[15];
PermCh2[37]=D[20];
PermCh2[38]=D[10];
PermCh2[39]=D[27];
PermCh2[40]=D[5];
PermCh2[41]=D[24];
PermCh2[42]=D[17];
PermCh2[43]=D[13];
PermCh2[44]=D[21];
PermCh2[45]=D[7];
PermCh2[46]=D[0];
PermCh2[47]=D[3];
}

void recorrer(char C[],char D[],int r){
int numero;

char tempC1;
char tempD1;
char tempC2;
char tempD2;

if (r==3 || r==4 || r==5 || r==6 || r==7 || r==8 || r==10 || r==11 || r==12 || r==13 || r==14 || r==15){ 
numero=2;
}
else
{
numero=1;
}




if (numero==1){
tempC1=C[0];
tempD1=D[0];

for(int i=numero;i<28;i++){
C[i-numero]=C[i];
D[i-numero]=D[i];
}
C[27]=tempC1;
D[27]=tempD1;

}

else{
tempC1=C[0];
tempD1=D[0];
tempC2=C[1];
tempD2=D[1];

for(int i=numero;i<28;i++){
C[i-numero]=C[i];
D[i-numero]=D[i];
}
C[26]=tempC1;
D[26]=tempD1;
C[27]=tempC2;
D[27]=tempD2;

}


}


void initial_permutation_key(char initial_perm_key[8][7],char matrix[][8]){

initial_perm_key[0][0]=matrix[7][0];
initial_perm_key[0][1]=matrix[6][0];
initial_perm_key[0][2]=matrix[5][0];
initial_perm_key[0][3]=matrix[4][0];
initial_perm_key[0][4]=matrix[3][0];
initial_perm_key[0][5]=matrix[2][0];
initial_perm_key[0][6]=matrix[1][0];
initial_perm_key[1][0]=matrix[0][0];
initial_perm_key[1][1]=matrix[7][1];
initial_perm_key[1][2]=matrix[6][1];
initial_perm_key[1][3]=matrix[5][1];
initial_perm_key[1][4]=matrix[4][1];
initial_perm_key[1][5]=matrix[3][1];
initial_perm_key[1][6]=matrix[2][1];
initial_perm_key[2][0]=matrix[1][1];
initial_perm_key[2][1]=matrix[0][1];
initial_perm_key[2][2]=matrix[7][2];
initial_perm_key[2][3]=matrix[6][2];
initial_perm_key[2][4]=matrix[5][2];
initial_perm_key[2][5]=matrix[4][2];
initial_perm_key[2][6]=matrix[3][2];
initial_perm_key[3][0]=matrix[2][2];
initial_perm_key[3][1]=matrix[1][2];
initial_perm_key[3][2]=matrix[0][2];
initial_perm_key[3][3]=matrix[7][3];
initial_perm_key[3][4]=matrix[6][3];
initial_perm_key[3][5]=matrix[5][3];
initial_perm_key[3][6]=matrix[4][3];
initial_perm_key[4][0]=matrix[7][6];
initial_perm_key[4][1]=matrix[6][6];
initial_perm_key[4][2]=matrix[5][6];
initial_perm_key[4][3]=matrix[4][6];
initial_perm_key[4][4]=matrix[3][6];
initial_perm_key[4][5]=matrix[2][6];
initial_perm_key[4][6]=matrix[1][6];
initial_perm_key[5][0]=matrix[0][6];
initial_perm_key[5][1]=matrix[7][5];
initial_perm_key[5][2]=matrix[6][5];
initial_perm_key[5][3]=matrix[5][5];
initial_perm_key[5][4]=matrix[4][5];
initial_perm_key[5][5]=matrix[3][5];
initial_perm_key[5][6]=matrix[2][5];
initial_perm_key[6][0]=matrix[1][5];
initial_perm_key[6][1]=matrix[0][5];
initial_perm_key[6][2]=matrix[7][4];
initial_perm_key[6][3]=matrix[6][4];
initial_perm_key[6][4]=matrix[5][4];
initial_perm_key[6][5]=matrix[4][4];
initial_perm_key[6][6]=matrix[3][4];
initial_perm_key[7][0]=matrix[2][4];
initial_perm_key[7][1]=matrix[1][4];
initial_perm_key[7][2]=matrix[0][4];
initial_perm_key[7][3]=matrix[3][3];
initial_perm_key[7][4]=matrix[2][3];
initial_perm_key[7][5]=matrix[1][3];
initial_perm_key[7][6]=matrix[0][3];

}

void extraer(char initial_perm_key[8][7],char C[],char D[]){
int t=0;

for (int i=0;i<28;i++){
t=ceil(i/7);


C[i]=initial_perm_key[t][i%7];
D[i]=initial_perm_key[4+t][i%7];
}

}


void preparar_matriz_key(char matrix[][8],char vaciado_llave[]){
int i=0;

for (int j=0;j<64;j++){
if (j%8==0 && j>0){
i=i+1;
matrix[i][0]=vaciado_llave[j];
}
else
matrix[i][j%8]=vaciado_llave[j];

}

}

void preparacion1(char digitos[], char digitos1[]){

int a=strlen(digitos);

for (int i=0;i<a;i++){
	for (int j=0;j<a;j++){
		if (entrada[i]==digitos[j]){
		digitos1[i]=j;
		}
		digitos1[i]=digitos1[i];
	}
}


printf("\n");

}

void preparacion_llave(char digitos[], char digitos1[]){

int a=strlen(digitos);

for (int i=0;i<a;i++){
	for (int j=0;j<a;j++){
		if (llave[i]==digitos[j]){
		digitos1[i]=j;
		}
		digitos1[i]=digitos1[i];
	}
}



printf("\n");

}

void llenado(char digitos1[], char vaciado[]){

int a=strlen(entrada);
int j=0;
char l=1;

for (int i=0;i<a;i++){

	for (int k=0;k<4;k++){
		vaciado[4*i+k]=l & digitos1[i]>>(3-k);
	}
}


}


void llenado_llave(char digitos2[],char vaciado_llave[]){

int a=strlen(llave);
int j=0;
char l=1;

for (int i=0;i<a;i++){

	for (int k=0;k<4;k++){
		vaciado_llave[4*i+k]=l & digitos2[i]>>(3-k);
	}

}

}


int main(){

char digitos1[16];
char digitos2[16];
char vaciado_block[64];
char vaciado_llave[64];
char subkey_temp[56];
char initial_perm_key[8][7];
char C[28];
char D[28];
char subkey[48];
char L[32];
char R[32];
char Ltemp[32];
char expansion_r[48];
char initial_perm_block[64];
char inverse_perm_block[64];
char outer_bits[16];
char middle_bits[32];
char coordenadas[16];
char bruto[16];
char bruto_bits[32];
char permutation_bruto_bits[32];
int resultado[16];

printf("DES encription T_T ¬¬ \n");
printf("give me the block to encript\n");
scanf("%s",entrada);


preparacion1(digitos,digitos1);
llenado(digitos1,vaciado_block);

printf("gime the key \n");
scanf("%s",llave);

preparacion_llave(digitos,digitos2);
llenado_llave(digitos2,vaciado_llave);
preparar_matriz_key(matrix,vaciado_llave);
initial_permutation_key(initial_perm_key,matrix);
extraer(initial_perm_key,C,D);
initial_permutation_block(initial_perm_block,vaciado_block);
extraer_R_L(initial_perm_block,R,L);

for (int i=0;i<32;i++){
Ltemp[i]=L[i];
L[i]=R[i];
}


for(int i=1;i<=16;i++){

expansion(R,expansion_r);
recorrer(C,D,i);
PC2(subkey,D,C);


for (int j=0;j<48;j++){
expansion_r[j]=expansion_r[j]^subkey[j];
}

obtener_coordenadas(outer_bits,middle_bits, expansion_r);
convertir_coordenadas(coordenadas,outer_bits,middle_bits);

for(int i=0;i<=7;i++){
tratamiento_s_box(coordenadas,bruto, i);
}

llenado(bruto, bruto_bits);
permutation(bruto_bits ,permutation_bruto_bits);

for(int j=0;j<32;j++){
R[j]=permutation_bruto_bits[j]^Ltemp[j];
}



for (int q=0;q<32;q++){
Ltemp[q]=L[q];
L[q]=R[q];
}


}

inverse_permutation(inverse_perm_block,Ltemp,R );
convertir_resultado(resultado,inverse_perm_block);

printf("la encriptacion es: \n");
for(int h=0;h<16;h++){
printf("%x",resultado[h]);
}

printf("\n");

for(int k=0;k<64;k++){
printf("%d",inverse_perm_block[k]);
}

printf("\n");
return 0;
}