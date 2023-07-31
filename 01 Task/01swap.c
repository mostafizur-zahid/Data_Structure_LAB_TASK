#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int element1, element2, element3;

    printf("Input the value of 1st element : ");
    scanf("%d", &element1);

    printf("Input the value of 2nd element : ");
    scanf("%d", &element2);

    printf("Input the value of 3rd element : ");
    scanf("%d", &element3);


    printf("The value before swapping are :\n");
    printf("element 1 = %d\n", element1);
    printf("element 2 = %d\n", element2);
    printf("element 3 = %d\n", element3);

   
    swap(&element1, &element2, &element3);
   

    
    printf("The value after swapping are :\n");
    printf("element 1 = %d\n", element1);
    printf("element 2 = %d\n", element2);
    printf("element 3 = %d\n", element3);

    return 0;
}
