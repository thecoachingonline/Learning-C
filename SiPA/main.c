#include <stdio.h>
#include "calc.h"
#include<stdlib.h>
#include<string.h>
#define PI 3.14

/* enum traffic_ligth {
  RED,
  GREEN,
  YELLOW
} */

typedef enum traffic_ligth (
  RED,
  GREEN,
  YELLOW
) traffic_ligth;

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
   /* Overflow
   unsigned int n1 = 2147483647;
   unsigned int n2 = 1;
   printf("%u", n1 + n2);
   return 0;
   */
   /* ตัวเลขทศนิยม
   float pi = 3.14;
   float n;
   scanf("%f", &n);
   float n = 3.14;
   printf("pi = %f", n);

   float pi = 3.1416;
   float r = 2.5;
   printf("%f", pi*r*r);
   printf("%.3f", pi*r*r);
   */
   /* Precision error
   float f1 = 3.1234567;
   float f2 = 3.1234568;
   printf("f1 = %.8f\n", 2.0 * f1);
   printf("f2 = %.8f", 2.0 * f2);

   double d1 = 3.1234567;
   double d2 = 3.1234568;
   printf("d1 = %8lf\n", 2.0 * d1);
   printf("d2 = %.8lf", 2.0 * d2);
   */
   /* Type casting
   int visitor = 5;
   int day = 2;
   float f = visitor/day;
   float f = (float)visitor/day;
   float f = ((float)visitor)/day;
   float f = visitor/(float)day;
   float f = (float)visitor/(float)day;
   printf("visior/day = %.2f", f);
   return 0;
   */
   /* การดำเนินการกับไฟล์
   FILE *fOut;
   fOut = fopen("test.txt", "w");
   fprintf(fOut, "I'm %d years old", 20);
   fclose(fOut);
   return 0;
   */
  /* Boolan expression
  fabs(a - 3.5) < 0.000001

  strcmp("ant", "cat");
  strcmp("cat", "cat");
  strcmp("zbra", "cat");

  strcmp(h, "hello")== 0
  */
  /* ตัวดำเนิการตรรกศาสตร์
  int a = 15;
  (a > 10) && (a < 20);

  char c = 'h';
  (c > 'a') && (c < 'b');
  char c = 'h';
  (c < 'b') && (c > 'a');
  char c = 'h';
  (c < 'a') && (c < 'b');

  int a = 15;
  (a > 10) || (a < 20);
  int a = 25;
  (a > 10) || (a < 20);
  int a = 25;
  (a < 10) || (a < 30);

  char c = 'h';
  (c < 'a') || (c < 'b');
  */
  /* ทางเลือกแบบ if
  printf("Start\n");
  if (score >= 50) {
    printf("You passed!\n");
  }
  else{
    printf("You failed!\n");
  }
  printf("End");
  if (score >= 80)
  {
    grade = 'a';
  }
  else if (score >= 70) {
    grade = 'b';
  }
  else {
    grade = 'c';
  }
  printf("Your grade is %c", grade);
  */
  /* ทางเลือกแบบ Swich Case
  switch(grade){
    case 'A' :
      printf("Exellen!\n" );
      break;
    case 'B' :
      printf("Well doe\n" );
      break;
    default :
      printf("Try harder nxt time\n" );
  }
  printf("Your grade is %c\n", grade);
  */
  /* การทำซ้ำ For
  int i, j;
  for (i = 2;i < 4;i++){
    for (j = 2; j < 5; j++)
    {
      printf("%d x %d = %d\n", i, j, i*j);
    }  
  }
  return 0;
  */
  /* การทำซ้ำ While
  int i = 0;
  while (i <= 10) {
    printf("%d ", i);
    i = i + 1;
  }
  */
   /* ค่าคงที่
   float area, circmference;
   float radius = 5.0;
   area = PI*radius*radius;
   circmference= 2*PI*radius;
   printf("area= %.2f, circumference = %.2f", area, circmference);
   */
  /* Enum
  enum traffic_light color;
  if (color == RED)
  {
    stop();
  }
  else if (color == GREEN)
  {
    go();
  }
  else if (color == YELLOW)
  {
    slow();
  }
  return 0;
  */
  // Typedef
  struct account
  {
    char fn[100], ln[100];
    float balance;
  };
  typedef struct account account;
  
  typedef struct account
  {
    char fn[100];
    char ln[100];
    float balance;
  } account;
  

}