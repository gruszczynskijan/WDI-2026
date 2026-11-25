#include<stdio.h>
#include<ctype.h>

void imie_z_ctype(unsigned char imie[]){
    imie[0]=toupper(imie[0]);
    for (int i=1; imie[i]!='\0'; i++)
    {
        imie[i]=tolower(imie[i]);
    }
    printf("Imie_ctype: %s\n",imie);
}

void imie_ASCII(unsigned char imie[]){
    if(imie[0]>='a'&&imie[0]<='z'){
        imie[0]=imie[0]-32;
    }
    for(int i;imie[i]!='\0';i++){
        if (imie[i]>='A'&&imie[i]<='Z'){
            imie[i]=imie[i]+32;
        }
    }
    printf("Imie_ASCII: %s\n",imie);
}

int main (){
    unsigned char imie[30];
    printf("Podaj imie: ");
    scanf("%29s", imie);
    imie_z_ctype(imie);
    imie_ASCII(imie);
    return 0;
}