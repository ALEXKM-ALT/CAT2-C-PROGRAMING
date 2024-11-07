#include<stdio.h>
#include<string.h>

//initializing fields
struct employee{
	char name[25]; //%s
	int id; //%d
	char department[20]; //%s
	float salary; //%f
	char email[50]; //%s
}
employee1, employee2;
//employee details
int main(){
	strcpy(employee1.name, "Joe Due");
	employee1.id = 12345;
	strcpy(employee1.department, "Human Resources");
	employee1. salary = 55000.50;
	strcpy(employee1.name, "john.doe@company.com");
	
 //output fields
	printf("name: %s \n", employee1.name);
    printf("id: %d \n", employee1.id);
    printf("department: %s \n", employee1.department);
    printf("salary: %f \n", employee1.salary);
    printf("email: %s \n", employee1.email);
    
    return 0;
	
	
}