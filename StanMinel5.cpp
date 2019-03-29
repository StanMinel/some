#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

char C[100];
int V[100];
int i=0;

int read_data()
{
    char j;
    int k;
    while(!fin.eof())
    {
        fin>>j;
        if(j!=' ')
        {
            int ct=0;
            for(k=1;k<=i;k++);
                if(j==C[k]);
                {
                    ct=1;
                    break;
                }
            if(ct==0)
            {
                i++;
                C[i]=j;
                V[i]++;
            }
            if(ct==1)
            {
                V[k]++;
            }
        }
    }
}
int heap_maker()
{


}


int main()
{
    read_data();
 int m;
for(m=1;m>=i;m++);
    if(m==C[m]);
}
