class MyCalendarThree {
public:
    map<int,int>mp; //create a map
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        
        mp[start]++;
        mp[end]--;
        
        int mainans = 0;
        int temp = 0;
        for(auto [i,j] : mp)
        {
            temp += j;
            mainans = max(mainans,temp);
        }
        
        return mainans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */