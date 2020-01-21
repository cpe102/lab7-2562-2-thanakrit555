// status = one night stand;
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    string status ="";
    int age;
    float hight;
    double rich;
    
    
    
    cout<<"Enter age: ";
    cin>>age;

    if(age < 20){
      cout<<"What is your hight: ";
      cin>>hight;
      if(hight < 160){
          status = "UNFRIEND"; 
          
    }else if ( hight <175){
            status = "FRIEND"; 
            
    }else{
    	cout<<"Input your rich: ";
        cin>>rich;
    	if(rich>69000000){
	     status ="MARRIED";
         }else{
           status ="ONE NIGHT STAND"; 
		}
		}
	}else if( age <30 ){
         cout<<"Input your rich: ";
         cin>>rich;
         if( rich >10000000){	
           status = "BEST FRIEND";
	     }else{
         status = "UNFRIEND";
		 }
         }else{
         	
		 status = "UNFRIEND";
	      }
	      
         cout<< status; 
          }

