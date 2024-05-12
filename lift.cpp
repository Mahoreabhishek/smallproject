#include<iostream>
using namespace std;
 const int totalfloor=20;
 class LIFT
{   
    int target;
    static int driver;
    public:
   void taketar(){
        cout<<"Enter your floor number where you want to go :(1 to 20) \n";
        cin>>target;
    }
   void runfun(){
        if(target>0||target<=totalfloor)
        {
           if(target>driver){
            for(driver; driver<=target;driver++){
                cout<<"this floor number is  "<<driver<<"\n";
                }
                driver--;
           }
            else if (target<driver){
            for(driver; driver>=target;driver--){
                cout<<"this floor number is "<<driver<<"\n";
                }
                driver++;
            } 
            else{
                cout<<"your allready in this floor "<<"\n";
            }  
            }
        else
        cout<<"This floor is not exist his building , please enter again currect nuber of floor \n";
         }
    } ;
    int LIFT::driver=1;

    //main program ;;;;
    int main(){
        LIFT lift;
        string condition,choice="yes";
        do{
            lift.taketar();
            lift.runfun();
            cout<<"Do you want to use lift again "<<"\n ";
            cin>>condition;
        }while(choice==condition);
        return 0 ;
    }