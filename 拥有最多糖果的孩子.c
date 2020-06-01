bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    bool *s=(bool *)malloc(sizeof(bool)*candiesSize);
    *returnSize=candiesSize;
    int i,j,max=0,t=0;
    for(i=0;i<candiesSize;i++)
    {
        max=candies[i]+extraCandies;
        for(j=0;j<candiesSize;j++)
        {
            if(candies[j]>max)
            {
                max=candies[j];
            }
        }
        if(max==candies[i]+extraCandies)
        {
            s[i]=true;
        }
        else
        {
            s[i]=false;
        }
    }
    return s;
}
