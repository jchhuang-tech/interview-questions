class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        for(char c : s){
            umap[c]++;
        }
        for(char c : t){
            umap[c]--;
        }
        for(auto it=umap.begin(); it!=umap.end(); it++){
            if(it->second != 0){
                return false;
            }
        }
        return true;
    }
};
