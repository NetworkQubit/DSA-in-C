#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y  = temp;
}

void selectionsort(int a[], int n){
    int min;
    for (int i = 0; i < n - 1; i++){
        min = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min]){
                min = j;
            }
            
        }
        
        if (min != i){
            swap(&a[i], &a[min]);
        }
    }
}

void display(int a[], int n){
    for (int i =0; i <= n - 1; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int n;
    printf("The Size of Array: ");
    scanf("%d", &n);
    int a[n];

    printf("Array Elements: ");
    for (int i = 0; i <= n - 1; i++){
        scanf("%d", &a[i]);
    }

    display(a, n);
    selectionsort(a, n);
    printf("\n");
    display(a, n);

    return 0;
}