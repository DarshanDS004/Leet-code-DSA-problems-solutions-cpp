class Solution {
public:
    double angleClock(int hour, int minutes) {

        double hour_angle=30*hour+0.5*minutes;

        double angle=6*minutes;

        double ans=abs(hour_angle-angle);
        double small=360.00-ans;

        if(ans<small){
            return ans;
        }
        else{
            return small;
        }
        
    }
};