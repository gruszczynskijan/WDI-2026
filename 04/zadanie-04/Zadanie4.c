#include<stdio.h>

void anagram(char wyraz_1[],char wyraz_2[]){
    int anagram[256]={};
    for (int i=0;wyraz_1[i]!='\0';i++){
        anagram[(unsigned char)wyraz_1[i]]++;
        anagram[(unsigned char)wyraz_2[i]]--;
    }
    for(int i=0;i<256;i++){
        if (anagram[i]!=0){
            printf("\nTe wyrazy nie sa anagramami\n");
            return;
        }
    }
    printf("\nTe wyrazy sa anagramami\n");
}

int main(){
    char wyraz_1[100];
    char wyraz_2[100];
    int wyraz_1_length=0;
    int wyraz_2_length=0;
    printf("Podaj pierwszy wyraz: ");
    scanf("%99s",wyraz_1);
    printf("Podaj drugi wyraz: ");
    scanf("%99s",wyraz_2);
    for(int i=0;wyraz_1[i]!='\0';i++){
        wyraz_1_length+=1;
    }
    for(int i=0;wyraz_2[i]!='\0';i++){
        wyraz_2_length+=1;
    }
    if(wyraz_1_length!=wyraz_2_length){
        printf("\nTe wyrazy nie sa anagramami\n");
    }
    else{
        anagram(wyraz_1,wyraz_2);
    }
    return 0;
}