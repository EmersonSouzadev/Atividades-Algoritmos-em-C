#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void resultado(float media){
if (media>= 7){

    printf("%.1f Aprovado!",media);
}else if (media >= 5){
    printf("%.1f Recuperação!", media);
}else{
    printf("%.1f Reprovado", media);
}
}

int main (){
    setlocale(LC_ALL,"");

int n1, n2 ;
float media;

printf("insira um numero.");
scanf("%d",&n1);
printf("insira um numero.");
scanf("%d",&n2);


media = (n1 + n2) /2;
resultado(media);

}