#include <iostream>

using namespace std;

// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

int arr[100];

int main() {
    int n;
    int target;
    int count = 0;
    cin >> n ;

    for (int i = 0; i < n; i++) {
        scanf("%d", arr+i); 
    }

    scanf ("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) count ++;
    }

    cout << count << endl;

    return 0;
}