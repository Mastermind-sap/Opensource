#include<stdio.h>

//function to perform linear search
void linear_search(int arr[], int arr_size, int num){
    int flag = 0;
    for(int i=0; i<arr_size; i++){
        if(arr[i] == num){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("The given number %d is present at the positions : ",num);
        for(int i=0; i<arr_size; i++){
            if(arr[i] == num){
                printf("%d\t",i+1);
            }
        }
    }
    else{
        printf("The given number %d is not present in the list of numbers!",num);
    }
}


int main(){
    int n; //size of the array
    int x; //number to be found
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the number which is to be searched : ");
    scanf("%d",&x);

    int arr[n];
    //list of numbers given by the users will be stored in arr

    printf("Enter the elements in the array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    linear_search(arr,n,x); // performing linear search

    return 0;
}