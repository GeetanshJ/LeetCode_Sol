class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalChalk = accumulate(chalk.begin(), chalk.end(), 0L);
        int remaining = k % totalChalk;

        for (int i = 0; i < chalk.size(); ++i) {
            if (remaining < chalk[i]) {
                return i;
            }

            remaining -= chalk[i];
        }

        return 0;
    }
};
