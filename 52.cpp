class Solution {
public:
    int count = 0;

    void solve(int n, int row,
               unordered_set<int>& cols,
               unordered_set<int>& diags,
               unordered_set<int>& antiDiags) {
        
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; col++) {
            int diag_id = row - col;
            int anti_diag_id = row + col;

            if (cols.count(col) || diags.count(diag_id) || antiDiags.count(anti_diag_id))
                continue;

            cols.insert(col);
            diags.insert(diag_id);
            antiDiags.insert(anti_diag_id);

            solve(n, row + 1, cols, diags, antiDiags);

            cols.erase(col);
            diags.erase(diag_id);
            antiDiags.erase(anti_diag_id);
        }
    }

    int totalNQueens(int n) {
        unordered_set<int> cols, diags, antiDiags;
        solve(n, 0, cols, diags, antiDiags);
        return count;
    }
};1