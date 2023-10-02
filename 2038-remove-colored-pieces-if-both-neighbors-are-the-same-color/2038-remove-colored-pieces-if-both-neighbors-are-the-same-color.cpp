class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA = 0;
        int countB = 0;
        
        for(int i = 0; i < colors.length(); i++) {
            char x = colors[i];
            int count = 0;
            
            while (i < colors.length() && colors[i] == x) {
                i++;
                count++;
            }
            
            if (x == 'A') {
                countA += max(count - 2, 0);
            } else if (x == 'B') {
                countB += max(count - 2, 0);
            }
            
            i--;
        }

        return countA > countB;
    }
};