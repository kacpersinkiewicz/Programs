#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compare_measures(const vector<int>& measures_1, const vector<int>& measures_2) 
{
    for (int i = 1; i < measures_1.size(); i++) //sorting by data value
    {
        if (measures_1[i] != measures_2[i]) 
        {
            return measures_1[i] < measures_2[i];
        }
    }
    return measures_1[0] < measures_2[0]; //sorting by index number
}

int main() 
{
    int measure_count;
    cin >> measure_count; // load number of measurements
    int kid_count;
    cin >> kid_count; // load number of children

    vector<vector<int>> measures;
    vector<int> current; // compleate data gathered by one child
    current.push_back(1); // the girl has index number of 1

    for (int i = 0; i < measure_count; i++) 
    {
        int value;
        cin >> value;
        current.push_back(value);
    }

    measures.push_back(current);

    for (int i = 0; i < kid_count-1; i++) 
    {
        int position;
        cin >> position;
        int new_value;
        cin >> new_value;
        current[0]++;
        current[position] = new_value;
        measures.push_back(current);
    }

    sort(measures.begin(), measures.end(), compare_measures);

    for (int i = 0; i < kid_count; i++) 
    {
        cout << measures[i][0] << ": ";
        for (int j = 1; j < measure_count; j++) 
        {
            cout << measures[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}