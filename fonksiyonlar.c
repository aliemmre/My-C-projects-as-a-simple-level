//
//  main.c
//  fonskiyonlar
//
//  Created by Ali Emre on 21.06.2025.
//

#include <stdio.h>

void bosikizucgen(int heig, int sayı, int i) {

    //   1
    //  1 1
    // 1   1
    //1111111
    if (i <= heig) {
        for (int j = 1; j <= heig - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 | k == 2 * i - 1 | i == heig) {

                printf("%d", sayı);
            } else
                printf(" ");
        }
        printf("\n");

        bosikizucgen(heig, sayı, i + 1);
    }
}

void bosucgen(int heig,int sayı,int i){
   // 1
   // 11
   // 1 1
   // 1  1
   // 11111
   
    if(i>heig){
        
    }else{
        for (int j=1; j<=i; j++) {
            if(j== 1 | j==i | i==heig)
            {
                
                printf("%d",sayı);
            }else
                printf(" ");
        }
        printf("\n");
        bosucgen(heig ,  sayı, i+1);
        
    }
    
    
    
    
    
}

void ucgen(int heig,int sayı,int i){
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    if(i>heig){
        
    }else{
        for (int j=1; j<=i; j++) {
            
            printf("%-4d ",sayı+=0);
        }
        printf("\n");
        ucgen(heig ,  sayı, i+1);
        
    }
    
}

void ikizucgen(int heig,int sayı ,int i){
    
    //  1
    // 111
    //11111
    
    if (i<=heig) {
        for (int j=1; j<=heig-i; j++) {
            printf(" ");
        }
        for (int k=1; k<=2*i-1; k++) {
            printf("%d",sayı);
        }
        printf("\n");
        
        
        
        
        
        ikizucgen( heig, sayı, i+1);
    }
    
    
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    //

    int height;
    int startnumber;
    printf("please enter a heigth of triangle\n");
    scanf("%d",&height);
    printf("please enter a start number of triangle\n");
    scanf("%d",&startnumber);
    printf("\n");
    ucgen(height,startnumber,1);
    printf("\n");
    ikizucgen(height,startnumber,1);
    printf("\n");
    bosucgen(height,startnumber,1);
    printf("\n");
    bosikizucgen(height,startnumber,1);
    
}


