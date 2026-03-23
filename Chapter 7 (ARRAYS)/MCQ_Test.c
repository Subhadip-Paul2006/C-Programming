#include <stdio.h>

char val_input(char arr[], int n);
char val_output(char arr[], int n, int m);
char val_check(char arr01[], char arr02[], int n, int m);
char val_input(char arr[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Question %d = ", ( i + 1));
        scanf(" %c", &arr[i]);
    }
    return arr[n];
}
char val_output(char arr[], int n, int m){
    int i;
    printf("Student %d   ", m);
    for ( i = 0; i < n; i++)
    {
        printf(" %c ", arr[i]);
    }
}
char val_check(char arr01[], char arr02[], int n, int m){
    int score, i, x;
    int arr03[n];
    score = 0;
    x = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr01[i] == arr02[i])
        {
            score++;
        }
        else
        {
            arr03[x] = i + 1;
            x++;
        }
    }
    printf("Score Of Student %d is = %d ", m , score);
    printf("\n Wrong Answers Are = ");
    for ( i = 0; i < x; i++)
    {
        printf(" %d ", arr03[i]);
    }
    printf("\n----- * -----\n");
}

void main(){
    int qus, i;
    printf("\t--- MCQ TEXT RESULTS ---");
    printf("\n\t--- Answer Key Set ---");
    printf("\nEnter the number of questions :- "); scanf("%d", &qus);
    printf("\nEnter the correct options :- \n");
    char ans_key[qus], student01[qus], student02[qus], student03[qus];
    val_input( ans_key, qus);
    printf("\n\t--- Students Answer ---");
    printf("\nStudent 1 :- \n");
    val_input( student01, qus);
    printf("\nStudent 2 :- \n");
    val_input( student02, qus);
    printf("\nStudent 3 :- \n");
    val_input( student03, qus);
    printf("\n\t--- Answer Checking & Results --- \n");
    printf("Question :- ");
    for ( i = 0; i < qus; i++)
    {
        printf(" %d ", i + 1);
    }
    printf("\n");
    val_output( student01, qus, 1);
    printf("\n");
    val_output( student02, qus, 2);
    printf("\n");
    val_output( student03, qus, 3);
    printf("\n");
    val_check( student01, ans_key, qus, 1);
    val_check( student02, ans_key, qus, 2);
    val_check( student03, ans_key, qus, 3);
}