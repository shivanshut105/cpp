#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class  date{
public:
    int p_date;
    string month, day;
    int year;
    void setdata(){
        cin>>p_date>>month>>year>>day;
    }
    void getdata(){
        string cal[12]={"Jan","Feb","March","April", "May","June","July","Aug","Sept","Oct","Nov","Dec"};
        string calday[14]={"Monday","Tuesday", "Wednasday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday", "Wednasday","Thursday","Friday","Saturday","Sunday"};
        string newmonth, newday;
        for (int i = 0; i < 12; ++i)
        {
            if(cal[i]==month) newmonth=cal[i+1];
        }
        for (int i = 0; i < 14; ++i)
        {
            if(calday[i]==day){
                if(month=="Jan")newday=calday[i+3];
                else if(month=="March")newday=calday[i+3];
                else if(month=="May")newday=calday[i+3];
                else if(month=="August")newday=calday[i+3];
                else if(month=="Oct")newday=calday[i+3];
                else if(month=="Feb")newday=calday[i];
                else if(month=="April")newday=calday[i+2];
                else if(month=="June")newday=calday[i+2];
                else if(month=="July")newday=calday[i+2];
                else if(month=="Sept")newday=calday[i+2];
                else if(month=="Nov")newday=calday[i+2];

            }
        }
        // cout<<calday[4]<<endl;
        cout<<p_date<<" "<<newmonth<<" "<<year<<" "<<newday<<endl;
    }
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    date dt;
    dt.setdata();
    dt.getdata();
    return 0;
}