#include <iostream>

int main(){

    int length=0;
    scanf("%i", &length);

    
    int arr[length];
    
    for(int i=0; i<length; ++i){
       arr[i]=i*i;
    }

    printf("\n[");
    for(int i=0; i<length; ++i){
        printf("%i ", arr[i]);
    }
    printf("]\n");

    return 0;
}