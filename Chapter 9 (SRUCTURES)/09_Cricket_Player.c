#include <stdio.h>

typedef struct Cricket {
    char player_name[100];
    char team_name[100];
    float bat_avg;
}st;

void input(st stu[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter The Details Of Player ");
        printf("\nEnter The Player's Name:- ");
        scanf("%[^\n]", stu[i].player_name);
        printf("\nEnter The Team Name :- ");
        scanf("%[^\n]", stu[i].team_name);
        printf("\nEnter The Batting Average :- ");
        scanf("%d", &stu[i].bat_avg);
    }
}

void main(){
    st player_info[50];
    int n_plr;
    printf("Enter The number of players detail u want to enter :- "); scanf("%d", &n_plr);
    input( player_info, n_plr);

}