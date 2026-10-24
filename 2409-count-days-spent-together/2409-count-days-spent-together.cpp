class Solution {
public:
    int dateofyear(string date){
        vector<int>days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month = stoi(date.substr(0,2));
        int day = stoi(date.substr(3,2));
        int total=day;
        for(int i = 0; i < month-1; i++){
            total+=days[i];
        }

        return total;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int alicearrival = dateofyear(arriveAlice);
        int alicedepart = dateofyear(leaveAlice);
        int bobarrival = dateofyear(arriveBob);
        int bobdepart = dateofyear(leaveBob);

        int start = max(alicearrival,bobarrival);
        int end = min(alicedepart,bobdepart);

        return max(0,end-start+1);    
    }
};