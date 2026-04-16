//Leetcode -> 881 ->  Boats to Save People
//time Complexity -> O(n)
//Space Complexity -> O(1)


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j= people.size()-1;
        int boat = 0;
        while(i<=j){
            if(people[i]+people[j]<= limit){
                i++;
                j--;
                boat++;
            }
            else{ //if(people[i]+people[j]>limit)
                j--;
                boat++;

            }
        }
        return boat;

        
    }
};
