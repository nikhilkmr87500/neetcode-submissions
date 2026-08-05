class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, vector<pair<int,string>>> store;
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = store.find(key);
        if(it != store.end()){
            
            auto& vals = it->second;
            int l = 0, r = vals.size() -1;
            int mid = 0;
            string result = "";
            while(l<=r){
                mid = l+(r-l)/2;
                if(vals[mid].first == timestamp) return it->second[mid].second;
                else if(it->second[mid].first > timestamp){
                    r = mid - 1;
                } else {
                    result = it->second[mid].second;
                    l = mid +1;
                }
            }
            // if(it->second[mid].first < timestamp){
            //     return it->second[mid].second;
            // } else return "";
            return result;
        } else{
            return "";
        }
    }
};
