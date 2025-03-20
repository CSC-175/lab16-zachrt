// Code to implement the gcf function goes here
int gcf(int a, int b)
{
    int smaller, highest = 1;
    if (a > b)
    {
        smaller = a;
    } else
    {
        smaller = b;
    }

    for (int i = highest; i <= smaller; i++) {
        if (a% i == 0 && b % i == 0)
        {
            highest = i;
        }
    }

    return highest;

}