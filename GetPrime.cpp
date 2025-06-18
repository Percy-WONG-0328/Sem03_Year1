#include <iostream>
#include <cmath>
using namespace std;

bool CheckPos(int num){
    if ((num <= 0) || (num > 100))
        return false;
    return true;
}

int CheckPrime(int num){
    if (CheckPos(num)){
        int j = 2;
        int count = 0;

        // 先统计质数数量
        while (j <= num){
            int i = 2;
            bool Prime = true;
            while (i <= sqrt(j)){
                if (j % i == 0){
                    Prime = false;
                    break;
                }
                i++;
            }
            if (Prime){
                count++;
            }
            j++;
        }

        cout << count << " prime numbers found!" << endl;

        // 再输出质数列表
        cout << "List of prime numbers between 0 and " << num << ": ";
        j = 2;
        int print = 0;
        while (j <= num){
            int i = 2;
            bool Prime = true;
            while (i <= sqrt(j)){
                if (j % i == 0){
                    Prime = false;
                    break;
                }
                i++;
            }
            if (Prime){
                if (print > 0) cout << ", ";
                cout << j;
                print++;
            }
            j++;
        }
        cout << endl;

        return count;
    }

    cout << "Invalid input!" << endl;
    return -1;
}

int main(){
    while (true){
        cout << "Please enter a positive integer(q to quit): ";
        char enter[10];
        cin >> enter;

        if (enter[0] == 'q' || enter[0] == 'Q'){
            cout << "Quit!" << endl;
            break;
        }

        int num = atoi(enter);
        CheckPrime(num); 
    }

    return 0;
}
