#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** We toss coins - we decide to choose the 1st virgin (0) /2.orel (1) /
    When our choice falls, we get 1 CZK
    If it does not fall, we return 1 CZK

    The user enters the amount he wants to get, the program lists how many times you need to toss coins. **/


long long int flip_coin(int how_much)
{
    srand(time(NULL));
    int flip;
    long long int p=0, account=0, mina=0;


    while(account < how_much)
    {
        p++;
        flip = rand()%2;
        if(flip==1)
        {
            account++;
        }
        else
        {
            account--;
        }

        if(account < mina)
        {
            mina=account;
        }

    }
    printf("Minimal value of account was %lld\n", mina);

    return p;
}


int main()
{
    int how_much;
    printf("How much do you want to earn? ");
    scanf("%d", &how_much);

    printf("It was necessary to flip %lld total",flip_coin(how_much));
    return  0;
}
