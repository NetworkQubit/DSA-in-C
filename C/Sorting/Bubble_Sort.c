#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y  = temp;
}

void bubblesort(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
            }
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
    bubblesort(a, n);
    printf("\n");
    display(a, n);

    return 0;
}