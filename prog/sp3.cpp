#include <iostream>
using namespace std;
int main()
{
    int mas[2][5]=
    {
        {2, 2, -2, 2, 2},
        {2, 2, 2, -10, 2},
    };
    int c=0, sum=0;
    for (int i = 0; i < 2; i++)
        for (int j=0; j <5; j++)
        {
            {
                asm
                (
                ".intel_syntax noprefix\n\t"
                "mov eax, %1 \n\t"
                "mov ebx, %2 \n\t"
                "mul eax     \n\t"
                "add eax, ebx\n\t"
                "mov %0, eax \n\t"
                ".att_syntax\n\t"
         	: "=r" (sum)
		: "r" (mas[i][j]), "r" (sum)
		: "cc"
                );
            }
        }
    cout<<sum;
    cout<<endl;
    return 0;
}
