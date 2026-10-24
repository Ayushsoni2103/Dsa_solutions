
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        int a1 = stoi(arriveAlice.substr(0, 2));
        int a2 = stoi(arriveAlice.substr(3, 2));

        int a3 = stoi(leaveAlice.substr(0, 2));
        int a4 = stoi(leaveAlice.substr(3, 2));

        int b1 = stoi(arriveBob.substr(0, 2));
        int b2 = stoi(arriveBob.substr(3, 2));

        int b3 = stoi(leaveBob.substr(0, 2));
        int b4 = stoi(leaveBob.substr(3, 2));

        int startAlice = a2;
        for (int i = 0; i < a1 - 1; i++) {
            startAlice += days[i];
        }
        int endAlice = a4;
        for (int i = 0; i < a3 - 1; i++) {
            endAlice += days[i];
        }
        int startBob = b2;
        for (int i = 0; i < b1 - 1; i++) {
            startBob += days[i];
        }
        int endBob = b4;
        for (int i = 0; i < b3 - 1; i++) {
            endBob += days[i];
        }
        int start = max(startAlice, startBob);
        int end = min(endAlice, endBob);
        if (start > end) {
            return 0;
        }
        return end - start + 1;
    }
};