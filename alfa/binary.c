// this function binary transform numbers into binary


int binary(int number)
{
    return (number / 2 == 0) ? : 10 * binary(number / 2) + number % 2;
}

int main(void)
{
    printf("%i", binary(3));
}
