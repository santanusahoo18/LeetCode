class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0;
        int height=0;
        for(int i=0;i<gain.size();i++){
            altitude=altitude+gain[i];
            height=max(height,altitude);
        }
        return height;
        
        
    }
};