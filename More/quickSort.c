#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int min = arr[0];

    for (int i = 1; i < 5; i++){
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return 0;
}
