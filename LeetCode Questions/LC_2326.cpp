
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {

        // Step 1: Initialize the matrix with -1
        // Unfilled cells will remain -1 if the list ends early.
        vector<vector<int>> matrix(m, vector<int>(n, -1));

        // Step 2: Initialize the spiral boundaries
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        // Pointer to traverse the linked list
        ListNode *temp = head;

        // Step 3: Fill the matrix in spiral order
        while (temp != nullptr &&
               minr <= maxr && minc <= maxc)
        {

            // 1. Left -> Right across the top row
            for (int j = minc; j <= maxc && temp != nullptr; j++)
            {
                matrix[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;

            // 2. Top -> Bottom down the right column
            for (int i = minr; i <= maxr && temp != nullptr; i++)
            {
                matrix[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;

            // 3. Right -> Left across the bottom row
            for (int j = maxc; j >= minc &&
                               minr <= maxr && temp != nullptr;
                 j--)
            {
                matrix[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;

            // 4. Bottom -> Top up the left column
            for (int i = maxr; i >= minr &&
                               minc <= maxc && temp != nullptr;
                 i--)
            {
                matrix[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }

        // Step 4: Return the completed matrix
        return matrix;
    }
};
