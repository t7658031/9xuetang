#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

//using namespace std;
int main()
{
    //sizeof 用於測量數據長度
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(long double) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cout << sizeof(float) << std::endl;


    //演示精確度浮點型和雙精度浮點型經度問題
    float numfloat = 10/3.0;
    double numdouble = 10/3.0;
    std::cout << std::fixed; //fixed，它表示浮点输出应该以固定点或小数点表示法显示
    std::cout << std::setprecision(10); //setprecision 即可以以一种新的方式显示。它将指定浮点数字的小数点后要显示的位数，而不是要显示的总有效数位数。
    std::cout << "numfloat=" << numfloat <<std::endl;
    std::cout << "numdouble=" << numdouble <<std::endl;

    return 0;
}