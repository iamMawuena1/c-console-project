//VALLRY VIEW PAYMENT SYSTEM, WRITTEN IN C++, TO BE DISPLAYED IN THE CONSOLE

#include <iostream>

using namespace std;


//FUNCTION PROTOTYPE FOR THE MAIN FUNCTION //function declaration
void venture();         
void contactUs(); 
void school();

//declaring funtions (Funtion Prototyping for the venture items)
void transport();
void bakery();
void guestHouse();
void generalWork();
void donation();
void confirm();
void campuses();
void accountConfirmation();
void preSch();
void lowerPrimary();
void upperPrimary();
void juniorHigh();

//main function
int main()
{
    int option;

    cout<<"*******************************************************************************************************************"<<endl;
    cout<<"*******************************************************************************************************************"<<endl;
    cout<<"*****************************                 WELCOME TO VALLEY VIEW UNIVERSITY               *********************"<<endl;
    cout<<"*****************************                         PAYMENT PORTAL                          *********************"<<endl;
    cout<<"*******************************************************************************************************************"<<endl;
    
    cout<<"Select your option\n\n";
    cout<<"\t\t>> 1 SCHOOL"<<endl;
    cout<<"\t\t>> 2 VENTURE"<<endl;
    cout<<"\t\t>> 3 CONTACT US\n\n";
    cout<<"*******************************************************************************************************************"<<endl;
    cout<<"*****************************                            221IT01000515                        *********************"<<endl;
    cout<<"*****************************                          KUADEY YENAH KWESI                     *********************"<<endl;
    cout<<"*******************************************************************************************************************"<<endl;

    cin>>option;

    switch (option)
    {
        case 1:
        school();
        break;
        
        case 2:
        venture();
        break;

        case 3:
        contactUs();
        break;
    
        default:
        cout<<"INVALID ENTRY, PLEASE ENTER CORRECT OPTION"<<endl;
        break;
    }

}


//function definition
void contactUs()        // function defiintion for menu 3.
{
    cout<<"Location: Mile 19 off the Adenta - Dodowa Road"<<endl;
    cout<<"Call us on +233501331395"<<endl;
    cout<<"Web: http://vvu.edu.gh"<<endl;
    cout<<"Postal: P.o.Box AF 595 Adentan"<<endl;    
}

void venture()      //function definition for menu 2.
{

    int choice;     //variable declaration

    cout<<"\t\t>> 1 BAKERY"<<endl;
    cout<<"\t\t>> 2 TRANSPORT"<<endl;
    cout<<"\t\t>> 3 GUEST HOUSE"<<endl;
    cout<<"\t\t>> 4 GENERAL WORK"<<endl;
    cout<<"\t\t>> 5 DONATION"<<endl;

    cin>>choice;

    switch (choice)
    {
    case 1:
        bakery();
        break;
    
    case 2:
        transport();
        break;

    case 3:
        guestHouse();
        break;  

    case 4:
        generalWork();
        break;  

    case 5:
        donation();
        break;

    default:
        cout<<"Invalid entry, try again"<<endl;
        break;
    }
}



void bakery()
{    
    string invoice, reference;      //variable declaration
    int invoiceNumber,amount,choice;
    
    menu:
    cout<<"\t\t>>1 Pay with invoice"<<endl;
    cout<<"\t\t>>2 Pay on the Go"<<endl;

    cin>>choice;

    switch (choice)
    {
        case 1:
        cout<<"Please enter invoice number"<<endl; //Enter 3 letters (VVU), then numbers
        cin>>invoice;

        cout<<"Please enter amount"<<endl;
        cin>>amount;

        cout<<amount<<" cedis paid with invoice number "<<invoice << invoiceNumber;
        break;

        case 2:
        cout<<"Please enter amount"<<endl;
        cin>>amount;

        cout<<"Enter Reference"<<endl;
        cin>>reference;

        cout<<"Sum of "<<amount<<" to be paid with reference "<<reference
            <<" Thank you"<<endl;
        break;
        default:
        cout<<"Invalid entry, try again"<<endl;
        goto menu;
        break;
    }
}


void transport()
{
    int choice,amount;
    string answer;

    menu:
    cout<<"\t\t>>1 Car Rental"<<endl;
    cout<<"\t\t>>2 Water Supply"<<endl;
    cout<<"\t\t>>3 Workshop"<<endl;
    cout<<"\t\t>>4 Washing Bay"<<endl;    

    cin>>choice;

    switch (choice)
    {
        case 1:
        cout<<"Please enter the name of institution/individual"<<endl;
        cin>>answer;

        cout<<"Please enter amount"<<endl;
        cin>>amount;

        //confirmation of payment
        cout<<"Confirm Car Rental Payment: " 
            <<answer 
            <<" with an amount of "
            <<amount
            <<" cedis."
            <<endl;
        
        cout<<"\t\t>> Yes"<<endl;
        cout<<"\t\t>> No"<<endl;
        confirm();
        break;
    
        case 2:
        cout<<"Please enter the name of institution/individual"<<endl;
        cin>>answer;

        cout<<"Please enter amount"<<endl;
        cin>>amount;

        //confirmation of payment
        cout<<"Confirm Water Supply Payment: "
            <<answer
            <<" with an amount of "
            <<amount
            <<" cedis"
        <<endl;
        
        cout<<"\t\t>> Yes"<<endl;
        cout<<"\t\t>> No"<<endl;
        confirm();
        break;

        case 3:
        cout<<"Please enter the name of institution/individual"<<endl;
        cin>>answer;

        cout<<"Please enter amount"<<endl;
        cin>>amount;

        cout<<"Confirm Workshop Payment: "
            <<answer
            <<" with an amount of "
            <<amount
            <<" cedis"
        <<endl;
        
        //Payment confirmation
        cout<<"\t\t>> Yes"<<endl;
        cout<<"\t\t>> No"<<endl;
        confirm();
        break;

        case 4: 
        cout<<"Please enter the name of institution/individual"<<endl;
        cin>>answer;

        cout<<"Please enter amount"<<endl;
        cin>>amount;

        cout<<"Confirm Washing Bay Payment: "
            <<answer
            <<" with an amount of"
            <<amount
            <<" cedis."
        <<endl;
        
        cout<<"\t\t>> Yes"<<endl;
        cout<<"\t\t>> No"<<endl;
        confirm();
        break;

        default:
        cout<<"Invalid entry, please try again"<<endl;
        break;
    }
}

void guestHouse()
{
    string answer;
    int amount,choice;

    cout<<"Please enter name of institution/individual: "<<endl;
    cin>>answer;

    cout<<"Please enter the amount"<<endl;
    cin>>amount;

    cout<<"Confirm payment of guest house: "
        <<answer
        <<" with amount of "
        <<amount
    <<endl;

    cout<<"\t\t>> Yes"<<endl;
    cout<<"\t\t>> No"<<endl;
    confirm();
}

void generalWork()
{
    string answer;
    int amount,choice;

cout<<"Please enter name of institution/individual: "<<endl;
    cin>>answer;

    cout<<"Please enter the amount"<<endl;
    cin>>amount;

     cout<<"Confirm payment for general works: "
        <<answer
        <<" with amount of "
        <<amount
    <<endl;

    cout<<"\t\t>> Yes"<<endl;
    cout<<"\t\t>> No"<<endl;
    confirm();
    
}

void donation()
{
    int choice, amount; // Declaring variable
    string name,churchConference,localChurch;
    

    cout<<"Select your Donation option"<<endl;

    menu:
    cout<<">>\t\t>>1 VVU Church Building"<<endl;
    cout<<">>\t\t>>2 Back"<<endl;

    cin>>choice;

    switch (choice)
    {
        case 1:
        int choice;

        cout<<"\t\t>>1 Adventist"<<endl;
        cout<<"\t\t>>2 Non Adventist"<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1:
            cout<<"Please enter your name"<<endl;
            cin>>name;
            cout<<"Please enter the name of your Church Conference"<<endl;
            cin>>churchConference;
            cout<<"Please enter the name of your local Church"<<endl;
            cin>>localChurch;
            cout<<"Please enter donation Amount"<<endl;
            cin>>amount;

            cout<<"Confirm Church Donation"
                <<"Name: "<<name
                <<"Conference: "<<churchConference
                <<"Church: "<<localChurch
                <<"Amount: "<<amount
            <<endl;

            cout<<"\t\t>> Yes"<<endl;
            cout<<"\t\t>> No"<<endl;
            confirm();
            break;

            case 2:
                cout<<"Please enter your name"<<endl;
                cin>>name;
                cout<<"Please enter donation Amount"<<endl;
                cin>>amount;

                cout<<"Confirm Church Donation"<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"Amount: "<<amount<<endl;

                cout<<"\t\t>> Yes"<<endl;
                cout<<"\t\t>> No"<<endl;
                confirm();
            break;

            default:
            cout<<"Invalid entry, Please try again"<<endl;
            break;
        }
        break;

        case 2:
        goto menu;
    
        default:
        cout<<"Invalid entry, try again"<<endl;
        break;
    }
}

//school menu list
void school()
{
    int ans, tuition_option, graduate_option, payment_opt, switchPay,transcript_switch;

    menu:
    cout << "\t\t>>1 University" << endl;
    cout << "\t\t>>2 Basic School" << endl;
    cout << "\t\t>>3 Back" << endl;

    cin>>ans;

    switch (ans)
    {
        case 1:
            cout << "\t\t>>1 Tuition" << endl;
            cout << "\t\t>>2 Other Payments" << endl;
            cout << "\t\t>>3 Back" << endl;

            cin>>tuition_option;
        

        switch (tuition_option)
        {
            case 1:
                cout << "\t\t>>1 Graduate" << endl;
                cout << "\t\t>>2 Post Graduate" << endl;

                cin >> graduate_option;
                

                switch (graduate_option)
                {
                    case 1:
                    case 2:
                     campuses();
                    break;
                    default:
                        cout << "Invalid entry, please try again" << endl;
                    break;
                }
            break;

            case 2:
                cout << "\t\t>>1 Payments" << endl;
                cout << "\t\t>>2 Transcript" << endl;

                cin>>payment_opt;
            break;
            switch (payment_opt)
            {
                case 1:
                    campuses();
                    cout << "Enter your choice" << endl;
                    cout << "\t\t>>1 Access Program" << endl;
                    cout << "\t\t>>2 Attestation" << endl;
                    cout << "\t\t>>3 Certificate Program" << endl;
                    cout << "\t\t>>4 Certification of Documents" << endl;

                    cin>> switchPay;
                break;

                switch (switchPay)
                {
                    case 1:
                        accountConfirmation(); //continue from here
                        confirm();
                    break;
                    case 2:
                        accountConfirmation();
                        confirm();
                    break;
                    case 3:
                        accountConfirmation();
                        confirm();
                    break;
                    case 4:
                        accountConfirmation();
                        confirm();
                    break;

                    default:
                        cout << "Invalid entry, please try again" << endl;
                    break;
                }
                case 2:
                    campuses();
                    cout<<">>\t\t1 Request Transcript"<<endl;
                    cout<<">>\t\t2 Check Transcript Statement"<<endl;

                    cin>>transcript_switch;
                break;

                switch (transcript_switch)
                {
                    case 1:
                        confirm();
                    break;
                    case 2:
                        cout<<"Request received, Thank you"<<endl;
                    break;
                
                    default:
                        cout<<"Invalid entry, please try again"<<endl;
                    break;
                }
            }
        }break;

        //This menu is the option for basic school

        case 2:
            int basicOpt;

            cout<<"\t\t>>1 Preschool"<<endl;
            cout<<"\t\t>>2 Lower Primary"<<endl;
            cout<<"\t\t>>3 Upper Primary"<<endl;
            cout<<"\t\t>>4 Junior High"<<endl;

            cin>>basicOpt;

            switch (basicOpt)
            {
                case 1:
                    preSch();
                break;
                case 2:
                    lowerPrimary();
                break;
                case 3:
                    upperPrimary();
                break;
                case 4:
                    juniorHigh();
                break;
                default:
                    cout<<"Invalid entry, please try again"<<endl;
                break;
            }
        break;
        default :
            cout<< "Invalid entry, please try again"<< endl;
        break;
    }
}

//This function is to display campuses and option to choose 
//any, and also reqires account code and confirms payment.
void campuses()     
{
    int campusConfirmopt;
    double amount;
    string campusOption, actCode;

    cout<<"Select your campus by Typing it\n\n";
    
    menu:
    cout<<"\t\t>>Main campus (Oyibi)"<<endl;     //Campuses of VVU
    cout<<"\t\t>>Techiman"<<endl;
    cout<<"\t\t>>Kumasi"<<endl;
    cout<<"\t\t>>Takoradi"<<endl;  
    cout<<"\t\t>>Tamale"<<endl;
    cout<<"\t\t>>Swedru"<<endl;

    cin>>campusOption;
    
    // Requesting account code
    cout<<"Please enter account code"<<endl;
    cin>>actCode;

    //Amount to be paid
    cout<<"Please enter amount"<<endl;
    cin>>amount;

    //Confirmation before payment
    cout<<"Confirm Payment"
        <<"Campus: "<<campusOption
        <<"Account Code: "<<actCode
        <<"Amount: GHc "<<amount
    <<endl;
        
    cout<<"\t\t>> Yes"<<endl;
    cout<<"\t\t>> No"<<endl;
    confirm();
}

void accountConfirmation()
{
    string accountCode;
    double amount;

    cout<<"Enter account code"<<endl;
    cin>>accountCode;

    cout<<"Enter amount to be paid"<<endl;
    cin>>amount;

    cout << amount <<" cedis paid with student account code "<< accountCode;
}

void preSch()
{
    int presch_cho;
    string campusOption;
    cout<<"Select your campus by Typing\n\n";
    
    menu:
    cout<<"\t\t>>Main (Oyibi)"<<endl;     //Campuses of VVU
    cout<<"\t\t>>Techiman"<<endl;
    cout<<"\t\t>>Kumasi"<<endl;
    cout<<"\t\t>>Takoradi"<<endl;  
    cout<<"\t\t>>Tamale"<<endl;
    cout<<"\t\t>>Swedru"<<endl;

    cin>>campusOption;

    cout<<"\tENTER OPTION TO SELECT CLASS: "<<endl;
    cout << "\t\t>>1 Nursery 1a" << endl;
    cout << "\t\t>>2 Nursery 1b" << endl;
    cout << "\t\t>>3 Nursery 2a" << endl;
    cout << "\t\t>>4 Nursery 2b" << endl;
    cout << "\t\t>>5 Kindagaten 1a" << endl;
    cout << "\t\t>>6 Kindagaten 1b" << endl;
    cout << "\t\t>>7 Kindagaten 2a" << endl;
    cout << "\t\t>>8 Kindagaten 2b" << endl;

    cin>>presch_cho;

    switch (presch_cho)
    {
        case 1:
            accountConfirmation();
            confirm();
        break;
        case 2:
            accountConfirmation();
            confirm();
        break;
        case 3:
            accountConfirmation();
            confirm();
        break;
        case 4:
            accountConfirmation();
            confirm();
        break;
        case 5:
            accountConfirmation();
            confirm();
        break;
        case 6:
            accountConfirmation();
            confirm();
        break;
        case 7:
            accountConfirmation();
            confirm();
        break;
        case 8:
            accountConfirmation();
            confirm();
        break;
        default:
            cout<<"Invalid entry, please try again"<< endl;
        break;
    }

}

void lowerPrimary()
{
    int presch_cho;
    string campusOption;

    cout<<"Select your campus\n\n";
    
    menu:
    cout<<"\t\t>>Main (Oyibi)"<<endl;     //Campuses of VVU
    cout<<"\t\t>>Techiman"<<endl;
    cout<<"\t\t>>Kumasi"<<endl;
    cout<<"\t\t>>Takoradi"<<endl;  
    cout<<"\t\t>>Tamale"<<endl;
    cout<<"\t\t>>Swedru"<<endl;

    cin>>campusOption;

    cout<<"\tENTER OPTION TO SELECT A CLASS: "<<endl;
    cout << "\t\t>>1 Primary 1a" << endl;
    cout << "\t\t>>2 Primary 1b" << endl;
    cout << "\t\t>>3 Primary 2a" << endl;
    cout << "\t\t>>4 Primary 2b" << endl;
    cout << "\t\t>>5 Primary 3a" << endl;
    cout << "\t\t>>6 Primary 3b" << endl;

    cin>>presch_cho;

    switch (presch_cho)
    {
        case 1:
            accountConfirmation();
            confirm();
        break;
        case 2:
            accountConfirmation();
            confirm();
        break;
        case 3:
            accountConfirmation();
            confirm();
        break;
        case 4:
            accountConfirmation();
            confirm();
        break;
        case 5:
            accountConfirmation();
            confirm();
        break;
        case 6:
            accountConfirmation();
            confirm();
        break;
        default:
            cout<<"Invalid entry, please try again"<< endl;
        break;
    }

}
           
void upperPrimary()
{
    int presch_cho;
    string campusOption;

    cout<<"Select your campus\n\n";
    
    menu:
    cout<<"\t\t>>Main (Oyibi)"<<endl;     //Campuses of VVU
    cout<<"\t\t>>Techiman"<<endl;
    cout<<"\t\t>>Kumasi"<<endl;
    cout<<"\t\t>>Takoradi"<<endl;  
    cout<<"\t\t>>Tamale"<<endl;
    cout<<"\t\t>>Swedru"<<endl;

    cin>>campusOption;

    cout<<"\tENTER CLASS OPTION: "<<endl;
    cout << "\t\t>>1 Upper Primary 4a" << endl;
    cout << "\t\t>>2 Upper Primary 4b" << endl;
    cout << "\t\t>>3 Upper Primary 5a" << endl;
    cout << "\t\t>>4 Upper Primary 6b" << endl;

    cin>>presch_cho;
    

    switch (presch_cho)
    {
        case 1:
            accountConfirmation();
            confirm();
        break;
        case 2:
            accountConfirmation();
            confirm();
        break;
        case 3:
            accountConfirmation();
            confirm();
        break;
        case 4:
            accountConfirmation();
            confirm();
        break;
        default:
            cout<<"Invalid entry, please try again"<< endl;
        break;
    }

}
void juniorHigh()
{
    int presch_cho;
    string campusOption;

    cout<<"Select your campus\n\n";
    
    menu:
    cout<<"\t\t>>Main (Oyibi)"<<endl;     //Campuses of VVU
    cout<<"\t\t>>Techiman"<<endl;
    cout<<"\t\t>>Kumasi"<<endl;
    cout<<"\t\t>>Takoradi"<<endl;  
    cout<<"\t\t>>Tamale"<<endl;
    cout<<"\t\t>>Swedru"<<endl;

    cin>>campusOption;

    cout<<"\tENTER OPTION TO CHOOSE: "<<endl;
    cout << "\t\t>>1 Grade 7a" << endl;
    cout << "\t\t>>2 Grade 7b" << endl;
    cout << "\t\t>>3 Grade 8a" << endl;
    cout << "\t\t>>4 Grade 8b" << endl;
    cout << "\t\t>>5 Grade 9a" << endl;
    cout << "\t\t>>6 Grade 9b" << endl;

    cin>>presch_cho;

    switch (presch_cho)
    {
        case 1:
            accountConfirmation();
            confirm();
        break;
        case 2:
            accountConfirmation();
            confirm();
        break;
        case 3:
            accountConfirmation();
            confirm();
        break;
        case 4:
            accountConfirmation();
            confirm();
        break;
        case 5:
            accountConfirmation();
            confirm();
        break;
        case 6:
            accountConfirmation();
            confirm();
        break;
        default:
            cout<<"Invalid entry, please try again"<< endl;
        break;
    }
}

//function to validate payment
void confirm()
{
    string answer;

    cout<<"Enter Yes to confirm or No to decline"<<endl;
    cin>>answer;

    if(answer == "yes" || answer == "Yes" !! answer =="Y" !! answer =="y")
    {
        cout<<"Transation confirmed"<<endl;
    }
    else if(answer == "no" || answer == "No" !! answer =="n" !! answer =="N")
    {
        cout<<"Transaction denied, kindly start the process again"<<endl;
    }
    else(cout<<"Try the process again"<<endl);
}