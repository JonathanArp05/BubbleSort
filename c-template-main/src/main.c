#include <stdio.h>
#include "sort.h"

static void print_array(char arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

static void print_char_array(char arr[], int n) {
    for (int i = 0; i < n; i++) printf("%c", arr[i]);
    printf("\n");
}

int main() {
    char letter_arr1[] = {'z', 'S', 's', 'a'};
    int n1 = sizeof(letter_arr1) / sizeof(letter_arr1[0]);
    printf("Original letters: "); print_char_array(letter_arr1, n1);
    bubble_sort(letter_arr1, n1, letters_in_order);
    printf("Sorted letters:   "); print_char_array(letter_arr1, n1);

    char number_arr1[] = {4, -1, 2, 9};
    int n2 = sizeof(number_arr1) / sizeof(number_arr1[0]);
    printf("\nOriginal numbers: "); print_array(number_arr1, n2);
    bubble_sort(number_arr1, n2, numbers_in_ascending_order);
    printf("Sorted numbers:   "); print_array(number_arr1, n2);
    return 0;
}