//
//  main.c
//  kelime sayısı
//
//  Created by Ali Emre on 14.07.2025.
//

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

int spaceAmount = 0;

void pramitwhile(char sentence []){
    int i=0;
    while (i<strlen(sentence)) {
        int j=0;
        while (j<=i) {
            printf("%c",sentence[j]);
            
            j++;
        }
        printf("\n");
        i++;
        
    }
    
    
}
void primait(char sentence[]) {
    for (int i = 0; i < strlen(sentence); i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", sentence[j]);
        }
        printf("\n");
    }
}

void altaltayazma(char sentence[]) {
    char target[spaceAmount + 1][100];
    int j = 0, k = 0;

    for (int i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            target[j][k] = '\0';
            j++;
            k = 0;
        } else {
            target[j][k++] = sentence[i];
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%s\n", target[i]);
    }
}

void kelimesayisi(char sentence[]) {
    spaceAmount = 0; // sıfırla
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ' ') {
            spaceAmount++;
        }
    }
    printf("words of amount: %d\n", spaceAmount + 1);
}

int main(int argc, const char * argv[]) {
    printf("please enter a sentence!\n");
    char sentence[100];
    fgets(sentence, 100, stdin);

    
    sentence[strcspn(sentence, "\n")] = '\0';
    
    
    
    printf("kelime sayısı\n \n");
    kelimesayisi(sentence);
    printf("cümledeki kelimelerin alt alta yazımı\n \n");
    altaltayazma(sentence);
    printf("cümlenin yarım piramit şeklinde olması\n \n");
    primait(sentence);
    printf("cümlenin yarım piramit while şeklinde olması\n \n");
    pramitwhile(sentence);

    return 0;
}

