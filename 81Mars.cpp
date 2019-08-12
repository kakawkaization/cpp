#include <iostream>
using namespace std;

int main() {
    double distance;
    double lightspeed;
    double delay;
    double delay_in_min;

    distance = 34000000.0;
    lightspeed = 186000.0;

    delay = distance / lightspeed;

    cout << "Time delay when talking with Mars: " <<
        delay << " seconds.\n";

    delay_in_min = delay / 60.0;

    cout << "It is " << delay_in_min << " minutes.\n";

    cout << "Time delay waiting for response from Mars: " <<
        delay_in_min * 2 << " minutes.\n";

    return 0;
}
