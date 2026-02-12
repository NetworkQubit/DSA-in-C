#include<stdio.h>

void binarysearch(int a[], int element, int n){
}

void display(int a[], int n){
    for (int i = 0; i<= n - 1; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int n, element;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Sorted Array Element: ");
    for (int i = 0; i <= n - 1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Element: ");
    scanf("%d", &element);

    display(a,n);
    binarysearch(a,element,n);

    return 0;
}
