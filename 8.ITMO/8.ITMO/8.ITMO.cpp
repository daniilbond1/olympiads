#include <vector>
#include<math.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef pair <int, int> Segment;



int main()
{
    vector<Segment> divider;

    int k=0; 
    int a = 0;
    int b = 0;

    cin >> a >> b;
    //можно еще оптимизировать алгоритм: после нахождения делителя можно делить N на получившееся число, это будет еще один делитель.
    //(пример: число 57, один из делителей - 3, теперь делим 57 на 3 и получаем еще один делитель, равный 19).

    for (int m = a;m <= b;m++) {
        k = 0;

        for (int i = 1; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                k++;
            }
        }
        divider.push_back(make_pair(k,m));
    }

    sort(divider.begin(), divider.end());

    for (int i = 0; i < divider.size(); i++) {
        cout << divider[i].second << ' ';
    }
    return 0;
}

