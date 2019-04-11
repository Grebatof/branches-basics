#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int array[n];

  for(int i = 0; i < n; i++) {
    array[i] = i + 1;
    printf("%d ", array[i]);
  }

  printf("size of array = %d\n", n);


  return 0;
}
