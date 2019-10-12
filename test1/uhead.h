#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<unistd.h>
#define NUMBER 10000

int* urand(int n);
void ushow(int* tmp,int n);
void bsort(int* a,int n);
int cmp ( const void *a , const void *b );
