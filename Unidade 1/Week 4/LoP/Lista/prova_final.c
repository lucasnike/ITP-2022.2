#include <stdio.h>

float menor_nota(float *notas) {
  float menor = 0;

  for (int i = 0; i < sizeof(notas) - 1; i++) 
  {
   
    if (notas[i] > notas[i + 1]) 
    {
      menor = notas[i + 1];
    }
  }

  return menor;
}

float calcular_prova_final(float nota1, float nota2, float nota3) {
  float media = (nota1 + nota2 + nota3) / 3;
  float notas[] = {nota1, nota2, nota3};

  float menor = menor_nota(notas);
  float nota_minima = 0;

  if (nota1 >= 3 && nota2 >= 3 && nota3 >= 3) 
  {
    if (media >= 5) 
    {
      return -1;
    }
    else 
    {
      nota_minima = 15 - ((nota1 + nota2 + nota3) - menor);

      if (nota_minima > 10)
      {
         return -1;
      }
      
      return nota_minima + 3;
    }
  }
  else 
  {
    if (media >= 21) 
    {
      return -1;
    } 
    else 
    {
      nota_minima = 21 - ((nota1 + nota2 + nota3) - menor);

      if (nota_minima > 10)
      {
         return -1;
      }

      if (nota_minima + 7 > 10)
      {
         return -1;
      }
      
      
      return nota_minima + 7;
    }
  }
}

int main() {
  float nota1, nota2, nota3;

  scanf("%f %f %f", &nota1, &nota2, &nota3);
  float notaNecessaria = calcular_prova_final(nota1, nota2, nota3);

  if (notaNecessaria == -1) 
  {
    printf("Nao faz prova final");
  } 
  else 
  {
    printf("Final\n%.1f", notaNecessaria);
  }

  return 0;
}