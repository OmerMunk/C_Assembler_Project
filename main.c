#include <stdio.h>
#include "util_functions/utils_omer1.c"

int main() {
    printf("Hello, World!\n");
    int n = 5;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("\ndec_to_bin: \n");
    dec_to_bin(n, arr);
    printf("\nprint_bin: \n");
    print_bin(arr);
    printf("\nbin to dec: \n");
    bin_to_dec(10, arr);
    printf("\n");
    char arr2[10] = {'!', '!', '!', '!', '!', '!', '!', '!', '!', '!'};
    char arr3[10] = {'v', '!', '!', '!', '!', '!', '!', '!', '!', '!'};
    dec_to_base32(32, arr2);
    print_base32(arr2);
    printf("\n");
    base32_to_dec(10, arr3);
    return 0;
}
