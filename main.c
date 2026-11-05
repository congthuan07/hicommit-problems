#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f", &dtb);
  scanf("%f", &drl);
  if(dtb>=9.0&&drl==90)
    printf("HOC_BONG_XUAT_SAC");
  else if(dtb>=8.0 && dtb<9.0||dtb>=9.0 && drl>=8 &&drl<90||drl>=90)
    printf("HOC_BONG_GIOI");
  else if(drl>=70 && drl<80||dtb>=7.0 && dtb<8.0)
    printf("HOC_BONG_KHA");
  else
    printf("KHONG_DAT");
  return 0;
}