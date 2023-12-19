#include <stdio.h>

int main() {
    int arr[100]; 
    int size, element, count = 0;

  
    scanf("%d", &size);

    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &element);

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("%d
",count);

}