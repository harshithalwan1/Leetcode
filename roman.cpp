#include<iostream>
#include<string>
using namespace std;
string intToRoman(int num) {
        string roman {};
        while(num>0){
            if(num>=1000){
                roman.push_back('M');
                num = num-1000;
            }
            else if(num >= 900){
                    roman.push_back('C');
                    roman.push_back('M');
                    num = num-900;
                }
            else if(num >= 500 ){
                roman.push_back('D');
                num = num-500;
            }
            else if(num >= 400){
                    roman.push_back('C');
                    roman.push_back('D');
                    num = num-400;
                }
            else if(num>=100){
                roman.push_back('C');
                num = num-100;
            }
            else if(num >= 90){
                    roman.push_back('X');
                    roman.push_back('C');
                    num = num-90;
                }
            else if(num >= 50){
                roman.push_back('L');
                num = num-50;
            }
            else if(num >= 40){
                    roman.push_back('X');
                    roman.push_back('L');
                    num = num-40;
                }
            else if(num >= 10){
                roman.push_back('X');
                num = num-10;
            }
            else if(num >= 9){
                    roman.push_back('I');
                    roman.push_back('X');
                    num = num-9;
                }
            else if(num >= 5){
                roman.push_back('V');
                num = num-5;
            }
            else if(num >= 4){
                    roman.push_back('I');
                    roman.push_back('V');
                    num = num-4;
            }
            else if(num>=1){
                roman.push_back('I');
                num = num-1;
            }
        }
        return roman;
    }

int main(){
    int num = 1994;
    string str = intToRoman(num);
    cout<<str;
}