#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, word, most_freq;
        getline(cin, s);

        stringstream ss(s);
        unordered_map<string, pair<int, int>> freq;

        int max_count = 0;
        int prev_serial = INT_MAX;
        int serial = 0;

        // word -> count -> serial

        while (ss >> word)
        {
            serial++;
            if (freq.find(word) == freq.end())
                freq[word] = {1, serial};
            else
            {
                freq[word].first++;
                freq[word].second = serial;
            }

            int current_count = freq[word].first;
            int current_serial = freq[word].second;

            if (current_count > max_count)
            {
                max_count = current_count;
                most_freq = word;
                prev_serial = current_serial;
            }
            else if (current_count == max_count)
            {
                if (current_serial < prev_serial)
                {
                    most_freq = word;
                    prev_serial = current_serial;
                }
            }
        }

        if (!most_freq.empty())
        {

            cout << most_freq << " " << max_count << endl;
        }
    }
    return 0;
}