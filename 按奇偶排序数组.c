int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int *s=(int *)malloc(sizeof(int)*ASize);
    * returnSize=ASize;
    int i,k=0;
    for(i=0;i<ASize;i++)
    {
        if(A[i]%2==0)
        {
            s[k++]=A[i];
        }
    }
    for(i=0;i<ASize;i++)
    {
        if(A[i]%2!=0)
        {
            s[k++]=A[i];
        }
    }
    return s;
}
