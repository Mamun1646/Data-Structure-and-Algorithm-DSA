class Solution
{
public:
    int fx[4] = {+1, -1, 0, 0};
    int fy[4] = {0, 0, +1, -1};
    bool valid(int sr, int sc, int n, int m)
    {
        if ((sr >= 0 and sr < n) and (sc < m and sc >= 0))
            return true;
        return false;
    }
    void bfs(vector<vector<int>> &image, int sr, int sc, int src_color, int color)
    {
        queue<pair<int, int>> q;
        int n = image.size();
        int m = image[0].size();

        q.push({sr, sc});
        int j = 0;
        while (!q.empty())
        {
            int first_front = q.front().first;
            int second_front = q.front().second;
            cout << first_front << " " << second_front << endl;
            q.pop();
            if (image[first_front][second_front] == src_color)
                image[first_front][second_front] = color;

            for (int i = 0; i < 4; ++i)
            {
                int x = first_front + fx[i];
                int y = second_front + fy[i];
                if (valid(x, y, n, m))
                {
                    if (image[x][y] == src_color)
                        q.push({x, y});
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int src_color = image[sr][sc];

        if (src_color != color)
        {
            bfs(image, sr, sc, src_color, color);
        }
        return image;
    }
};