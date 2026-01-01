//lc 853
// positions, time 
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =speed.size();
        vector<pair<int, double>>cars;
        for(int i=0;i<n;i++){
            cars.push_back({position[i] ,(double) (target-position[i])/ speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<>());
        double maxTime=0;
        int fleet=0;
        for(auto it: cars){
            if(maxTime<it.second){
                fleet++;
                maxTime= it.second;
            }

        }
        return fleet;
    }
};
