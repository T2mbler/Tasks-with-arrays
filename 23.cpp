#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    
    int length=0; int counter1=0; int counter2=1;
    
    printf("Enter array's length ");
    scanf("%i", &length);

    int arr[length];
    
    for(int i=0; i<length; ++i){
        arr[i]=rand()%length;
    }

    for(int i=0; i<length; ++i){
        counter1=counter1+arr[i];
    }

    for(int i=0; i<length; ++i){
        counter2=counter2*arr[i];
    }

    printf("\n[");
    printf("%i",counter1);
    printf("]\n");
    
    printf("\n[");
    printf("%i",counter2);
    printf("]\n");
    
    printf("\n[");
    for(int i=0; i<length; ++i){
        printf("%i ",arr[i]);
    }
    printf("]\n");
    return 0;
}