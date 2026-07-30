class Solution {
public:
    int minimumPushes(string word) {
        int count = 1;
        int click = 0;
        for(int i = 0; i < word.size(); i++){
            if(count <= 8) click++;
            else if(count > 8 && count <= 16) click += 2;
            else if(count > 16 && count <= 24) click += 3;
            else click += 4;

            count++;
        }

        return click;
    }
};