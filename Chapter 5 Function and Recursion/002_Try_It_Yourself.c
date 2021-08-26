#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodEvening();

int main()
{
    // Question :-
    /* Write a program with 3 functions :- GoodMorning , 
    GoodAfternoon , GoodEvening which prints Good Morning , 
    Good Afternoon , Good Evening respectively. main()
    should call them in sequence.*/

    GoodMorning();
    GoodAfternoon();
    GoodEvening();

    return 0;
}
void GoodMorning()
{
    printf("Good Morning !\n");
}
void GoodAfternoon()
{
    printf("Good Afternoon !\n");
}
void GoodEvening()
{
    printf("Good Evening !");
}