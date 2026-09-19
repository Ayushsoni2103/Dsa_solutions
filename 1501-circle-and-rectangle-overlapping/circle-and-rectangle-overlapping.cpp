class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xi=0;
        int yi=0;
        if(y1>yCenter){
            yi=y1;
        }
        else if(y2<yCenter){
            yi=y2;
        }
        else{
           yi=yCenter; 
        }
            if(x1>xCenter){
            xi=x1;
        }
        else if(x2<xCenter){
            xi=x2;
        }
        else{
           xi=xCenter; 
        }
        int dis=sqrt(pow((xi-xCenter),2)+pow((yi-yCenter),2));
        if(dis>radius){
            return false;
        }
        return true;
    }
};