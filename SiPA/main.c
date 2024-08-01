#include <stdio.h>
#include "calc.h"

int main() {
    /* ตัวแปร
    char myGreade;
    myGreade = 'A'
    printf("Your grade is %c", myGreade);
    */

    printf("%d", plus(1,2));
    return 0;

    /* การแสดงผลขอมูลตัวอักษร
    char c;
    char c1 = 'a';
    char c2 = '%';
    char c3 = ' ';
    char c4 = '7';
    int circleArea1;
    float _pi;
    */ 
   /* แถวลำดับอักษร
   char hello[10];
   char hello[10] = "Hello";
   sprintz(hello, "%s", "Hello");

   char c = 'A';
   char s[2] = "A";
   printf("%c", c);
   printf("%c", s[0]);
   printf("%s", s);
   */
  // การอ่านข้อมูจากคีย์อร์ด
  char c1, c2;
  char c1, s1[10];
  scanf("%c%c", &c1, &c2);
  scanf("%c%s" , &c1, s1);

}