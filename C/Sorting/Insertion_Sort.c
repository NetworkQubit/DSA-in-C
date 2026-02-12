#include<stdio.h>

void insertionsort(int a[], int n){
    int key;
    int j;
    for (int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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
    insertionsort(a, n);
    printf("\n");
    display(a, n);

    return 0;
}