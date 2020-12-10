#include <iostream>

using namespace std;

int main()
{
    int a=-1;
    if(a>=0)
    {
        //cau lenh neu gia tri khong am
        printf("%d duong", a);
    }
    else if (a==0)
    {
        //cau lenh gia tri duong
        printf ("a =0",a);
    }
     else
    {
        //câu lệnh giá trị âm
        printf("%d am",a);
    }
    getchar();
    return 0;
}
