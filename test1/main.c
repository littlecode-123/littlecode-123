#include"uhead.h"

int main(){
	int* a;
	struct timeval tv1,tv2,tv3,tv4;
	struct timezone tz;

	a=urand(NUMBER);
	gettimeofday(&tv1,&tz);	
	//bubble sort
	bsort(a,NUMBER);
	ushow(a,NUMBER);
	gettimeofday(&tv2,&tz);	
	printf("bubble sort:  %d \n",tv2.tv_usec-tv1.tv_usec);
	
	a=urand(NUMBER);
	gettimeofday(&tv3,&tz);	
	//quick sort
	qsort(a,NUMBER,sizeof(int),cmp);
	ushow(a,NUMBER);
	gettimeofday(&tv4,&tz);	
	printf("bubble sort:  %d \n",tv2.tv_usec-tv1.tv_usec);
	printf("quick sort:  %d \n",tv4.tv_usec-tv3.tv_usec);

	return 0;
}
