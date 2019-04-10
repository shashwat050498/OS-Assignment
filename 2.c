#include <stdio.h>
int main()
{
    int nom[10];
    int e, m, k, n=10;
    for (i = 0; i < n; ++i){

		printf("\tEnter the no. of presents taken by childrens s%d--:", e+1);
        scanf("%d", &nom[e]);
}
    
  for (e = 0; e < n; ++e)
      {
        for (m = e + 1; m < n; ++m)
        {
            if (nom[e] < nom[m])
            {
                a = nom[e];
                nom[e] = nom[m];
                nom[m] = k;
            }
        }
    }
   
    printf("\t\nAmount Order by studnets\n");

        for (e= 0; e < n; ++e)
        {
        printf("\n");
        printf("\t%d%d.)Student having %d items\n",e+1,nom[e]);
        }    

  }