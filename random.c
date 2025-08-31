#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

void rand_string(char *s, size_t size){
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (size_t i = 0; i < size; i++) {
        s[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    s[size] = '\0'; 
}