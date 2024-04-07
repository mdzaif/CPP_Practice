#include<iostream>
#include<string>
#include<sstream>//for stringstream
#include<cstdlib>//for atoi()
using namespace std;

//This section will cover string to number.
/*int main()
{
    //support negative value
    //avoid the alphabetic values.
    string str = "7";
    cout<<" I am a string " <<str<<endl;
    //convert the string value to an int value
    int num = stoi(str);// only for string to integer

    cout<<"I am a int "<<num<<endl;

    return 0;
}*/
/*int main()
{
    //support negetive value.
    //support int float double values.
    //avoid alphabetic values.
    stringstream ss;
    string str = "7";
    int num;
    ss<<str;
    ss>>num;
    cout<<num<<endl;
    return 0;
}*/
/* //second step of stringstream
int main() {
	string ticket = "2029";
	stringstream intTicket(ticket);
	int ticketNumber = 0;
	intTicket >> ticketNumber;
	cout << "Ticket number: " << ticketNumber;
}

 /*   int stringtoint(string str)
    {
        int temp = 0;
        for(int i = 0; i < str.length(); i++){
            //since ASCII value from '0'
            // to '9' are contiguous. So if we subtract
            // '0' from the ASCII value of a digit, we get
            // the integer value of the digit.
            temp = temp * 10 + (str[i] - '0');

        }
        return temp;
    }
    int main()
    {
    string str = "12345";
    int num = stringtoint(str);//this function only convert the positive values.
    cout<<num<<endl;
    return 0;
    }*/
/*int main()
{
    char str[] = "123";// only character array string.
    int num = atoi(str);//only for string to integer
    cout<<num;
    return 0;
}*/

// Now this section will cover number to string.
/*int main()
{
    int num = 20;
    string str = to_string(num);
    cout<<str<<endl;
    return 0;
}*/

/*int main()
{
    int num = 15;
    // creating a string stream object ss
    stringstream ss;
    ss<<num;
    // initialize the ss value in string
    string strnum = ss.str();
    cout<<strnum;
    return 0;
}*/
