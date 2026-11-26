class Solution {
public:
    bool canAliceWin(int n) {
        bool aliceTurn = true;
        int remove = 10;

        while (n >=remove) {
            n -= remove;
            remove--;

            aliceTurn = !aliceTurn;
        }

        return !aliceTurn;
    }
};