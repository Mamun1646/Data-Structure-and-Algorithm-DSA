class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        vector<vector<int>> v;
        int k = 0, l = 0;
        int size = mat.size() * mat[0].size();

        if (size != r * c)
            return mat;

        else
        {

            vector<int> v1(c);
            for (int i = 0; i < mat.size(); ++i)
            {

                for (int j = 0; j < mat[0].size(); ++j)
                {
                    v1[l] = (mat[i][j]);
                    l++;

                    if (l == c)
                    {
                        v.push_back(v1);
                        l = 0;
                    }
                }
            }
        }

        return v;
    }
};