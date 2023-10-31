  #include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Restaurant
{
    public:
    string name, mo_numb;
    int n, order, bill=0, i_gst, s_gst, t_gst, disc, f_bill;
    Restaurant()
    {
        cout<< "\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n" ;
        cout<< "\n\t\t\t\t\t\t\t\t\t\t\t<----- WELCOME TO HOTAL PAVANPUTR ----->\t\n\n\n" ;
    }
    void set_detail()
    {
        cout<< "Enter Your Name :-> " ;
        cin>>name;
        cout<< "Enter Your Mobile Number :-> " ;
        cin>>mo_numb;
        cout<< "\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" ;
    }
    void get_detail()
    {
        cout<<endl;
        cout<< "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t<----BILL---->\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tName :-> " <<name <<endl ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tMobile No. :-> " <<mo_numb <<endl ;
    }
    int Menu()
    {
        cout<< "\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" ;
        cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t\t<----MENU---->\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Soup's--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Vegetable Soup\t\t\t100/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Tomato Soup\t\t\t\t150/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. manchow Soup\t\t\t\t250/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Chowder Soup\t\t\t\t400/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Sabji's--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Kaju Kari\t\t\t\t560/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Paneer Tikka\t\t\t\t580/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. Paneer Handi\t\t\t\t580/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Dum Aloo\t\t\t\t400/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Bread--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Garlic Nan\t\t\t\t350/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Butter Nan\t\t\t\t300/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. Green Chilli Paratha\t\t320/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Rumali Roti\t\t\t\t280/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Desert--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Chocolate Truffle Cake\t\t550/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Ferrero Rocher Cake\t\t\t680/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. Lemon Tart\t\t\t\t420/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Funnel Pastry\t\t\t460/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t5. Cheesecake\t\t\t\t480/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t6. Bluebarry Pastry\t\t\t560/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tWhat Do You Want To Take ? : " ;
        cin>>order;
    }
        
    int Soup()
    {
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Soup's--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Vegetable Soup\t\t\t100/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Tomato Soup\t\t\t\t150/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. manchow Soup\t\t\t\t250/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Chowder Soup\t\t\t\t400/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tWhat Do You Want To Take ? : " ;
        cin>>order;

        switch(order) 
        {
            case 1:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*100);
            break;

            case 2:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*150);
            break;

            case 3: 
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*250);
            break;

            case 4: 
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*400);
            break;

            case 0:
            break;

            default:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tNot Available\n" ;
            break;
        }
        return bill;
    }

    int Sabji()
    {
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Sabji's--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t5. Kaju Kari\t\t\t\t560/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t6. Paneer Tikka\t\t\t\t580/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t7. Paneer Handi\t\t\t\t580/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t8. Dum Aloo\t\t\t\t400/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tWhat Do You Want To Take ? : " ;
        cin>>order;
            
        switch(order) 
        {
            case 1:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill +  (n*560);
            break;

            case 2:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*580);
            break;

            case 3:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*580);
            break;

            case 4:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*400);
            break;

            case 0:
            break;

            default:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tNot Available\n" ;
            break;
        }
        return bill;
    }

    int Bread()
    {
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Bread--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Garlic Nan\t\t\t\t350/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Butter Nan\t\t\t\t300/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. Green Chilli Paratha\t\t320/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Rumali Roti\t\t\t\t280/-\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tWhat Do You Want To Take ? : " ;
        cin>>order;

        switch(order) 
        {
            case 1:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*350);
            break;

            case 2:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many :" ;
                cin>>n;
                bill = bill + (n*300);
            break;

            case 3:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*320);
            break;

            case 4:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*280);
            break;

            case 0:
            break;

            default:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tNot Available\n" ;
            break;
        }
        return bill;
    }

    int Desert()
    {
        cout<< "\t\t\t\t\t\t\t\t\t\t\t\t\t<---Desert--->\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tItem\t\t\t\t\tPrice\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t1. Chocolate Truffle Cake\t\t550/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t2. Ferrero Rocher Cake\t\t\t680/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t3. Lemon Tart\t\t\t\t420/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t4. Funnel Pastry\t\t\t460/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t5. Cheesecake\t\t\t\t480/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t6. Bluebarry Pastry\t\t\t560/-\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\t---------------------------------------------\n\n" ;
        cout<< "\t\t\t\t\t\t\t\t\t\t\tWhat Do You Want To Take ? : " ;
        cin>>order;

        switch(order) 
        {  
            case 1:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*550);
            break;

            case 2:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*680);
            break;

            case 3:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*420);
            break;

            case 4:
                cout <<"\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*460);
            break;

            case 5:
                cout <<"\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*480);
            break;

            case 6:
                cout <<"\t\t\t\t\t\t\t\t\t\t\tHow Many : " ;
                cin>>n;
                bill = bill + (n*560);
            break;
            
            case 0:
            break;

            default:
                cout<< "\t\t\t\t\t\t\t\t\t\t\tNot Available\n" ;
            break;
        }
        return bill;
        cout<< "\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n" ;
    }
    int Discount(int b)
    {
        if(b>=5000)
            disc = b * 0.2;
        else 
            disc = 0;
        return disc;
    }
    int Gst(int b)
    {
        s_gst = round(b * 0.025);
        i_gst = round(b * 0.025);
        t_gst = s_gst + i_gst;
        return t_gst;
    }
    int Final_Bill(int b, int disc_amt, int gst)
    {
        f_bill = b - disc_amt + gst;
        return f_bill;
    }
    void Thank_You()
    {
        cout<< "\n----> NAMSTE\n" ;
        cout<< "----> Thank You For Visit Our Restaurant....\n" ;
        cout<< "----> Come Again And Again....\n\n" ;
        cout<< "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n" ;
    }
};
int main()
{
    Restaurant R;
    int order, n, ch, b=0, gst=0, disc_amt=0, bill=0;
    R.set_detail();

    do
    {
        cout<< "\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" ;
        cout<< "\n-----> Press 1 If You Open The Menu\n" ;
        cout<< "-----> Press 0 If You Complet Order\n" ;
        cout<< "-----> Press 9 If You Cancel Order\n\n" ;
        cout<< "What Do You Want ? : " ;
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                b = R.Menu();
            break;

            case 9:
                b = 0;
            break;

            case 0:
            break;

            default:
                cout<< "Not Available\n" ;
            break;
        }
        cout<< "\n-----> Press 2 If You Open The Soup Menu\n" ;
        cout<< "-----> Press 3 If You Open The Sabji Menu\n" ;
        cout<< "-----> Press 4 If You Open The Bread Menu\n" ;
        cout<< "-----> Press 5 If You Open The Desert Menu\n" ;
        cout<< "What Do You Want ? : " ;
        cin>>ch;

        switch(ch)
        {
            case 2:
                b = R.Soup();
            break;

            case 3:
                b = R.Sabji();
            break;

            case 4:
                b = R.Bread();
            break;

            case 5:
                b = R.Desert();
            break;

            default:
                cout<< "Not Available\n" ;
            break;
        }
    }
    while(ch!=0);
    disc_amt = R.Discount(b);
    gst = R.Gst(b-disc_amt);
    bill = R.Final_Bill(b, disc_amt, gst);
    R.get_detail();
    cout<< "\n\t\t\t\t\t\t\t\t\t\t\tYour Actual Bill\t:  " <<b <<endl ;
    cout<< "\t\t\t\t\t\t\t\t\t\t\tYour Discount\t\t:  " <<disc_amt <<endl ;
    cout<< "\t\t\t\t\t\t\t\t\t\t\tSGST\t\t\t:  " <<gst/2 <<endl ;
    cout<< "\t\t\t\t\t\t\t\t\t\t\tTGST\t\t\t:  " <<gst/2 <<endl ;
    cout<< "\t\t\t\t\t\t\t\t\t\t\tTotal GST\t\t:  " <<gst <<endl ;
    cout<< "\t\t\t\t\t\t\t\t\t\t\tYour Final Bill\t\t:  " <<bill <<endl ;
    cout<< "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" ;
    R.Thank_You();
}