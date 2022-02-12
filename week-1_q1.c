   #include<stdio.h>
   
   int main(){
    char regd[3];
    char name[20];
    char branch[35];
    char hobbies[50];

    printf("Enter Name : \n");
    fgets(name, 20, stdin);

    printf("Enter last three digits of Registration Number : \n");
    scanf("%s", &regd);

    printf("Enter Branch : \n");
    fgets(branch, 20, stdin);
    fgets(branch, 35, stdin);

    printf("Enter Hobbies : \n");
    fgets(hobbies, 50, stdin);

    printf("Name :- %s", name);
    printf("Registration Number :- %s \n", regd);
    printf("Branch :- %s", branch);
    printf("Hobbies :- %s", hobbies);

    return 0;
   }