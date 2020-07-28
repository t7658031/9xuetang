#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
    //打印德碼西亞之力
    SetConsoleTitleA("sfsd");
    /** 傷害 */
    double value_attack = 58.88;
    /** 傷害成長值 */
    double value_attack_growth = 5; 
    /**攻擊距離 */
    double value_attack_distance = 172;

    cout << "德碼西亞之力:" << endl;
    cout << "傷害:" << value_attack << "(+" << value_attack_growth << ")\t" 
    << "攻擊距離:" << value_attack_distance <<endl;


    /**
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(float) << endl;


    //演示精確度浮點型和雙精度浮點型經度問題
    float numfloat = 10/3.0;
    double numdouble = 10/3.0;
    cout << fixed; //fixed，它表示浮点输出应该以固定点或小数点表示法显示
    cout << setprecision(10); //setprecision 即可以以一种新的方式显示。它将指定浮点数字的小数点后要显示的位数，而不是要显示的总有效数位数。
    cout << "numfloat=" << numfloat <<endl;
    cout << "numdouble=" << numdouble <<endl;
    **/

    return 0;
}