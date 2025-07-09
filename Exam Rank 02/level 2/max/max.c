int     max(int* tab, unsigned int len) 
{
        if (len == 0)
                return (0);

        unsigned int    i;
        int     max;

        max = tab[0];
        i = 1;
        while (len > i)
        {
                if (tab[i] > max)
                        max = tab[i];
                i++;
        }
        return (max);
}
