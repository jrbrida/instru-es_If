#include <stdio.h>

int main(void) {
  //Neste exercício praticamos as instruções if, else e for aninhados, com um loop de incremento de números e decremento de números.
   int contador; //variável de controle do loop
   int num1 = 0;//variáveis
   int num2 = 0;
   printf("digite qualquer NÚMERO!: \n");//didigtando para usuário
   printf("\t\t\t\t\t\t>>> ");
   scanf("%d", &num1);//lendo a informação do usuário
   printf("digite qualquer NÚMERO!: \n");
   printf("\t\t\t\t\t\t>>> ");
   scanf("%d", &num2);
   // nosso looping
if(num1 != num2){
  for(contador = num1; contador <= num2; contador++)//incremento
  {
    printf("%d ", contador);
  }if(num2 < num1){
      for(contador = num1; contador >= num2; contador--)//decremento
      printf("%d ", contador);

    }
 
  
}else{
  if(num1 == num2){

 printf("Os valores não corresponde para o calculo");
  }
}
 
  return 0;
}