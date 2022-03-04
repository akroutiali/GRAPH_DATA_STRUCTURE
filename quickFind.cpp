#include <iostream>
#include <vector>
using namespace std;
class UnionFind
{
    public :
    UnionFind(int val):root(val)
    {
        for(int i=0;i<val;i++)
        {
            root[i]=i;
        }
    }
    int find(int val)
    {
        return root[val];
    }
    void unionSet(int x,int y)
    {
        int rootx=find(x);
        int rooty=find(y);
        if(rootx != rooty)
        {
            for(int i=0;i<root.size();i++)
            {
                if(rooty==root[i])
                root[i]=rootx;
            }
        }
    }
    bool connected(int x,int y)
    {
        return find(x)==find(y);
    }
    private:
    vector<int> root;
};
int main()
{
      UnionFind uf(10);
    // 1-2-5-6-7 3-8-9 4
    uf.unionSet(1, 2);
    uf.unionSet(2, 5);
    uf.unionSet(5, 6);
    uf.unionSet(6, 7);
    uf.unionSet(3, 8);
    uf.unionSet(8, 9);
    cout << uf.connected(1, 5) << endl;  // true
    cout << uf.connected(5, 7) << endl;  // true
    cout << uf.connected(4, 9) << endl;  // false
    // 1-2-5-6-7 3-8-9-4
    uf.unionSet(9, 4);
    cout << uf.connected(4, 9) << endl;  // true
    

    return 0;
}

