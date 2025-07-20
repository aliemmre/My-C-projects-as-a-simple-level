//
//  main.c
//  baklavadilim
//
//  Created by Ali Emre on 17.07.2025.
//

#include <stdio.h>

int height;
char chr;
void baklavaotherside(int height,char chr,int line){
    if(line<height){
        
        for(int j=0;j<=line ;j++){
            printf(" ");
        }
        for (int k=0;k<(2*height-1-2*line)-2 ; k++) {
            printf("%c",chr);
        }
        
        printf("\n");
        baklavaotherside(height, chr, line+1);
        
    }
}
void baklava(int height,char chr,int line){
    if(line<height){
        
        for(int j=line;j<height-1 ;j++){
            printf(" ");
        }
            for (int k=0;k<2*line-1 ; k++) {
                printf("%c",chr);
            }
        
        printf("\n");
        baklava(height, chr, line+1);
        
    }
        
}
void yanucgen(int height,char chr,int line){
    if(line<height){
        
        for(int j=0;j<height  ;j++){
            if( line <=height/2 &&line-j>=0){
                printf("%c",chr);
            }else if(line>height/2 && line+j<height){
                printf("%c",chr);
            }
        }
        printf("\n");
        yanucgen(height, chr, line+1);
    }
    
}
int main(int argc, const char * argv[]) {
    
    printf("enter a heigth\n");
    scanf("%d",&height);
    printf("enter a charecter\n");
    scanf(" %c",&chr);
    
    //for (int i=0; i<9; i++) {
        
        
        baklava(height, chr, 0);
        
        baklavaotherside(height-1, chr, 0);
    
    yanucgen(height, chr, 0);
        return 0;
}
