 #include <string.h>

 struct point {
   int x;
   int y;
} my_point;
int main(){

struct point *p;
p = &my_point;

my_point.x;
p->x;

    
struct point *p = &my_point; /* To declare p as a pointer of type struct point */

my_point.y = 3; /* struct�� �� ��° ������ �� ���� */
(*p).x = 8; /* To access the first member of the struct */
p->x = 8; /* Another way to access the first member of the struct */


 struct point *ppoint = &my_point;  // ���� my_point�� ���� �ּ��̴�.
 struct point *A;  // ���� my_point�� ���� �ּ��̴�.
   if(&ppoint->x == &my_point.x)
   printf("1");
   else {
    printf("%08x",&ppoint);
    printf("%08x",&my_point);
   }


   int *px = &my_point.x;   // ���� ���� x�� �޸� �ּҰ��� px�� ġȯ �Ѵ�. &my_point == &my_point.x
   int *py = &ppoint->y;  
   int  apy = A->x; 
   *px = 10; *py = 20;
   int ax = my_point.x;  // ppoint ������ ����Ͽ� y�� ��ġ���� ��´�.
   int ay = my_point.y;  // ppoint ������ ����Ͽ� y�� ��ġ���� ��´�.

   printf("%d\n", my_point.x);
   printf("%d\n", my_point.y);
   printf("%d\n", *px);
   printf("%d\n", *py);
   printf("%d\n", ax);
   printf("%d\n", ay);
}