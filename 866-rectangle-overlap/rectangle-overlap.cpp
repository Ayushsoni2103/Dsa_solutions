class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int x2=rec1[1];
        int x3=rec1[2];
        int x4=rec1[3];
        int y1=rec2[0];
        int y2=rec2[1];
        int y3=rec2[2];
        int y4=rec2[3];
  if(x3>y1&&x4>y2){
            if(y3>x1&&y4>x2){
                return true;
            }
         
        }
        return false;
    }
};