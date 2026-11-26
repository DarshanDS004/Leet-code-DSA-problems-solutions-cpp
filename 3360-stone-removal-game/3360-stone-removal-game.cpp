class Solution {
public:
    bool canAliceWin(int n) {
        bool alice=true;
        int remove=10;
        int stones=n;

        while(stones>=remove){
            stones-=remove;
            remove--;
            alice=!alice;

        }    
        return !alice;    
    }
};