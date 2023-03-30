#include "Date.h"

using namespace std;


int main() {
    Date date1(14, 30, 2022); //comprobación de rango

    Date date2(4, 15, 2023);

    date1.displayDate(); 
    date2.displayDate(); 

    return 0;
}
