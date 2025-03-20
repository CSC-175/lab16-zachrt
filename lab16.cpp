// Code to implement the gcf function goes here
int gcf(int a, int b)
{
        int rem = a % b;

        a = b;

        b = rem;

    if (b !=0)
    {
        return gcf(a,b);
    }

        return a;

}