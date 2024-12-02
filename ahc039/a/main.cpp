#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<int>>;
using ll = long long;

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rep2(i, a, n) for(ll i = a; i < n; i++)

int main()
{
    ifstream inputFile("main.txt");

    ll n;
    inputFile >> n;

    ll size = pow(10, 5);

    vector<vector<ll>> arr1(size, vector<ll>(size, 0));
    vector<vector<ll>> arr2(size, vector<ll>(size, 1));

    rep(i, n){
        ll a, b;
        inputFile >> a >> b;

        arr1[a][b] ++;
    }
    rep(i, n){
        ll a, b;
        inputFile >> a >> b;

        arr1[a][b] --;
    }

    rep(i, size / 80){
        rep(j, size / 80){
            ll area_score = 0;

            rep2(di, i, i * 80){
                rep2(dj, j, j * 80){
                    area_score += arr1[di][dj];
                }
            }

            if(area_score <= 0){
                rep2(di, i, i * 80){
                    rep2(dj, j, j * 80){
                        arr2[di][dj] = 0;
                    }
                }
            }
        }
    }

    vector<pair<ll, ll>> points;

    pair<ll, ll> now;

    bool flag = 0;
    rep(i, size){
        rep(j, size){
            if(arr2[i][j] == 1){
                now = make_pair(i, j);
                points.push_back(now);
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }

    int direction = 3;

    while(1){
        if(direction == 0){
            if(now.second-1 >= 0 && arr2[now.first][now.second-1] == 1) now = {now.first-1, now.second};
            else if(arr2[now.first][now.second-1] == 0){
                if(now.first-1 >= 0 && arr2[now.first-1][now.second] == 1){
                    now = {now.first-1, now.second};
                    points.push_back(now);
                    direction = 2;
                }
                else if(now.first+1 < size && arr2[now.first+1][now.second] == 1){
                    now = {now.first+1, now.second};
                    points.push_back(now);
                    direction = 3;
                }
            }
        }
        else if(direction == 1){
            if(now.second+1 < size && arr2[now.first][now.second+1] == 1) now = {now.first, now.second+1};
            else if(arr2[now.first][now.second+1] == 0){
                if(now.first-1 >= 0 && arr2[now.first-1][now.second] == 1){
                    now = {now.first-1, now.second};
                    points.push_back(now);
                    direction = 2;
                }
                else if(now.first+1 < size && arr2[now.first+1][now.second] == 1){
                    now = {now.first+1, now.second};
                    points.push_back(now);
                    direction = 3;
                }
            }
        }
        else if(direction == 2){
            if(now.first-1 >= 0 && arr2[now.first-1][now.second] == 1) now = {now.first-1, now.second};
            else if(arr2[now.first-1][now.second] == 0){
                if(now.second+1 < size && arr2[now.first][now.second+1] == 1){
                    now = {now.first, now.second+1};
                    points.push_back(now);
                    direction = 1;
                }
                else if(now.second-1 >= 0 && arr2[now.first][now.second-1] == 1){
                    now = {now.first, now.second-1};
                    points.push_back(now);
                    direction = 0;
                }
            }
        }
        else if(direction == 3){
            if(now.first+1 < size && arr2[now.first+1][now.second] == 1) now = {now.first+1, now.second};
            else if(arr2[now.first+1][now.second] == 0){
                if(now.second+1 < size && arr2[now.first][now.second+1] == 1){
                    now = {now.first, now.second+1};
                    points.push_back(now);
                    direction = 1;
                }
                else if(now.second-1 >= 0 && arr2[now.first][now.second-1] == 1){
                    now = {now.first, now.second-1};
                    points.push_back(now);
                    direction = 1;
                }
            }
        }   
        if(now.first == points[0].first && now.second == points[0].second){
            points.pop_back();
            break;
        }
    }

    for(auto i : points){
        cout << i.first << " " << i.second << endl;
    }
}