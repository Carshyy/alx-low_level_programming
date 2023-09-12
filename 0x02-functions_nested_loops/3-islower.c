#include <stdio.h>
#include "main.h"

/**
 * _islower - function name
 * @c : variable
 * description : checks if it caselower
 *
 * Return: int
 */

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;  // c is lowercase
    } else {
        return 0;  // c is not lowercase
    }
}

