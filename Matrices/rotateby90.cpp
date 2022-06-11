// link: https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1
// ANTICLOCK WITHOUT XTRA SPACE
// RATTA

void rotate(vector<vector<int>> &m)
{

    {
        int n = m[0].size();

        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i; j < n - 1 - i; j++)
            {
                int t = m[i][j];
                m[i][j] = m[j][n - 1 - i];
                m[j][n - 1 - i] = m[n - 1 - i][n - 1 - j];
                m[n - 1 - i][n - 1 - j] = m[n - 1 - j][i];
                m[n - 1 - j][i] = t;
            }
        }
    }
}

// CLOCK
//  TRANSPOSE + REVERSE EACH ROW