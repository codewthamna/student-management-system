#include<iostream>
#include<string>
using namespace std;

string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50];
int total=0;

void enter(){
    int choice;
    cout<<"ENTER STUDENTS OF YOUR CHOICE "<<endl;
    cin>>choice;
     if (total + choice > 50) {
        cout << "You can only enter " << (50 - total) << " more students." << endl;
        return;
    }
   
    for(int i=total; i<total+choice;i++){
        cout<<"ENTER DATA "<<i+1<<endl;
        cout<<"ENTER NAME "<<endl;
        cin>>arr1[i];
        cout<<"ENTER ROLL NO "<<endl;
        cin>>arr2[i];
        cout<<"ENTER COURSE "<<endl;
        cin>>arr3[i];
        cout<<"ENTER CLASS "<<endl;
        cin>>arr4[i];
        cout<<"ENTER CONTACT INFO "<<endl;
        cin>>arr5[i];

    }
      total=total+choice;
}


void show(){
if(total==0){
    cout<<"NO DATA ENTERED "<<endl;
} else{
    for(int i=0; i<total;i++){
        cout<<"DATA "<<i+1<<endl;
        cout<<"NAME "<<arr1[i]<<endl;
        cout<<"ROLL NO "<<arr2[i]<<endl;
        cout<<"CLASS "<<arr3[i]<<endl;
        cout<<"COURSE "<<arr4[i]<<endl;
        cout<<"CONTACT "<<arr5[i]<<endl;

    }
}
    
}

void search(){
    string rollNo;
    cout<<"SEARCH ROLL NO "<<endl;
    cin>>rollNo;
    bool found =false;
    for(int i=0; i<total;i++){
        if(rollNo==arr2[i]){
             cout<<"DATA FOUND "<<endl;
        cout<<"NAME "<<arr1[i]<<endl;
        cout<<"ROLL NO "<<arr2[i]<<endl;
        cout<<"CLASS "<<arr3[i]<<endl;
        cout<<"COURSE "<<arr4[i]<<endl;
        cout<<"CONTACT "<<arr5[i]<<endl;
        found =true;
        break;
        }
    }
    if(!found)
    cout<<"NOT FOUND!! "<<endl;
}

void update(){

  string rollNo;
    cout<<"SEARCH ROLL NO "<<endl;
    cin>>rollNo;
    bool found =false;
    for(int i=0; i<total;i++){
        if(rollNo==arr2[i]){
cout<<"PREVIOUS DATA "<<endl;

        cout<<"NAME "<<arr1[i]<<endl;
        cout<<"ROLL NO "<<arr2[i]<<endl;
        cout<<"CLASS "<<arr3[i]<<endl;
        cout<<"COURSE"<<arr4[i]<<endl;
        cout<<"CONTACT "<<arr5[i]<<endl;

        cout<<"ENTER NEW DATA "<<endl;
cout<<"NAME "<<endl;
cin>>arr1[i];
        cout<<"ROLL NO "<<endl;
        cin>>arr2[i];
        cout<<"CLASS "<<endl;
        cin>>arr3[i];
        cout<<"COURSE "<<endl;
       cin>>arr4[i];
        cout<<"CONTACT "<<endl;
        cin>>arr5[i];
        found=true;
        cout<<"RECORD UPDATED "<<endl;
        break;
        
        }
    }
    if(!found)
    cout<<"RECORD NOT FOUND "<<endl;
}
void deleteRecord(){
int a;
cout<<"PRESS 9 TO DLT FULL RECORD "<<endl;
cout<<"PRESS 8 TO DLT SPECIFIC "<<endl;
cin>>a;
if(a==9){
    total=0;
    cout<<"ALL DLT "<<endl;
}
else if (a==8){
    string rollNo;
    cout<<"CHOSE TO DLT "<<endl;
    cin>>rollNo; 
    bool found =false ;
    for(int i=0;i<total;i++){
        if(rollNo==arr2[i]){
            for(int j=i;j<total - 1 ;j++){
                arr1[j]=arr1[j+1];
                 arr2[j]=arr2[j+1];
                  arr3[j]=arr3[j+1];
                   arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                    
            }
            total--;
            cout<<"RECORD DELETED..... "<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"RECORD NOT FOUND "<<endl;
} else{ 
    cout<<"INVALID CHOICE "<<endl;
}
}




int main(){
    int value;
while(true){
    
    cout<<"PRESS 1 TO ENTER DATA "<<endl;
    cout<<"PRESS 2 TO SHOW DATA "<<endl;
    cout<<"PRESS 3 TO SEARCH DATA "<<endl;
    cout<<"PRESS 4 TO UPDATE DATA  "<<endl;
    cout<<"PRESS 5 TO DELETE DATA "<<endl;
    cout<<"PRESS 6 TO EXIT "<<endl;
    cin>>value;
    switch(value){
        case 1:
        enter();
        break;

    case 2:
    show();
    break;

    case 3:
    search();
    break;

    case 4:
    update();
    break;

    case 5:
    deleteRecord();
    break;

    case 6:
    exit(0);

    default:
    cout<<"INVALID INPUT "<<endl;
    }

}

return 0;
}