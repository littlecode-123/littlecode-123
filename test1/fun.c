#include"uhead.h"

int* urand(int n){
	int* num;
	int i=0;
	
	num=(int *)malloc(sizeof(int)*n);

	srand((int)time(0));
	for(i=0;i<n;i++){
		num[i]=rand()%30000;	
	}
	return num;
}

void ushow(int* tmp,int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d \n",tmp[i]);
	}
	free(tmp);
}

void bsort(int* a,int n){
	int i;  //比较的轮数
    int j;  //每轮比较的次数
    int buf;
	for (i=0; i<n-1; ++i)  //比较n-1轮
    {
        for (j=0; j<n-1-i; ++j)  //每轮比较n-1-i次,
        {
            if (a[j] < a[j+1])
            {
                buf = a[j];
                a[j] = a[j+1];
                a[j+1] = buf;
            }
        }
    }
}

int cmp ( const void *a , const void *b )
{
return *(int *)a > *(int *)b ? 1 : -1;
}
