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

my_point.y = 3; /* struct의 두 번째 변수의 값 변경 */
(*p).x = 8; /* To access the first member of the struct */
p->x = 8; /* Another way to access the first member of the struct */


 struct point *ppoint = &my_point;  // 변수 my_point의 시작 주소이다.
 struct point *A;  // 변수 my_point의 시작 주소이다.
   if(&ppoint->x == &my_point.x)
   printf("1");
   else {
    printf("%08x",&ppoint);
    printf("%08x",&my_point);
   }


   int *px = &my_point.x;   // 내부 변수 x의 메모리 주소값을 px에 치환 한다. &my_point == &my_point.x
   int *py = &ppoint->y;  
   int  apy = A->x; 
   *px = 10; *py = 20;
   int ax = my_point.x;  // ppoint 변수를 사용하여 y의 위치값을 얻는다.
   int ay = my_point.y;  // ppoint 변수를 사용하여 y의 위치값을 얻는다.

   printf("%d\n", my_point.x);
   printf("%d\n", my_point.y);
   printf("%d\n", *px);
   printf("%d\n", *py);
   printf("%d\n", ax);
   printf("%d\n", ay);
}