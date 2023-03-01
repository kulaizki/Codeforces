// unfinished
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, r, q;
    cin >> n >> r >> q;

    unordered_map<string, int> cost_from_scratch;
    unordered_map<string, vector<pair<string, int>>> recipe;

    for (int i = 0; i < n; i++) 
	{
        string name;
        int cost;
        cin >> name >> cost;
        cost_from_scratch[name] = cost;
    }

    for (int i = 0; i < r; i++) 
	{
        string res, req;
        int m;
        cin >> res >> req >> m;
        recipe[res].push_back(make_pair(req, m));
    }

    while (q--) 
	{
        string name;
        cin >> name;

        unordered_map<string, int> min_cost;
        min_cost[name] = cost_from_scratch[name];

        unordered_set<string> to_process = {name};

        while (!to_process.empty()) {
            string curr_star = *to_process.begin();
            to_process.erase(to_process.begin());

            if (recipe.find(curr_star) != recipe.end()) 
			{
                for (auto p: recipe[curr_star]) {
                    string req_star = p.first;
                    int req_cnt = p.second;

                    int total_cost = ((min_cost[curr_star] + req_cnt - 1) / req_cnt) * min_cost[req_star];
                    if (min_cost.find(req_star) == min_cost.end() || total_cost < min_cost[req_star]) 
					{
                        min_cost[req_star] = total_cost;
                        to_process.insert(req_star);
                    }
                }
            }
        }

        cout << min_cost[name] << "\n";
    }

    return 0;
}

