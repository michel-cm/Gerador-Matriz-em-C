#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bibliotecaMatriz.h"

int main(){
	
	int matA[100][100],op,linhasa, colsa,linhasb,colsb,i,j,k1,k2;
	int matB[100][100];
	int matC[100][100];
	float temp;
	
	printf("__________  ATIVIDADE INTERDISCIPLINAR  __________\n\n\n");
	printf("----------  GERE 2 MATRIZES  ----------  \n"); 
			
			printf("\nDIMENSAO DA PRIMEIRA MATRIZ ( A )\n");
				printf("Linhas : ");
				scanf("%d:",&linhasa);
					printf("Colunas : ");
						scanf("%d:",&colsa);
					geraMatriz(matA,linhasa,colsa);
					
					printf("\nDIMENSAO DA SEGUNDA MATRIZ ( B )\n");
					printf("Linhas : ");
				scanf("%d:",&linhasb);
					printf("Colunas : ");
						scanf("%d:",&colsb);
					geraMatriz(matB,linhasb,colsb);
								
				system("cls");	
								
					printf("\n--- MATRIZES GERADAS ---\n\n");
					printf("MATRIZ A \n");
					mostraMatriz(matA,linhasa,colsa);
					printf("\nMATRIZ B \n");
					mostraMatriz(matB,linhasb,colsb);
						
				
				printf("\n Qual Operacao deseja fazer ? ");
				do {
				
				printf("\n\[ 1 ]  Soma ( + )\n[ 2 ]  Subtracao ( - ) \n[ 3 ]  Multiplicacao ( x )\n[ 4 ]  Mostrar as Matrizes A e B\n[ 0 ]  Limpar Tela\n\n");
				scanf("%d",&op);
				
			switch(op){
						
				case 1:
				
				if (linhasa == linhasb && colsa == colsb)
				{
					for(i = 0; i < linhasa; i++ ){
					for(j = 0; j < colsa; j++ ){
					matC[i][j] = matA[i][j] + matB[i][j] ;
				}
 			}
			
			printf("\n-------   MATRIZ SOMA   -------\n");	
			
				for(int k = 0; k < linhasb; k++ ){
					printf("\n");
				for(int l = 0; l < colsb; l++ ){
				printf("\t %d ", matC[k][l]);
				
				}
				}
  			}
		
	else	
			 {	
				system("cls");
				printf("MATRIZ INVALIDA !!!\n");
				printf("\nPara somar 2 matrizes , elas precisam ser Matrizes de mesma ordem !\n");
				printf("\nEXEMPLOS :\n\n");	
				printf("2x2 + 2x2\n");	
				printf("3x2 + 3x2\n");	
				printf("3x3 + 3x3\n");	
					printf("......");	
				
				
								}
									printf("\n--------------------------------");	
					break;
						
				case 2:
					if (linhasa == linhasb && colsa == colsb){
					
				for(i = 0; i < linhasa; i++ ){
				for(j = 0; j < colsa; j++ ){
					matC[i][j] = matA[i][j] - matB[i][j] ;
				}
 			}
			
			printf("\n-------   MATRIZ SUBTRACAO   -------\n");	
				for(int k = 0; k < linhasb; k++ ){
					printf("\n");
				for(int l = 0; l < colsb; l++ ){
				
				printf("\t %d ", matC[k][l]);
									
				}
				}
			}
			else
			{
				system("cls");
				printf("MATRIZ INVALIDA !!!\n");
				printf("\nPara Subtrair 2 matrizes , elas precisam ser Matrizes de mesma ordem !\n");
				printf("\nEXEMPLOS :\n\n");	
				printf("2x2 - 2x2\n");	
				printf("3x2 - 3x2\n");	
				printf("3x3 - 3x3\n");	
					printf("......");	
			
					printf("\n--------------------------------");	
				}
					break;
					
				case 3:
				if(colsa == linhasb){
						
						for(k1=0;k1<linhasa;k1++) 
							{
       					 for(k2=0;k2<colsb;k2++)
							 {
            					 temp=0.0;
           				 		 for(i=0;i<colsa;i++)
							 {
          							 temp=temp+matA[k1][i]*matB[i][k2];
           									 }
           							matC[k1][k2]=temp;
       							 }
							 }

   								 printf("\n");
    							
    				printf("\n-------   MATRIZ MULTIPLICACAO   -------\n");

   						 for(i=0;i<linhasa;i++) {
        				for(j=0;j<colsb;j++)
       					 {
           				 if(j!=(colsb-1))
           				 {
              			  printf("%d \t",matC[i][j]);
           				 }
            			else
           				 {
                		printf("%d \n",matC[i][j]);
           				 }
       				 }
   				 }
			
			}
			else
				{
				system("cls");
				printf("MATRIZ INVALIDA !!!\n");
				printf("\nPara Multiplicar 2 matrizes , o numero de colunas da Matriz A deve ser igual ao numero de linhas da Matriz B !\n");
				printf("\nEXEMPLOS :\n\n");	
				printf("2x3 - 3x2\n");	
				printf("3x2 - 2x2\n");	
				printf("3x3 - 3x3\n");	
					printf("......");	
				
				printf("\n--------------------------------");
				}
					break;
					
					case 0:
					system("cls");	
					printf("\n Qual Operacao deseja fazer ? ");						
					break;
										
					case 4:
					system("cls");
					printf("Matriz A \n");
					mostraMatriz(matA,linhasa,colsa);
					printf("\n--------------------\n");
					printf("Matriz B \n");
					mostraMatriz(matB,linhasb,colsb);	
					printf("\n--------------------\n");
					break;	
					
					
			default:
			printf("\nNumero invalido\n");
					
						}				
		
		
		}while(op=1);
		
						
return 0;
}
	
	
	
	
	


