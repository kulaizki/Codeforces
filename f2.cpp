#include <bits/stdc++.h>

typedef unsigned long ul;

using namespace std;

int main() {
    
    ios::sync_with_stdio(0); cin.tie(0);
	
	int n, r, q;
	cin >> n >> r >> q;
	
	unordered_map<string, ul> stars;
	for (int i = 0; i < n; ++i)
	{
		string name;
		ul value;
		cin >> name >> value;
		stars[name] = value;
	}

    ul fused = 0;
	unordered_map<string, ul> fuse_results;
	for (int i = 0; i < r; ++i)
	{
		string res, req;
		ul m;
		cin >> res >> req >> m;
        ul fuse = stars[req] * m;
        if (fuse < stars[res]) stars[res] = fuse;
        (fuse_results[res]) ? fuse_results[res] += fuse : fuse_results[res] = fuse;
	}
	
	string color;
	cin >> color;

    ul fused = 0;
    for (const auto& it: fuse_results)
    {
        cout << "Results = " << it.first << ": " << it.second << '\n';
        if (it.first != color && it.second < stars[it.first])
            stars[it.first] = it.second; 
        fused += it.second;
        cout << "Fused: " << fused << " it.second: " << it.second << '\n';
    }

    for (const auto& it: stars)
        cout << "Stars = " << it.first << ": " << it.second << '\n';

    cout << "Color: " << color << '\n';
    cout << "Scratch: " << stars[color] << '\n';
    cout << "Fused: " << fused << '\n';

    cout << min(stars[color] * q, fused * q);
}

