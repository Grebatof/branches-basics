#include <stdio.h>

int main()
{
  int arr[5];

  for (int j = 0; j < 5; j++) {
    scanf("%d", &arr[j]);
  }
  printf("\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
