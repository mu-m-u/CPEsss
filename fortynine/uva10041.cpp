#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, t;
	vector<int> v;
	cin >> r;
	int len;
	while (r-- && cin >> len)
	{
		v.clear();
		for (int i = 0; i < len; ++i)
		{
			cin >> t;
			v.push_back(t);
		}
		sort(v.begin(), v.end());
		int mid = v[len / 2], ans = 0;
		for (int i : v)
			ans += abs(i - mid);
		cout << ans << endl;
	}
}
