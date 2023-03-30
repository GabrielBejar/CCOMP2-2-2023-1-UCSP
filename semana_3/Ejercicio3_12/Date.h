#include <iostream>

using namespace std;


class Date {

public:
    Date(int m, int d, int y) {
        if (m < 1 || m > 12) {
            month = 1;
        } 
        else {
            month = m;
        }
        day = d;
        year = y;
    }

    void setMonth(int m) {
        if (m < 1 || m > 12) {
            month = 1;
        } 
        else {
            month = m;
        }
    }

    void setDay(int d) {
        day = d;
    }

    void setYear(int y) {
        year = y;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        cout << month << "/" << day << "/" << year << endl;
    }

private:
    int month;
    int day;
    int year;
};
