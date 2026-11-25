#include<stdio.h>

void szyfruj(int n){
    int k;
    char haslo[100];
    char szyfr[100];
    printf("Podaj haslo do zaszyfrowania: ");
    fgets(haslo,sizeof(haslo),stdin);

    for(k=0;haslo[k]!='\0';k++){
        szyfr[k]=haslo[k];
    }
    szyfr[k]='\0';

    for(int i=0;szyfr[i]!='\n'&&szyfr[i]!='\0';i++){
        if(szyfr[i]>='a'&&szyfr[i]<='z'){
            szyfr[i]=(szyfr[i]-'a'+(n%26)+26)%26+'a';
        }
        else if(szyfr[i]>='A'&&szyfr[i]<='Z'){
            szyfr[i]=(szyfr[i]-'A'+(n%26)+26)%26+'A';
        }
    } 
    printf("\nklucz: %d\nhaslo: %szaszyfrowane: %s\n",n,haslo,szyfr);
}

void deszyfruj(int n){
    int k;
    char haslo[100];
    char szyfr[100];
    printf("Podaj haslo do odszyfrowania: ");
    fgets(haslo,sizeof(haslo),stdin);

    for(k=0;haslo[k]!='\0';k++){
        szyfr[k]=haslo[k];
    }
    szyfr[k]='\0';

    for(int i=0;szyfr[i]!='\n'&&szyfr[i]!='\0';i++){
        if(szyfr[i]>='a'&&szyfr[i]<='z'){
            szyfr[i]=(szyfr[i]-'a'-(n%26)+26)%26+'a';
        }
        else if(szyfr[i]>='A'&&szyfr[i]<='Z'){
            szyfr[i]=(szyfr[i]-'A'-(n%26)+26)%26+'A';
        }
    } 
    printf("\nklucz: %d\nzaszyfrowane: %shaslo: %s\n",n,haslo,szyfr);
}

int main(){
    char znak[10];
    int n=3;
    do{
    printf("1 - szyfruj\n");
    printf("2 - deszyfruj\n");
    printf("3 - zmien klucz\n");
    printf("4 - zakoncz\n\n");
    printf("Wybierz opcje: ");
    fgets(znak,sizeof(znak),stdin);
        switch (znak[0])
        {
        case '1':
            szyfruj(n);
            break;
        case '2':
            deszyfruj(n);
            break;
        case '3':
            printf("Podaj nowy klucz: ");
            fgets(znak,sizeof(znak),stdin);
            sscanf(znak, "%d", &n);
            break;
        case '4':
            return 0;
        default:
            break;
        }
    }
    while(1);
}