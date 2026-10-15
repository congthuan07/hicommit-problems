#include <stdio.h>

int main() {
  int n;
  printf("Nhap so nguyen n: ");
  scanf("%d", &n);
  if(n % 2 == 0){
    printf("%d La so chan", n);
  }else{
    printf("%d La so le", n);
  }
  return 0;
}