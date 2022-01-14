#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char A, char B, char C)
{
    if(n==0)
    {
        return ;
    }
    tower_of_hanoi(n - 1, A, C, B); 
    cout << "Move disk " << n << " from rod " << A <<
                                " to rod " << B << endl; 
    tower_of_hanoi(n - 1, A, B, C); 

}

int main()
{
    int n;
    int s=1,h=2,d=3;
    cin>>n;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}