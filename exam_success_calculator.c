#include <stdio.h>

int main()
{

    float vize ;
    float final;
    printf("Vize puanı girin:");
    scanf("%f",&vize);
 
    printf("final puanı girin:");
    scanf("%f",&final);
    
        float ortalama=(vize*40/100)+(final*60/100);
    if(ortalama<=60){
        
        printf("desten kaldınız");
    }else{
        printf("dersten geçtiniz");
    }
    
    
    return 0;
}