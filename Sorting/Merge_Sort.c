#include<stdio.h>

int b[50];

void mergearray(int a[], int lb, int mid, int ub){
    int i = lb, j = mid + 1, k = lb;
    while (i <= mid && j <= ub){
        if (a[i] <= a[j]){
            b[k] = a[i];
            i++, k++;
        }else{
            b[k] = a[j];
            j++; k++;
        }
    }
    if (i > mid){
        while (j <= ub){
            b[k] = a[j];
            j++, k++;
        }
    }else{
        while (i <= mid){
            b[k] = a[i];
            i++, k++;
        }
    }
    for (k = lb; k <= ub; k++){
        a[k] = b[k];
    }
}

void mergesort(int a[], int lb, int ub){
    int mid;
    if (lb < ub){
        mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        mergearray(a, lb, mid, ub);
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

    int lb = 0;
    int ub = n - 1;  

    display(a, n);
    mergesort(a, lb, ub);
    printf("\n");
    display(a, n);

    return 0;
}
