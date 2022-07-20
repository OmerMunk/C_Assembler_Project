//
// Created by Omer Munk on 18/07/2022.
//
#include <math.h>


//function to convert decimal to binary
void dec_to_bin(int n, int *arr) {
    int i = 9;
    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i--;
    }
}

void print_bin(int *arr) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
}

void bin_to_dec(int length, int *arr) {
    int i = length-1;
    int sum = 0;
    while (i > -1) {
//        printf("\nnumber right now is %d ,sum right now is: %d, i is %d, pow is %f\n", arr[i],sum, i, pow(2, length - (i + 1)));
        sum = sum + arr[i] * pow(2, length - (i + 1));
        i--;
    }
    printf("%d", sum);
}

void dec_to_base32(int base32num, char *arr) {
    int quotient, remainder, i;
    i = 0;
    quotient = base32num;
    while (quotient != 0) {
        remainder = quotient % 32;
        switch (remainder) {
            case 0:
                arr[i++] = '!'; //33
                break;
            case 1:
                arr[i++] = '@'; //64
                break;
            case 2:
                arr[i++] = '#'; //35
                break;
            case 3:
                arr[i++] = '$'; //36
                break;
            case 4:
                arr[i++] = '%'; //37
                break;
            case 5:
                arr[i++] = '^'; //94
                break;
            case 6:
                arr[i++] = '&'; //38
                break;
            case 7:
                arr[i++] = '*'; //42
                break;
            case 8:
                arr[i++] = '<'; //60
                break;
            case 9:
                arr[i++] = '>'; //62
                break;
            default:
                arr[i++] = (char)(remainder + 87);
                break;
        }
        quotient = quotient / 32;
    }
}


void base32_to_dec(int length, char *arr) {
    int i = 0;
    int sum = 0;
    while (i < length) {
        switch (arr[i]) {
            case '!':
                sum = sum + 0 * pow(32, i);
                break;
            case '@':
                sum = sum + 1 * pow(32, i);
                break;
            case '#':
                sum = sum + 2 * pow(32, i);
                break;
            case '$':
                sum = sum + 3 * pow(32, i);
                break;
            case '%':
                sum = sum + 4 * pow(32, i);
                break;
            case '^':
                sum = sum + 5 * pow(32, i);
                break;
            case '&':
                sum = sum + 6 * pow(32, i);
                break;
            case '*':
                sum = sum + 7 * pow(32, i);
                break;
            case '<':
                sum = sum + 8 * pow(32, i);
                break;
            case '>':
                sum = sum + 9 * pow(32, i);
                break;
            default:
                sum = sum + (arr[i] - 87) * pow(32, i);
                break;
        }
        i++;
    }
    printf("%d", sum);
}


void print_base32(char *arr) {
    int i;
    for (i = 9; i > -1; i--) {
        printf("%c", arr[i]);
    }
}





