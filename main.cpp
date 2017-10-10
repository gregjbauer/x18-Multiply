#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
    vector <vector <int> >table;
    table.resize(13);
    for (int row = 1; row < table.size(); row++)
    {
        table[row].resize(13);
        for (int col = 1; col < table[row].size(); col++)
        {
        int sum = row * col;
        table[row][col] = sum;
        //table.push_back(sum);
        //do{
        //    cout<<table[row][col];
        //  } while(col < table.size());
        if (sum < 10)
        {
        cout<<"   "<<sum;
        }
        else if (sum > 10 && sum <100)
        {
        cout<<"  "<<sum;
        }
        else
        {
        cout<<" "<<sum;
        }}
    cout<<endl;
    }
return 0;
}






