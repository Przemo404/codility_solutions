// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    if(N==1)
    {
        return A[0];
    }
    else
    {
        qsort(A, N, sizeof(int), cmpfunc);
        for(i=0;i<N;i+=2)
        {
            if(A[i]!=A[i+1])
                return A[i];
        }
    }
}

