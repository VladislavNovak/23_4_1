#include <iostream>

using std::cout;
using std::endl;

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define MONDAY_NAME "monday"
#define TUESDAY_NAME "tuesday"
#define WEDNESDAY_NAME "wednesday"
#define THURSDAY_NAME "thursday"
#define FRIDAY_NAME "friday"
#define SATURDAY_NAME "saturday"
#define SUNDAY_NAME "sunday"

#define DONE(action, name) action ##_## name

void get_monday() { cout << "This is: " MONDAY_NAME "\n"; }
void get_tuesday() { cout << "This is: " TUESDAY_NAME "\n"; }
void get_wednesday() { cout << "This is: " WEDNESDAY_NAME "\n"; }
void get_thursday() { cout << "This is: " THURSDAY_NAME "\n"; }
void get_friday() { cout << "This is: " FRIDAY_NAME "\n"; }
void get_saturday() { cout << "This is: " SATURDAY_NAME "\n"; }
void get_sunday() { cout << "This is: " SUNDAY_NAME "\n"; }

void get_day() {
    int userInput;
    while(true) {
        cout << "Enter the day of the week (1 - 7, or any other to exit): ";
        std::cin >> userInput;

        switch (userInput) {
            case(MONDAY):    DONE(get, monday)(); break;
            case(TUESDAY):   DONE(get, tuesday)(); break;
            case(WEDNESDAY): DONE(get, wednesday)(); break;
            case(THURSDAY):  DONE(get, thursday)(); break;
            case(FRIDAY):    DONE(get, friday)(); break;
            case(SATURDAY):  DONE(get, saturday)(); break;
            case(SUNDAY):    DONE(get, sunday)(); break;
            default: cout << "Goodbye"; return;
        }
    }
}

int main() {
    DONE(get, day)();
    return 0;
}
