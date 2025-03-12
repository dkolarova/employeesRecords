#include <stdio.h>
#include <stdlib.h>

//Define Structure "Employee"
typedef struct{
    char name[50];
    int id;
    float salary;
} Employee;

int main() {
    
    //Decleare a pointer to the structure
    Employee *ptr;
    ptr = (Employee *)malloc(sizeof(Employee));
    
    if(ptr == NULL){
        printf("Memory allocation faild!\n");
        return 1;
    }
    
    //Prompt the user to enter the employee's details;
    printf("Enter name: ");
    scanf("%s", ptr->name);
    
    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    
    printf("Enter salary: ");
    scanf("%f", &ptr->salary);

    //Printf Employee Details
    printf("\nEmployee Record:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f", ptr->name,ptr->id, ptr->salary);
  
    free(ptr);
       
    return 0;
}

