



/*
Shahad Ali Anezi 2210003683
Jenan redha Alnakhli 2210003608
Zahraa mohammed Makki 2210003610 
*/



#include <iostream>

using namespace std;
float Newton_second()
{
    float a,m,F;
  cout<<" Welcome to Newton's second law \n ";
  cout<<"Enter the acceleration value:\n ";
  cin>>a;
  cout<<"Enter the mass value:\n ";
   cin>>m;
   F=m*a;
  cout<<" the force is:  ";
  return F;
    
}
float Ohms()
{
    float I,R,V;
    cout<<" Welcome to Ohm's law\n";
    cout<<"Enter the current value:\n ";
    cin>>I;
    cout<<"Enter the resistance value:\n ";
    cin>>R;
    V=I*R;
    cout<< " the voltage is: ";
    return V ;

}
float Hookes()
{
    float k,x,Fs;
    cout<<" Welcome to Hooke's law\n";
    cout<<"Enter the spring constant value:\n ";
    cin>>k;
    cout<<"Enter the spring stretch value:\n ";
    cin>>x;
    Fs=k*x;
    cout<<" the spring force is :  ";
    return Fs;
}
float acceleration()
{
    float vi,vf,ti,tf,a_;
    cout<<" Welcome to acceleration law law\n";
    cout<<"Enter the initial velocity value:\n ";
    cin>>vi;
    cout<<"Enter the final velocity value:\n ";
    cin>>vf;
    cout<<"Enter the initial time value:\n ";
    cin>>ti;
    cout<<"Enter the final time value:\n ";
    cin>>tf;
    a_=vf-vi/tf-ti;
    cout<< " the accelaration is :  ";
    return a_;
}




int main()
{
    int choice;
	string name;
	cout<<"HELLO!!"<<endl;
 cout<<"Please enter your name: ";
 getline(cin,name);
 cout<<"Welcome to our program "<<name<<endl;
    cout<< "Please choose the operation you want ";

    do {
        cout << "\nMenu:\n";
        cout << "1. Newton's second law\n";
        cout << "2. Ohm's law\n";
        cout << "3. Hooke's law\n";
        cout << "4. acceleration law\n";
        cout << "0. Exit\n";
        
        cin >> choice;

        switch (choice) {
            case 1:
               cout<<Newton_second();
                
                break;
            case 2:
                cout<<Ohms();
                break;
            case 3:
            cout<<Hookes();
                break;
            case 4:    
                cout<<acceleration();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice, please try again!\n";
                break;
        }
    } while (choice != 0);

    return 0;
}