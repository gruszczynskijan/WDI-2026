#include<stdio.h>

int partition(int tablica[],int left,int right){
    int a=tablica[right];
    int j=left-1;
        for(int i=left;i<right;i++){
            if(tablica[i]<=a){
                j++;
                int temp=tablica[j];
                tablica[j]=tablica[i]; 
                tablica[i]=temp;
            }
        }
        int temp=tablica[j+1];
        tablica[j+1]=tablica[right];
        tablica[right]=temp;
        return j+1;
}

void quick_sort(int tablica[],int left,int right){
    if(left<right){
        int pi=partition(tablica,left,right);
        quick_sort(tablica,left,pi-1);
        quick_sort(tablica,pi+1,right);
    }
}

int main(){
    int tablica[10];
    for (int i=0;i<10;i++){
        printf("Podaj %d element tablicy: ",i+1);
        scanf("%d",&tablica[i]);
    }
    quick_sort(tablica,0,9);
    printf("Posortowana tablica: ");
    for(int i=0;i<10;i++){
        printf("%d ",tablica[i]);
    }
    return 0;
}