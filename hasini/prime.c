#include <stdio.h> 

main() {
  int n, i,j, c = 0,m;
  printf("start");
  scanf("%d",&m);
  printf("end");
  scanf("%d", &n);
  for (j=m;j<=n;j++)
  {
        c=0;
    
        for (i = 1; i <= j; i++)
        {
          if (j % i == 0) 
          {
             c++;
          }
        }
    
        if (c == 2) 
        {
            printf("%d  ",j);
        }
      
  }
  return 0;    
}