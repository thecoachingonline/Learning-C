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
  /* การอ่านข้อมูจากคีย์อร์ด
  char c1, c2;
  char c1, s1[10];
  scanf("%c%c", &c1, &c2);
  scanf("%c%s" , &c1, s1);
  */
  /* ข้อมูลตัวอกษรและตัวเลข
   char n1 = '2';
   char n2 = '5';
   int n = 1;
   printf("%c", n1 + n2);
   int n;
   scanf("%d", n);
   int n = 20;
   printf("I'm %d years old", n);
   char c1 = 'A';
   printf("Otput is %c", c1 + 1);
   char c2 = 'C';
   printf("Otput is %c", c2 - 2);
   char c3 = 'C';
   printf("Output is %d", c3 - 'A');
   */
   /* ตัวดำเนินการพีซคณิต
   printf("%d", 20 + 30);
   printf("%d", 20 - 30);
   printf("%d", 20 * 30);
   printf("%d", 20 / 4);
   printf("%d", 13 % 8);
   printf("%d", -14 % 8);
   printf("%d", (2 * (5 + 4)));
   printf("%d", 1 + 3 - 6 / 2 * (2 + 1));
   */
   // Overflow
   unsigned int n1 = 2147483647;
   unsigned int n2 = 1;
   printf("%u", n1 + n2);
   return 0;
}