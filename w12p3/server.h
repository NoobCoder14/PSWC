typedef struct student{
    int roll_no;
    char name[20];
    int marks;
}Student;

void read_Stu(Student *);
void disp_Stu(Student *);
void sort_Stu(Student [], int);
