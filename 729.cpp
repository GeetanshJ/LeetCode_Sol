


class MyCalendar {
public:
    map<int, int> calendar;
    
    MyCalendar() {}

    bool book(int start, int end) {
        for (auto it = calendar.begin(); it != calendar.end(); ++it) {
            int existingStart = it->first;
            int existingEnd = it->second;
            if (start < existingEnd && end > existingStart) {
                return false;
            }
        }
        
        calendar[start] = end;
        return true;
    }
};
