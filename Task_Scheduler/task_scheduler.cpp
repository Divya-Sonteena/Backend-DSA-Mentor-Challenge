class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        for (char task : tasks) {
            freq[task]++;
        }
        // Find the max task frequency
        int maxFreq = 0;
        for (auto it : freq) {
            maxFreq = max(maxFreq, it.second);
        }
        int countMax = 0;//count max frequency
        for (auto it : freq) {
            if (it.second == maxFreq) {
                countMax++;
            }
        }
        int minTime = (maxFreq - 1) * (n + 1) + countMax;//minimum time required
        return max(minTime, (int)tasks.size()); //maximum total tasks or calculated time 
    }
};
