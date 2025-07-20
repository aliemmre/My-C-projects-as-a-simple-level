//
//  main.c
//  areaandbutterfly
//
//  Created by Ali Emre on 19.07.2025.
//

#include <stdio.h>
#include <math.h>
int height;
char chr;
int edge1,edge2,edge3;


void butterflyotherhalf(int height,char chr,int line){
    if (line<=height) {
        for (int j=0; j<height-line; j++) {
            printf("%c",chr);
        }
        for (int j=0; j<2*(line-height/2); j++) {
            printf(" ");
        }
        for (int j=0; j<height-line; j++) {
            printf("%c",chr);
        }
        
        
        
        printf("\n");
        butterflyotherhalf(height, chr, line+1);
        
    }
}
void butterflyhalf(int height,char chr,int line){
    if (line<height/2) {
        for (int j=0; j<=line; j++) {
            printf("%c",chr);
        }
        for (int j=0; j<2*height/2-2*line-2; j++) {
            printf(" ");
        }
        for (int j=0; j<=line; j++) {
            printf("%c",chr);
        }
        
        
        
        
        
        
        
        
        printf("\n");
        butterflyhalf(height, chr, line+1);
    }else{
       
            butterflyotherhalf(height ,chr ,line  );
            
        }
}
double areoftriangle(int e1,int e2,int e3){
    double e12=pow(e1, 2);
    double e22=pow(e2, 2);
    double e32=pow(e3, 2);
    double total1=e12+e22-e32;
    double total2=2*e1*e2;
    double cosa=(double)(total1)/total2;
    double sina =sqrt(1 - cosa * cosa);
    double area =e1*e2*sina/2.0;
    //double cosa=(double)(e1sqr+e2sqr-e3sqr ) / (double)(2*e1*e2);
    //double sina=(double)(sqrt(pow(2*e1*e2)+pow(e1sqr+e2sqr-e3sqr)))/(double)(2*e1*e2);
    
    return area;
}
int main(int argc, const char * argv[]) {
 
    printf("please enter height(even number) wings of butterfly \n");
    scanf("%d",&height);
    printf("please enter character for pattern of wings \n");
    scanf(" %c",&chr);
    butterflyhalf(height, chr, 0);
    
    printf(" areas \n");
    printf("please enter first edge  of triangle \n");
    scanf("%d",&edge1);
    printf("please enter second edge  of triangle \n");
    scanf("%d",&edge2);
    printf("please enter third edge  of triangle \n");
    scanf("%d",&edge3);
    printf("area is %d \n",areoftriangle(edge1, edge2, edge3));
    
    
    return 0;
}
