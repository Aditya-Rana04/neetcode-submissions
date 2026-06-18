class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>time;
        int n=position.size();
        vector<pair<int,double>>v;
        for(int i=0;i<n;i++){
            time[i]=(double)( target-position[i])/speed[i];
            v.push_back({position[i],time[i]});
        }
        sort(v.rbegin(),v.rend());
        int fleets=0;
        double maxtime=0;
        for(auto it: v){
            if(it.second>maxtime){
                fleets+=1;
                maxtime=it.second;
            }
        }
        return fleets;


        
    }
};
