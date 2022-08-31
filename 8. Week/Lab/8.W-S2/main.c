#include <stdio.h>
// Q2. Predict the output of following C programs.

enum State {Working = 0, Failed, Freezed};
enum State currstate = 2;;

enum State FindState() {
    return currstate;
}
int main() {
    (FindState() == Working) ? printf("Working"): printf("Not Working");
    return 0;
}
