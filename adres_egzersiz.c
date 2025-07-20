//
//  main.c
//  adresegzersiz
//
//  Created by Ali Emre on 20.07.2025.
//

#include <stdio.h>
#include <string.h>
char sentence [100];
int common=0;

char sentence2[100];


int commonwords(char fwords[],char swords[]){
    for(int i=0;i<strlen(fwords);i++){
        for (int j=0; j<strlen(swords); j++) {
            if(fwords[i]==swords[j]){
                common++;
                break;
            }
        }
        
    }
    
    
    
    return common;
}

void seperatedofwords(char sentence [100]){
    char first[100];
    char second[100];
    int i=0,j=0;
    
    while (sentence[i]!=' ') {
        first[i]=sentence[i];
        i++;
    }
    first[i++]='\0';
    
    
    while (i<strlen(sentence)) {
        second[j++]=sentence[i++];
        
        
        
    }
    second[j]='\0';
    printf("first word %s\n",first);
    printf("second word %s\n",second);
    printf("commonwords %d\n\n",commonwords(first, second));
    
    
    
    
}
void resultofpal(char finalsentence[] ,int truorfalse ){
    if(truorfalse==1)
        printf("%s is palindrom\n",finalsentence);
    else
        printf("%s is  not palindrom\n",finalsentence);
    
}

void ispalindrom(char sentence[] ){
    int temp=1;
    int i=0,j=strlen(sentence)-1;
    while (i<strlen(sentence)/2-1) {
        if(sentence[i++]!=sentence[j--]){
            temp=0;
        }
    }
    resultofpal(sentence, temp);
    
}

void emptydel(char sentence2[]){
    char newsentence[strlen(sentence2)];
    int i=0,j=0;
    while (i<strlen(sentence2)) {
        if(sentence2[i]==' '){
            i++;
        }else{
            newsentence[j++]=sentence2[i++];
            
            
        }
        
        
        
        
    }
    newsentence[j]='\0';
    printf("no empthy type %s \n",newsentence);
    ispalindrom(newsentence);
    
}
void lenofsentence(char sentence [100]){
    
    printf("%d ->length \n",strlen(sentence));

    seperatedofwords(sentence);
}

void input(char sentence2[]){
    
    
    fgets(sentence2, 100, stdin);
    sentence2[strcspn(sentence2, "\n")] = '\0';
    printf("%s's length is %d \n",sentence2,strlen(sentence2));
    emptydel(sentence2);
}



int main(int argc, const char * argv[]) {
    printf( "enter a sentence\n");
    fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    lenofsentence(sentence);
    printf("second practice \nplease enter a sentence \n");
    input(sentence2);
    
    
    return 0;
}
