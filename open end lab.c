#include<stdio.h>

struct student
{
    int id;
    char name[50];
    int age;
    float grade;
};
struct student students[100];
int n = 0;

void savefile(){
    FILE *file= fopen("hameem.txt","w");
    if(file == NULL){
        printf ("Error opening file\n");
        return;
    }
     for(int i=0; i<n; i++)
    {
        fprintf(file,"%d\t\t%s\t\t%d\t\t%f\n", students[i].id,students[i].name,students[i].age,students[i].grade);
    }
    fclose(file);
    printf("Data saved to hameem.txt successfully.\n");
}
void loadfile(){
    FILE *file= fopen("hameem.txt","r");
    if(file == NULL){
        printf ("No existing data file found\n");
        return;
    }
    n=0;
   while(fscanf(file, "%d\t%s\t%d\t%f\n",&students[n].id,students[n].name,&students[n].age,&students[n].grade) == 4)
    {
       n++;
    }
    fclose(file);
    printf("Data loaded from hameem.txt successfully.\n");
}

void addStudent()
{
    printf("Enter student ID: ");
    scanf("%d", &students[n].id);
    printf("Enter student name: ");
    scanf("%s", students[n].name);
    printf("Enter student age: ");
    scanf("%d", &students[n].age);
    printf("Enter student Grade: ");
    scanf("%f", &students[n].grade);
    n++;
    printf("Student added successfully\n");
    savefile();
}

void showallstudents()
{
    printf("ID\t\tName\t\tAge\t\tGrade\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", students[i].id,students[i].name,students[i].age,students[i].grade);
    }
}

void updatestudent()
{
    int id, found=0;
    printf("Enter the student ID to update:");
    scanf("%d",&id);
    for(int i=0; i<n; i++)
    {
        if(students[i].id==id)
        {
            found=1;
            printf("Enter new ID: ");
            scanf("%d", &students[i].id);
            printf("Enter new name (without spaces): ");
            scanf("%s", students[i].name);
            printf("Enter new age: ");
            scanf("%d", &students[i].age);
            printf("Enter new grade: ");
            scanf("%f", &students[i].grade);
            printf("UPDATED SUCCESSFULLY.\n");
            savefile();
            break;
        }

    }
    if(found==0)
    {
        printf("****---No student record found****---\n");
    }
}

void delet_student()
{
    int id, found=0;
    printf("Enter the student ID to delete:");
    scanf("%d",&id);
    for(int i=0; i<n; i++)
    {
        if(students[i].id==id)
        {
            found=1;
            for(int j =i; j<n-1; j++)
            {
                students[j]=students[j+1];
            }
            n--;
            printf(" %d id Student deteted successfully \n", id);
            savefile();
            break;
        }
    }
    if(found==0)
    {
        printf("Student with ID %d not found.\n", id);
    }
}

void search_student()
{
    int id, found=0;
    printf("Enter the student ID to search:");
    scanf("%d",&id);
    for(int i=0; i<n; i++)
    {
        if(students[i].id==id)
        {
            found=1;
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Grade: %.2f\n", students[i].grade);

            break;
        }
    }
    if(found==0)
    {
        printf("****---No student record found---****\n");
    }

}

int main()
{
    int choice;
    loadfile();
    printf("Student management system\n\n");
    while(1)
    {
        printf("\n***********************************\n");
        printf("1.Show all student records\n");
        printf("2.Add new students\n");
        printf("3.Update a student\n");
        printf("4.Delete a student\n");
        printf("5.Search student\n");
        printf("6.Exit program\n");
        printf("\n***********************************\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        if(choice==1)
        {
            showallstudents();
        }
        else if(choice==2)
        {
            addStudent();
        }
        else if(choice==3)
        {
            updatestudent();
        }
        else if(choice==4)
        {
            delet_student();
        }
        else if(choice==5)
        {
            search_student();
        }
        else if(choice==6)
        {
            exit(0);
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    return 0;
}
