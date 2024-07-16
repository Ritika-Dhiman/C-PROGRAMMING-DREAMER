#include <stdio.h>
#include <string.h>

// structure (struct) is a user defined data type that allows you to combine data item of different types
// structure is used to represent a record or data set and manage more efficiently.


struct student {
    char name[50];
    int roll_no;
    float marks};


int show_detail(){
    struct student student1={"Ritika",45,85.5};
    struct student student2={"Suzal",46,90};


printf("Student details:\n");
printf("Name: %s\n", student1.name);
printf("Roll no: %d\n", student1.roll_no);
printf("Marks: %f\n", student1.marks);

printf("Student details:\n");
printf("Name: %s\n", student2.name);
printf("Roll no: %d\n", student2.roll_no);
printf("Marks: %f\n", student2.marks);
}

int main(){
show_detail();
return 0;
}
