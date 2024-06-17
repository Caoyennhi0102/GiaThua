

#include <iostream>
using namespace std;
int main()
{
    // Giai thừa nhân lên các số từ 0 đén đó 
    cout << "Chương Trình Tính Giai Thừa ";
    int SoNguyen, gt = 1;
    cout << "Nhập Số: ";
    cin >> SoNguyen;
    for (int i = 1; i <= SoNguyen; i++) {
        gt *= i;

    }
    cout << "Giai thừa: " << SoNguyen << "!=" << gt;
    cout << "\n Sử Dụng while\n";
    gt = 1;
    int j = 1;
    while (j <= SoNguyen) {
        gt *= j;
        j++;
        cout << "Giai thừa: " << SoNguyen << "!=" << gt;
       
    }
    cout << "Sử Dụng Do While";
    gt = 1;
    int k = 1;
    do {
        gt* k;
        k++;
    } while (k <= SoNguyen);
    cout << "Giai thừa: " << SoNguyen << "!=" << gt;
    return 0;
}

