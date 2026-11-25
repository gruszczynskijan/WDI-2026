#include<stdio.h>

void calkowita(char znaki[]){
    int wartosc=0;
    int znak=1;
    int i=0;

    if (znaki[0]=='-'){
        znak=-1;
        i=1;
    }
    else if(znaki[0]=='+'){
        i=1;
    }

    if (znaki[i]=='\0'||znaki[i]=='\n'){
        printf("Ten ciag znakow nie jest liczba calkowita\n");
        return;
    }
    for(;znaki[i]!='\0'&&znaki[i]!='\n';i++){
        if (znaki[i]<'0'||znaki[i]>'9'){
            printf("Ten ciag znakow nie jest liczba calkowita\n");
            return;
        }
        wartosc=(wartosc*10)+(znaki[i]-'0');
    }

    wartosc=wartosc*znak;
    printf("Ten ciag znakow jest liczba calkowita\n");
    printf("Wynik: %d",wartosc);
}

int main(){
    char znaki[100];
    printf("Podaj ciag znakow: ");
    fgets(znaki,sizeof(znaki),stdin);
    calkowita(znaki);
    return 0;
}