#include <iostream>
#include<cstring>
using namespace std;
class account
{
private:

    char name[20];
    string address;
    float id;
    float number;
    float initial_amount;


public:
    void getinfo()
    {
        cout<<"enter your name please : "<<endl;
        cin>>name;
        cout<<"enter your address please : "<<endl;
        cin>>address;
        cout<<"enter your national ID : "<<endl;
        cin>>id;
        cout<<"enter your telephone number : "<<endl;
        cin>>number;
    }


        void setIni_amount (float n)
        {
            initial_amount=n;
        }

        float getIni_amount()
        {
            return initial_amount;
        }



    };




class bank : public account
{
private:

    float amount;

public:
    void setAmount ( float a)
    {
        amount=a;
    }
    float getAmount()
    {
        return amount;
    }






};

int main()
{   int n;
    cout<<"welcome"<<endl;
    cout<<"To open a new account"<<endl;
    account a1;
    a1.getinfo();
    float initial_amount;
    cout<<"NOTE!!! the lowest an amount allowed to enter to create your account is 10000"<<endl;
        cout<<"enter your an amount you want "<<endl;
        cin>>initial_amount;
        a1.setIni_amount(initial_amount);
        while(initial_amount<10000)
        {
            cout<<" please enter an amount greater than 10000 "<<endl;
            cout<<"enter your an amount you want "<<endl;
            cin>>initial_amount;
        }

       cout<<" congratulation !!! "<<endl;
       cout<<"your account has been successfully activated "<<endl;
    bank b1;
    float amount;
    cout<< "Do you want to deposit or withdraw ??? "<<endl;
    cout<<"For deposit enter 1 ,please !!"<<endl;
    cout<<"For withdraw enter 2 ,please !!"<<endl;
    cout<<"If you do not want anything else enter 3"<<endl;
    cin>>n;
    if (n==1)
    {
        cout<<" OK!!, enter the amount you want to deposit"<<endl;
        cin>>amount;
        b1.setAmount(amount);
        cout<<" thank you , In your bank account now = "<<b1.getAmount()+a1.getIni_amount()<<endl;
    }
    else if (n==2)
    {
        cout<<" OK!!, enter the amount you want to withdraw "<<endl;
        cin>>amount;
        b1.setAmount(amount);
       cout<<" thank you , In your bank account now = "<<a1.getIni_amount()-b1.getAmount()<<endl;;
    }
   else if (n==3)
   {
    cout<<"Thanks , For Choosing Our Bank "<<endl;
       cout<<" We Are Always Here At Your Service "<<endl;
   }


}
