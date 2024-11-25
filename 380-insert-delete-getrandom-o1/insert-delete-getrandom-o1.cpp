class RandomizedSet {
public:
    unordered_map<int, int> valuesOfSet; 
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(valuesOfSet.find(val) != valuesOfSet.end()) return false;
        else{
            valuesOfSet[val] = 1;
            return true;
        }
        
    }
    
    bool remove(int val) {
        if(valuesOfSet.find(val) != valuesOfSet.end()){
            valuesOfSet.erase(val);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        int randomIndex = rand() % valuesOfSet.size();
        auto it = valuesOfSet.begin();
        advance(it, randomIndex);
        return it->first;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */