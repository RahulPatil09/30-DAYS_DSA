//Started revise the c++ Basic concept at 16 August 2025//

/*#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    int temp=a;
    a=b;
    b=temp;
    cout<<temp;
    return 0;
}
*/

//Constant//

/*#include<iostream>
using namespace std;

int main(){
    const double pi=3.14;
    cout<<pi;
}
*/

//Matematical expression//
/*
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=3;
    int z= x % y;
    cout<<z;
    return 0;
}
*/

//increment opertaor//
/*
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=x++;
    //int z=++x;
    cout<<x<<endl;
    cout<<y<<endl;
    //cout<<z<<endl;
}
*/
/*
#include<iostream>
using namespace std;

int main(){
    double x=10;
    double y=5;
    double z = (x+10)/(3*y);
    cout<<z;
}
*/

//Cout << uses
/*
#include<iostream>
using namespace std;

int main(){
    double sales = 95000;
    cout<<"Sales: $"<< sales <<endl;

    const double stateTaxRate =.04;
    double stateTax = sales * stateTaxRate;
    cout<<"State Tax: $"<< stateTax <<endl;

    
    const double countyTaxRate =.02;
    double countyTax = sales * countyTaxRate;
    cout<<"State Tax: $"<< countyTax <<endl;

    double totalTax = stateTax + countyTax;
    cout<<"Total Tax : $"<<totalTax;

    return 0;    
}
*/