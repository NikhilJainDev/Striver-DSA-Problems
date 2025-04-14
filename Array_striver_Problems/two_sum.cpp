// Leetcode Solution - Most Optimized Approach of Leetcode Solution - O(N)


// class Solution {
//     public:
//         vector<int> twoSum(vector<int>& arr, int target) {
//             unordered_map<int, int> m;
//             vector<int> ans;   // Used to store the answer 
//             for(int i=0; i<arr.size(); i++){
//                 int first = arr[i];
//                 int second = target - first;
    
//                 if(m.find(second)!= m.end()){
//                     ans.push_back(i);
//                     ans.push_back(m[second]);
//                     break;
//                 }
//                 m[first] = i; // put these in the map 
//             }
//             return ans;
    
//         }
//     };