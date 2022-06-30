
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	int max = 0;
	int a, b, c, d, e, f, h, g;
	//cin >> a >> b >> c >> d >> e;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					for (e = 0; e < 2; e++)
					{
						for (f = 0; f < 2; f++)
						{
							for (g = 0; g < 2; g++)
							{
								for (h = 0; h < 2; h++)
								{
									if (((a - ((((b - c) - d) - e) - (f - g))) - h) > max)
									{
										max = ((a - ((((b - c) - d) - e) - (f - g))) - h);
										cout << "values : " << a << b << c << d << e << f << g << h << "\n";
										cout << "max : " << max << "\n\n";
									}
								}
							}
						}
					}
				}
			}
		}
	}
	//cout << max << "\n";

	return 0;
}

((?-((((?-?)-?)-?)-(?-?)))-?)