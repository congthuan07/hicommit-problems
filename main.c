#include <stdio.h>

int main() {
  float a, b;
  scanf("%f%f", &a, &b);
  if(a>=9.0&&b==90)
    printf("HOC_BONG_XUAT_SAC");
  else if(8.0<=a==9.0||a>=9.0&&80<=b<90||b>=90)
    printf("HOC_BONG_GIOI");
  else if(70<=b<80||7.0<=a<8.0)
    printf("HOC_BONG_KHA");
  else
    printf("KHONG_DAT");
  return 0;
}