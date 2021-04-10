#include <stdio.h>
#include <math.h>

int invert(const int x, int p, int n)
{
    int ans = 0, tmp;
    int buffer[35] = {0};
    tmp = x;
    buffer[0] = tmp % 2;
    int len = 1;
    while (1)
    {
        tmp = tmp >> 1;
        int tmptmp = tmp;
        if (tmptmp == 1)
        {
            buffer[len] = 1;
            break;
        }
        else if (tmptmp == 0)
        {
            buffer[len] = 0;
            break;
        }
        buffer[len] = tmptmp % 2;
        len++;
    }
    while (buffer[len] == 0)
        len--;

    int cur_pos = len - p;
    for (int i = 0; i < n; i++)
    {
        if (buffer[cur_pos - i] == 1)
            buffer[cur_pos - i] = 0;
        else
            buffer[cur_pos - i] = 1;
    }

    for (int i = 0; i <= len; i++)
    {
        ans += buffer[i] * pow(2, i);
    }

    return ans;
}

int main()
{
    int x, p, n;
    scanf("%d %d %d", &x, &p, &n);

    printf("%d", invert(x, p, n));

    return 0;
}