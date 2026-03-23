#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("Enter Marks :");
    scanf("%d",&marks);
    if ( marks >=90 && marks <= 100){
        grade = 'A';
        printf("Your Grade is %c",grade);
    }
    else if ( marks >=80 && marks <= 90){
        grade = 'B';
        printf("Your Grade is %c",grade);
    }
    else if ( marks >=70 && marks <= 80){
        grade = 'C';
        printf("Your Grade is %c",grade);
    }
    else if ( marks >=60 && marks <= 70){
        grade = 'D';
        printf("Your Grade is %c",grade);
    }
    else if ( marks >=50 && marks <= 60){
        grade = 'E';
        printf("Your Grade is %c",grade);
    }
    else if ( marks >=50 ){
        grade = 'F';
        printf("Your Grade is %c",grade);
    }
    else{
        
    }
    return 0;
}