#include<stdio.h>
#include<stdlib.h>

struct studentInformation
{
    int id;
    float marks;
    char section;
};

int main(){
    struct studentInformation info[10];

    for(int i=0; i<10; i++){
        printf("Enter your information: %d\n", i+1);
        printf("Student ID: ");
        scanf("%d", &info[i].id);
        printf("Marks: ");
        scanf("%f", &info[i].marks);
        printf("Section: ");
        scanf("%s", &info[i].section);
    }
    int searchId;
    printf("Enter your Student ID to Search:");
    scanf("%d", &searchId);

    int found=0;
    for (int i=0; i<10; i++)
    {
       if(info[i].id==searchId){
        found=1;
        printf("Student Found !\n");
        printf("Student ID: %d\n", info[i].id);
        printf("Student Marks: %f\n", info[i].marks);
        printf("Section: %s\n", info[i].section);
        break;
       }
    }
    if(!found){
        printf("Student With Id %d not Found. \n", searchId );
    }
    
}
