int     max(int* tab, unsigned int len) 
{
        unsigned int    i;
        int     max;

        max = tab[0];
        if (len == 0)
                return (0);
        i = 1;
        while (len > i)
        {
                if (tab[i] > max)
                        max = tab[i];
                i++;
        }
        return (max);
}
