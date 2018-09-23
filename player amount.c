#include <stdio.h>
#include <math.h>
int main(void)
{
    int nflmax, nbamax, mlbmax, nhlmax, teamamount, extra; //creates variables
    //sets max values for the teams
    nflmax = 53;
    nbamax = 13;
    mlbmax = 25;
    nhlmax = 23;
    printf("Enter amount of potential players applying for nfl\n");
    scanf("%d", &teamamount);     //asks to set variable for nba team amount
    //nfl
    if (nflmax > teamamount) //checks whether nflmax is greater than teamamount
    {
        printf("Team doesn't have enough for nfl\n");
        extra = nflmax - teamamount; //sets variable for extra by subtracting nflmax with teamamount
        printf("The team needs %d players more to make up nfl team\n", extra);
    }
    else if (nflmax == teamamount) //checks whether nflmax is equal to teamamount
    {
        printf("Team doesn't need any more players for nfl\n");
    }
    else
    {
        printf("Team has too many players for nfl\n");
        extra = teamamount - nflmax; //sets extra to teamamount - nflmax
        printf("The team needs %d players less to make up nfl team\n", extra);
    }
    //nba
    printf("\n"); //creates space btwn each sport or team amounts
    printf("Enter amount of potential players applying for nba\n");
    scanf("%d", &teamamount);     //asks to set variable for nba team amount
    if (nbamax > teamamount) //repeat same process but with different teammax for variables
    {
        printf("Team doesn't have enough for nba\n");
        extra = nbamax - teamamount;
        printf("The team needs %d players more to make up nba team\n", extra);
    }
    else if (nbamax == teamamount)
    {
        printf("Team doesn't need any more players for nba\n");
    }
    else
    {
        printf("Team has too many players for nba\n");
        extra = teamamount - nbamax;
        printf("The team needs %d players less to make up nba team\n", extra);
    }
    //mlb
    printf("\n");
    printf("Enter amount of potential players applying for mlb\n");
    scanf("%d", &teamamount);     //asks to set variable for mlb team amount
    if (mlbmax > teamamount)
    {
        printf("Team doesn't have enough for mlb\n");
        extra = mlbmax - teamamount;
        printf("The team needs %d players more to make up mlb team\n", extra);
    }
    else if (mlbmax == teamamount)
    {
        printf("Team doesn't need any more players for mlb\n");
    }
    else
    {
        printf("Team has too many players for mlb\n");
        extra = teamamount - mlbmax;
        printf("The team needs %d players less to make up mlb team\n", extra);
    }
    //nhl
    printf("\n");
    printf("Enter amount of potential players applying for nhl\n");
    scanf("%d", &teamamount);     //asks to set variable for nhl team amount
    if (nhlmax > teamamount)
    {
        printf("Team doesn't have enough for nhl\n");
        extra = nhlmax - teamamount;
        printf("The team needs %d players more to make up nhl team\n", extra);
    }
    else if (nhlmax == teamamount)
    {
        printf("Team doesn't need any more players for nhl\n");
    }
    else
    {
        printf("Team has too many players for nhl\n");
        extra = teamamount - nhlmax;
        printf("The team needs %d players less to make up nhl team\n", extra);
    }
}
