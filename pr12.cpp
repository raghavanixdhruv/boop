#include<iostream.h>
#include<conio.h>
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    clrscr();
    today = Friday;
    cout << "Day " << today+1;
    return 0;
}
