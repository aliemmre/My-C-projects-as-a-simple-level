//
//  main.c
//  fibonacci
//
//  Created by Ali Emre on 17.07.2025.
//

#include <stdio.h>

int elemansayısı;
int findelement;


int recurfibo( int element){
    if(element==0){
        return 0;
    }else if (element==1){
        return 1;
    }else return recurfibo(element-1)+recurfibo(element-2);
    
        
    
    
}
void printarr(int arr[],int i){
    if(i<elemansayısı){
        printf(" %d ",arr[i]);
        printarr(arr, i+1);
    }
        
    
    
}
void fibodizi(int arr[] ,int len,int i ){
    arr[0]=0; arr[1]=1;
    if(i<len){
        arr[i]=arr[i-2]+arr[i-1];
        fibodizi(arr, len, i+1);
        
    }else
        printarr(arr, 0);
}
void fibomanuel(int one ,int two,int total,int len,int i){
    
    
    if(i<len){
        printf(" %d ",one);
        total=one+two;
        //one=two;
        //two=total;
        fibomanuel(two, total, total, len, i+1);
    }
    
    
}

int main(int argc, const char * argv[]) {
    printf( "please enter amount of element");
   

    scanf("%d",&elemansayısı);
    int emptyarr[elemansayısı];
    printf("fibo dizi\n ");
    fibodizi(emptyarr, elemansayısı, 2);
    printf("\n ");
    printf("fibo manule\n ");
    fibomanuel(0, 1, 0, elemansayısı, 0);
    printf("\n ");
    printf("fibo recursiveenter a spesific number \n ");
    scanf("%d",&findelement);
    printf("find elemnt %d \n",recurfibo(findelement-1));
    return 0;
}
