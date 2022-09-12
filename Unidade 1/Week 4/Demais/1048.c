#include <stdio.h>
#include <locale.h>

float calcularSalario(float salario){

   if (salario >= 0 && salario <= 400)
   {
      salario += salario * 0.15;
   } 
   else if(salario > 400 && salario <= 800) 
   {
      salario += salario * 0.12;
   }
   else if(salario > 800 && salario <= 1200) 
   {
      salario += salario * 0.1;
   }
   else if(salario > 1200 && salario <= 2000) 
   {
      salario += salario * 0.07;
   }
   else
   {
      salario += salario * 0.04;
   }

   return salario;
}

int main(){
   setlocale(LC_ALL, "Portuguese");
   float salario = 0;

   printf("Digite o valor do seu salário: ");
   scanf("%f", &salario);
   
   salario = calcularSalario(salario);

   printf("O seu salário com o aumento ficou = R$ %.2f", salario);

   return 0;
}