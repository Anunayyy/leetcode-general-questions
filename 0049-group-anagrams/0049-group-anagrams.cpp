class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;   // an unordered map to store the key=sorted string and value=vector containing all anagram.
        
        for(auto x: strs){
            string temp = x;                         // we traverse every element of strs ans sort it
            sort(temp.begin(), temp.end());
            
            umap[temp].push_back(x);                 //pushback the sorted string in the map
        }
        
        vector<vector<string>> ans;                 
        
        for(auto x: umap){                             //Then we will iterate through the map and store all these vectors into an another vector and                                                                return. //now simply put the elements  of second column of map in ans it as answer.
            ans.push_back(x.second);
        }
        return ans;
    }
};

/* The approach is based on the fact that on sorting all anagrams will result into the same string.
So we use a map with key= sorted string and value = vector containing all anagrams which on sorting will give the string in key.
Then we will iterate through the map and store all these vectors into an another vector and return it as answer.
*/ 
