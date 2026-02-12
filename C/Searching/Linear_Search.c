#include<stdio.h>

void linearsearch(int a[], int element, int n){
    int found;
    for (int i = 0; i<=n - 1; i++){
        if (a[i] == element){
            printf("Element %d is found at index %d ",element,i);
            found = 1;
            break;
        }
    }
    if (!found){
        printf("Element is not found");
    }
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
    printf("Array Element: ");
    for (int i = 0; i <= n - 1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Element: ");
    scanf("%d", &element);

    display(a,n);
    linearsearch(a,element,n);

    return 0;
}
