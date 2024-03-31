#include <iostream>

int main(){

    int length=0;
    scanf("%i", &length);
    int arr[length];
    
    for(int i=0; i<length; ++i){
        if(i%2==0){
            arr[i]=0;
        } else{
            arr[i]=1;
        }
    }

    printf("\n[");
    for(int i=0; i<length; ++i){
        printf("%i ", arr[i]);
    }
    printf("]\n");

    return 0;
}