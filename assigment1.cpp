#include <iostream>
#include <vector>

using namespace std;

bool is_perfect_matrix(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int ref_element = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Check if the current element is on the top-left to bottom-right diagonal
            if (i == j) {
                // Check if this is the first diagonal element
                if (j == 0) {
                    // Store the diagonal element as the reference element
                    ref_element = matrix[i][j];
                } else {
                    // Check if the current diagonal element is the same as the reference element
                    if (matrix[i][j] != ref_element) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    // Test the is_perfect_matrix function with some example matrices
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 1, 2}, {5, 4, 1}};
    vector<vector<int>> matrix2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix3 = {{1, 2}, {3, 1}, {4, 3}};
    cout << "matrix1 is " << (is_perfect_matrix(matrix1) ? "perfect" : "not perfect") << endl;
    cout << "matrix2 is " << (is_perfect_matrix(matrix2) ? "perfect" : "not perfect") << endl;
    cout << "matrix3 is " << (is_perfect_matrix(matrix3) ? "perfect" : "not perfect") << endl;
    return 0;
}



