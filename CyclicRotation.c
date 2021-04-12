void shiftRight(int A[], int N)
{
    int i,temp;
    temp=A[N-1];
    for(i=N-1;i>0;i--)
    {
        A[i]=A[i-1];
    }
    A[0]=temp;
}
struct Results solution(int A[], int N, int K) {
    struct Results result;
    
    // write your code in C99 (gcc 6.2.0)
    int i;
    for(i=0;i<K;i++)
    {
        shiftRight(A,N);
    }
    
    result.A = A;
    result.N = N;
    return result;
}

