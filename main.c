#include <stdio.h>
#include "util_functions/utils_omer1.c"

int main() {
    printf("Hello, World!\n");

    int n = 215;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    dec_to_bin(n, arr);
    print_bin(arr);
    printf("\n");
    bin_to_dec(10, arr);
    printf("\n");
//    printf("%c\n", 33);
//    printf("%c\n", 64);
//    printf("%c\n", 35);
//    printf("%c\n", 36);
//    printf("%c\n", 37);
//    printf("%c\n", 94);
    printf("%c\n", 38);
    printf("%c\n", 42);
    printf("%c\n", 60);
    printf("%c\n", 62);
//    printf("%c\n", 97);
    char arr2[10] = {'!', '!', '!', '!', '!', '!', '!', '!', '!', '!'};
    char arr3[10] = {'v', '!', '!', '!', '!', '!', '!', '!', '!', '!'};
    dec_to_base32(64, arr2);
    print_base32(arr2);
    printf("\n");
    base32_to_dec(10, arr3);

//    printf("%d", '!');


    return 0;
}
