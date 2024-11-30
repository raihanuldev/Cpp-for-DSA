#include <bits/stdc++.h>
using namespace std;

class Criketer{
    public:
    int jursry;
    string country_name;
    Criketer(int jursry,string country_name)
    {
        this->country_name = country_name;
        this->jursry = jursry;
    }
};

int main()
{
    Criketer* dhoni =new Criketer(100,"India");
    Criketer* kholi =new Criketer(18,"India");
    // kholi->jursry = dhoni->jursry;
    // kholi->country_name = dhoni->country_name;
    *kholi = *dhoni;
    delete dhoni;
    cout <<"MR KHOLI > "<< kholi->country_name << " " <<kholi->jursry;
    return 0;
}

//great bujte parsi