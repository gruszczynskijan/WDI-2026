#include<stdio.h>

void wypisywanie(int liczba_liter[]){
    printf("\nZnaki: \n");
    for(int i=0;i<256;i++){
        if (liczba_liter[i]>0){
            printf("%c w ASCII:%d [%d raz(y)]\n",i,i,liczba_liter[i]);
        }
    } 
}

void liczenie(int liczba_liter[],char tekst[]){
    for(int i=0; tekst[i]!='\0'; i++){
        if(tekst[i]!='\n'){
            liczba_liter[(unsigned char)tekst[i]]++;
        }
    }
}

int main(){
    int liczba_liter[256]={0};
    char tekst[100];
    printf("Podaj ciag znakow: ");
    fgets(tekst,sizeof(tekst),stdin);
    liczenie(liczba_liter,tekst);
    wypisywanie(liczba_liter);

    return 0;
}