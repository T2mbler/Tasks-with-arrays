#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    
    int length=0; int counter1=0; int counter2=0;
    
    printf("Enter array's length ");
    scanf("%i", &length);

    int arr[length];
    
    for(int i=0; i<length; ++i){
        arr[i]=rand()%length;
    }

    for(int i=0; i<length; ++i){
        if(arr[i]%arr[0]==0){
            counter1++;
        } else if(arr[i]%arr[length-1]==0){
            counter2++;
        }
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