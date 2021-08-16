#include<iostream>
using namespace std;
int main()
{
    string ename[10];
    int eid[10];
    double esal[10];
    double eatt[10];
    string mname[10];
    int mid[10];
    double msal[10];
    double matt[10];
    string gmname[10];
    int gmid[10];
    double gmsal[10];
    double gmatt[10];
    int e=0, m=0,gm=0;
    cout << "Employee management system"<<endl;
    cout << "\n\n\t\t\t\tJaideep Singh(20BCY10081)\n";
    cout << "\n\n\t\t\t\tAAdil haider ali (20BCY10070)\n";
    cout << "\n\n\t\t\t\tAryan ojha (20BCE10587)\n";
    system("pause");
    int choice=0;
    while (true)
    {
        cout << "1. Add New Employee"<<endl;
        cout << "2. Add New Manager"<<endl;
        cout << "3. Add New General Manager"<<endl;
        cout << "4. Display All the Employee"<<endl;
        cout << "5. Appraise all employees"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Your Option : "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter Employee Name:"<<endl;
            cin>>ename[e];
            cout<<"Enter Employee ID:"<<endl;
            cin>>eid[e];
            cout<<"Enter Employee Salary:"<<endl;
            cin>>esal[e];
            cout<<"Enter Employee attendence percent:";
            cin>>eatt[e];
            e++;
        break;
        case 2:
            cout<<"Enter General Manager Name:"<<endl;
            cin>>mname[m];
            cout<<"Enter Manager ID:"<<endl;
            cin>>mid[m];
            cout<<"Enter Manager Salary:"<<endl;
            cin>>msal[m];
            cout<<"Enter Manager attendence percent:";
            cin>>matt[m];
            m++;
        break;
        case 3:
            cout<<"Enter General Manager Name:"<<endl;
            cin>>gmname[gm];
            cout<<"Enter General Manager ID:"<<endl;
            cin>>gmid[gm];
            cout<<"Enter General Manager Salary:"<<endl;
            cin>>gmsal[gm];
            cout<<"Enter General Manager attendence percent:";
            cin>>gmatt[gm];
            gm++;
        break;
        case 4:
            for(int i=0;i<e;i++)
            {
            cout<<"Employee Name:"<<ename[i]<<endl;
            cout<<"Employee ID:"<<eid[i]<<endl;
            cout<<"Employee Salary:"<<esal[i]<<endl;
            cout<<"Employee attendence:"<<eatt[i]<<endl;              
            }
            for(int i=0;i<m;i++)
            {
            cout<<"Manager Name:"<<mname[i]<<endl;
            cout<<"Manager ID:"<<mid[i]<<endl;
            cout<<"Manager Salary:"<<msal[i]<<endl;
            cout<<"Manager attendence:"<<matt[i]<<endl;              
            }
            for(int i=0;i<gm;i++)
            {
            cout<<"General Manager Name:"<<gmname[i]<<endl;
            cout<<"General Manager ID:"<<gmid[i]<<endl;
            cout<<"General Manager Salary:"<<gmsal[i]<<endl;
            cout<<"General Manager attendence:"<<gmatt[i]<<endl;         
            }
        break;
        case 5:
            for(int i=0;i<e;i++)
            {
                if(eatt[i]<50.0)
                {
                    cout<<"EXCEPTION: Since "<< ename[i] <<" attendence is less than 50%, salary cannot be increased."<<endl;
                    cout<<"Your Salary is "<<esal[i]<<endl;
                }
                else
                {
                    esal[i]= esal[i] + ((eatt[i]/100)*10);
                    cout<<"Your updated salary is "<<esal[i]<<endl;
                }
            }
            for(int i=0;i<m;i++)
            {
                if(matt[i]<50.0)
                {
                    cout<<"EXCEPTION: Since <<mname[i]<< attendence is less than 50%, salary cannot be increased."<<endl;
                    cout<<"Your Salary is "<<msal[i]<<endl;
                }
                else
                {
                    msal[i]= msal[i] + ((matt[i]/100)*100);
                    cout<<"Your updated salary is "<<msal[i]<<endl;
                }
            }
            for(int i=0;i<gm;i++)
            {
                if(gmatt[i]<50.0)
                {
                    cout<<"EXCEPTION: Since <<gmname[i]<< attendence is less than 50%, salary cannot be increased."<<endl;
                    cout<<"Your Salary is "<<gmsal[i]<<endl;
                }
                else
                {
                    gmsal[i]= gmsal[i] + ((gmatt[i]/100)*100);
                    cout<<"Your updated salary is "<<gmsal[i]<<endl;
                }
            }
        break;
        case 6:
            cout<<"Ending........."<<endl;
            exit(0);
        break;
        default:
            cout<<"Wrong Choice...."<<endl;
        break;
        }
    }
        
    return(0);
}