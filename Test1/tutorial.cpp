#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class HRML
{
  public:
    explicit HRML(int n);

  private:
    vector<string> content;
    int m_N;
};

HRML::HRML(int n) : m_N(n)
{
    string str;
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        if (str.length() != 0)
            this->content.push_back(str);
    }
}

class QUERY 
{
 public:
    explicit QUERY(int q);

  private:
    vector<string> query;
    int m_Q;
};

QUERY::QUERY(int q) : m_Q(q)
{
    string str;
    for (int i = 0; i < q; i++)
    {
        getline(cin, str);
        if (str.length() != 0)
            this->query.push_back(str);
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;

    cin >> n >> q;
    cin.ignore();
    HRML hrml(n);
    QUERY queries(q);
    return 0;
}
