int main()
{
    int num, n, i, negative=0, positive=0;

    printf("Enter a amount of numbers: ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Wrong number! Enter bigger number than 0 \n");
        return 1;
    }
    

    for(int i=1; i <= n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num < 0)
        {
            negative++;
        }
        if(num > 0)
        {
            positive++;
        }
    }
    printf("The amount of positive numbers: %d\r\n", positive);
    printf("The amount of negative numbers: %d\r\n", negative);
    printf("The amount of zeroes: %d\r\n", n - negative - positive);
}
