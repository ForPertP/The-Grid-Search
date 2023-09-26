#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'gridSearch' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY G
 *  2. STRING_ARRAY P
 */

string gridSearch(vector<string> G, vector<string> P)
{
    bool state = false;

    for (int i = 0; i < G.size(); ++i)
    {
        for (int j = 0; j < G[i].size(); ++j)
        {
            if (G[i][j] == P[0][0])
            {
                state = true;
                for (int k = 0; k < P.size(); ++k)
                {
                    for (int l = 0; l < P[k].size(); ++l)
                    {
                        if (G[i+k][j+l] != P[k][l])
                        {
                            state = false;
                        }

                        if (false == state)
                        {
                            break;
                        }
                    }

                    if (false == state)
                    {
                        break;
                    }
                }
                if (true == state)
                {
                    return "YES";
                }
            }
        }
    }

    return "NO";
}
