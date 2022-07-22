#include <stdio.h>
#include "util_functions/base_functions.c"
//#include "util_functions/utils_omer1_header.h"

char x;

int main() {
    printf("%d", mov );
    printf("\n");
    printf("%d", jmp );
    printf("\n");
    printf("%d", bne );
    printf("\n");
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
    char arr2[2] = {'!', '!'};
    char arr3[2] = {'v', '!'};
    dec_to_base32(32, arr2);
    print_base32(arr2);
    printf("\n");
    base32_to_dec(2, arr3);
    int arr4[10] = {1, 1, 0, 0, 0, 1, 1, 0, 0, 1};
    struct word word1;
    analayze_word(arr4, &word1);
    print_word_struct(&word1);
    int arr7[10] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1};
    char arr8[2] = {'!', '!'};
//    int result = bin_to_dec(10, arr7);
//    printf("%d", result);
//    dec_to_base32(731, arr8);
//    print_base32(arr8);
    bin_to_base32(arr7, arr8);
    printf("\n");
    print_base32(arr8);


    return 0;
}
