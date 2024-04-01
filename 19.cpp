#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    
    int length=0; int num=0;
    bool flag = false;
    
    printf("Enter array's length ");
    scanf("%i", &length);
    printf("Enter number which u would like find (0<=num<=length) ");
    scanf("%i", &num);
    
    while(num<0 || num>length){
        printf("Enter number again ");
        scanf("%i", &num);
    } //checking for the correctness of the entered number

    int arr[length];
    
    for(int i=0; i<length; ++i){
        arr[i]=rand()%length;
    }

    for(int i=0; i<length; ++i){
        if(arr[i]==num){
            flag=true;
        }
    }

    if(flag==true){
        printf("array contains ur number");
    } else{
        printf("array doesn't contain ur number");
    }

    printf("\n[");
    for(int i=0; i<length; ++i){
        printf("%i ", arr[i]);
    }
    printf("]\n");
    return 0;
}