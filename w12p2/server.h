typedef struct employee{
    int emp_id;
    char name[20];
    char dep[20];
}Employee;

void read_Emp(Employee *);
void disp_Emp(Employee *);