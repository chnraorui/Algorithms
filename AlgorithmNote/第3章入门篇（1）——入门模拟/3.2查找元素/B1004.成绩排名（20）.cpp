#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string name, id, maxname, minname, maxid, minid;
    int score, maxn = -1, minn = 101;
    for (int i = 0; i < n; i++) {
        cin >> name >> id >> score;
        if (score > maxn) {
            maxn = score;
            maxname = name;
            maxid = id;
        }
        if (score < minn) {
            minn = score;
            minname = name;
            minid = id;
        }
    }
    cout << maxname << " " << maxid << endl;
    cout << minname << " " << minid;
    return 0;
}//TODO remember