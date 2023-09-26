#include <stdio.h>
 struct Part {	//구조체 원형(선언)
  int number; 
  char name[30]; 
  int on_hand; 
} ;
void print_part(struct Part part) {
    printf("Number: %d\n", part.number);
    printf("Name: %s\n", part.name);
    printf("On Hand: %d\n", part.on_hand);
}

int main() {	

print_part((struct Part) { 528, "Disk drive", 10 });  // 복합리터럴 
return 0;
}
