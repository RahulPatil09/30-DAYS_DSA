/*#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a Value:";
    double value;
    cin>> value;
    cout<<value;
    return 0;
}
    */

//Write a program to convert a temperture from fahrenheit to celcius.//
#include<iostream>
using namespace std;

int main() {
    cout<<"Faherenheit:";
    int fahreheit;
    cin>>fahreheit;
    double celsius =(fahreheit-32)/1.8;
    cout<<celsius;
    return 0;
}