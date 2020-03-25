typedef struct student{
    char Name[20];
    int roll_no;
    float phy;
    float math;
    float ele;
    float mech;
    float cs;
    float total;
    float avg;
    char div[10];
    char res[10];
}Student;

void init(Student *);
void display(Student [], int);