#include<stdio.h>
float mediapond(float nota1, float nota2)
{
    float media;
    media = nota1 * 0.4 + nota2 * 0.6;
    return media;
}

char conceito(float media)
{
    char conc;
    if (media <= 4.9){
      conc = 'D';
    }
    else {
      if (media <= 6.9) {
        conc = 'C';
      }
      else {
        if (media <= 8.9 ){
            conc ='B';
        }
        else {
            conc = 'A';
        }
      }
    }
  return conc;
}

int main() {
  int i;
  float nota1, nota2, med;
  char conce;

  for (i=0; i < 10; i++) {
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    med = mediapond(nota1, nota2);
    conce = conceito(med);
    printf("\n Média = %f \nConceito final = %c", med, conce);
  }
}