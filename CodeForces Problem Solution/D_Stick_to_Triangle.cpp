#include <stdio.h>
#define max 40
int main()

{

  int q = 0, m = 0, i = 0, j = 0, k = 0, n = 14, p, count = 0, fcount = 0, tri[max][3];
  // printf(“Enter n:”);
  // scanf("%d",&n);

  for (j = 1; j < (n - 1); j++)

  {
    for (k = 1; k <= j; k++)

    {

      if ((j + k) > (n - (j + k)) && n != (j + k) && (((n - (j + k)) + k) > j) && ((n - (j + k)) + j) > k)

      {
        p = n - (j + k);

        if (p >= j && p >= k)

        {
          tri[i][0] = p;
          tri[i][1] = j;
          tri[i][2] = k;
        }

        else if (p <= j && p <= k)

        {
          tri[i][0] = j;
          tri[i][1] = k;
          tri[i][2] = p;
        }
        else if (p <= j && p >= k)

        {
          tri[i][0] = j;
          tri[i][1] = p;
          tri[i][2] = k;
        }

        i++;
        count++;
      }
    }
  }

  fcount = count;

  for (m = 0; m < (count); m++)
    for (q = (count - 1); q > m && q != m; q--)
    {
      {
        if (tri[m][0] == tri[q][0])
        {
          if (tri[m][1] == tri[q][1])
          {
            if (tri[m][2] == tri[q][2])
            {
              fcount--;
            }
          }
        }
      }
    }
  printf("%d\n%d", count, fcount);
}