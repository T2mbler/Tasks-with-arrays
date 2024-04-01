#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    
    int length=0; int counter=0;
    
    printf("Enter array's length ");
    scanf("%i", &length);

    int arr[length];
    
    for(int i=0; i<length; ++i){
        arr[i]=rand()%length;
    }

    for(int i=0; i<length; ++i){
        if(arr[i]%2==0){
            counter++;
        }
    }

    printf("\n[");
    printf("%i",counter);
    printf("]\n");
    return 0;
}