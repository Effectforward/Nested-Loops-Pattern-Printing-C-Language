#include <stdio.h>
int main() 
{
  int rows, columns;
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  for (rows = 1; rows <= num; rows++) 
  {
    for (columns = 1; columns <= num; columns++) 
    {
      printf("%4d", rows * columns);
    }
    printf("\n");
  }
  return 0;
}
