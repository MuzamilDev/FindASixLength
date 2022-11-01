#include<iostream>
using namespace std;

int main()
{
    int large;

    cout<<"Enter the Distance of Six "<<endl;
    cin>>large;

    if(large>60&&large<75)
        cout<<"Huge Six"<<endl;

      else if (large>75&&large<100)
        cout<<"SkySkeeper "<<endl;

            else if (large>100)
        cout<<"Boom Boom "<<endl;

    return 0;
}
