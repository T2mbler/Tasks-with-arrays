#include <iostream>

int main(){

    int length=0; int num=30; int dif=3;
    scanf("%i", &length);

    
    int arr[length];
    
    for(int i=0; i<length; ++i){
        if(i==0){
            arr[i]=num;
        } else{
            arr[i]=arr[i-1]-dif;
        }
    }

    printf("\n[");
    for(int i=0; i<length; ++i){
        printf("%i ", arr[i]);
    }
    printf("]\n");

    return 0;
}