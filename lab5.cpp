#include <iostream>
using namespace std;

int main() {
    int i,j,number,divider, digit;
    bool switcher;

    for(i=1000;i<10000;i++) {

        switcher = true;
        number = i;
        divider = 1;

        for (j=0;j<3;j++) {
            
            divider *= 10;
            number = i/divider;
            digit = (i/(divider/10))%10;

            while (number>0 && switcher) {
                if (number%10 == digit) {
                    switcher = false;
                } 
                else {
                    number = number/10;
                }    
            }
        }

        if(switcher) {
            cout << i << endl;
        }
    }

    return 0;

    system("pause");
}