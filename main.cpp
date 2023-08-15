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

#define CALL(func, arg) (func(arg))
#define DONE(action, name) action ##_## name

void get_monday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_tuesday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_wednesday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_thursday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_friday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_saturday(const std::string &x) { cout << "This is: " << x << "\n"; }
void get_sunday(const std::string &x) { cout << "This is: " << x << "\n"; }

void get_day() {
    int userInput;
    while(true) {
        cout << "Enter the day of the week (1 - 7, or any other to exit): ";
        std::cin >> userInput;

        switch (userInput) {
            case(MONDAY):    DONE(get, monday)(MONDAY_NAME); break;
            case(TUESDAY):   DONE(get, tuesday)(TUESDAY_NAME); break;
            case(WEDNESDAY): DONE(get, wednesday)(WEDNESDAY_NAME); break;
            case(THURSDAY):  DONE(get, thursday)(THURSDAY_NAME); break;
            case(FRIDAY):    DONE(get, friday)(FRIDAY_NAME); break;
            case(SATURDAY):  DONE(get, saturday)(SATURDAY_NAME); break;
            // Можно даже так:
            // case(SUNDAY):    DONE(get, sunday)(SUNDAY_NAME); break;
            case(SUNDAY):    CALL(DONE(get, sunday), SUNDAY_NAME); break;
            default: cout << "Goodbye"; return;
        }
    }
}

int main() {
    DONE(get, day)();
    return 0;
}
