int sumDigits(int N)
{
    if (N <10)
    {
        return N;
    }
    else 
    {
        return N % 10 + sumDigits(N/10);
    }
}
int digitsSuperSumRecursive(int N)
{
    if(N < 10)
    {
        return N;
    }
    else 
    {
        return digitsSuperSumRecursive(sumDigits(N));
    }
}
