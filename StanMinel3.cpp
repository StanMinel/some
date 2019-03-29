
#include<iostream>
#include<math.h>
using namespace std;

class node{
                 public :
                 double my_info;
                 class node *my_left;
                 class node *my_right;
                 };

node *awesome_tree=NULL;
node *make_some_tree(node *this_one,double new_one)
{
}
node *find_devil_node(node *this_tree,int tricky_value,node *macho_father)
{
}
int RSD(node *this_one)
{
if (this_one!=NULL) {
                            return 1+RSD(this_one.my_left);
                            return 1+RSD(this_one.my_right);
                                  }
return 0;
}

int main()
{
int n=5;
int values[10]={235,55,889,31,67};
for(int i=0;i<n;i++)
awesome_tree=make_some_tree(awsome_tree,values[i]);
node *forked;
node *macho_father;
forked=find_devil_node(awesome_tree,55,macho_father);
cout<<"Dezechilibrium "<<abs(RSD(forked->left)-RSD(forked->right));
}
