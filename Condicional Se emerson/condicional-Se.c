#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeiraNota, segundaNota, media ;
    
    printf("Para Saber a Media \n");
    
    printf("Insira a primeira nota :\n");
    scanf("%f",&primeiraNota);
    
    printf("Insira a segunda nota :\n");
    scanf("%f",&segundaNota);
    
    media = (primeiraNota + segundaNota) / 2 ;

  
    
    printf("%.2f",media);
    if(media >= 7) {
        printf("Aprovado.");
    } else{
        printf("Reprovado");
    }
    
}

