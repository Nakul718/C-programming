#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[30];
    int year;
};

void readStudent(struct Student *s);
void display(struct Student s);
int findTopper(struct Student s[], int n);

void main()
{
    struct Student s[10];
    int i, topperIndex;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        readStudent(&s[i]);
    }

    topperIndex = findTopper(s, 10);

    printf("\nTopper of the class:\n");
    display(s[topperIndex]);
}

void readStudent(struct Student *s)
{
    printf("Name: ");
    scanf("%s", s->name);

    printf("Roll No: ");
    scanf("%d", &s->roll_no);

    printf("Mobile No: ");
    scanf("%s", s->mobile_no);

    printf("CGPA: ");
    scanf("%f", &s->CGPA);

    printf("Date of Birth: ");
    scanf("%s", s->DoB);

    printf("Course: ");
    scanf("%s", s->course);

    printf("Year: ");
    scanf("%d", &s->year);
}

void display(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Mobile No: %s\n", s.mobile_no);
    printf("CGPA: %.2f\n", s.CGPA);
    printf("Date of Birth: %s\n", s.DoB);
    printf("Course: %s\n", s.course);
    printf("Year: %d\n", s.year);
}

int findTopper(struct Student s[], int n)
{
    int i, index = 0;
    float max = s[0].CGPA;

    for(i = 1; i < n; i++)
    {
        if(s[i].CGPA > max)
        {
            max = s[i].CGPA;
            index = i;
        }
    }

    return index;
}
