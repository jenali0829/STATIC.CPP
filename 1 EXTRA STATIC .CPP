#include<iostream>

using namespace std;

class data{
	
	private:
		
	static int	hotel_id;
	static int hotel_establish_year;
    static int hotel_staff_quantity;
    static int hotel_room_quantity;
    static char hotel_name[100];
    static char hotel_type[100]; 
    static char hotel_rating[100];
    static char hotel_location[100];
    

	public:
	
	static void setter();
	static void getter(); 
};
		int data::hotel_id = 20;
		int data::hotel_establish_year = 30;
		int data::hotel_staff_quantity = 50;
		int data::hotel_room_quantity = 40;
		char data::hotel_name[100] = "jenali";
		char data::hotel_type[100] = "honest";
		char data::hotel_rating[100] = "5 star";
		char data::hotel_location[100] = "surat";
		
	
 

void data :: setter(){
	
	cout<<"your value of id : ";
	cin>>hotel_id;
	
	cout<<"Your value of establish year : ";
	cin>>hotel_establish_year;
	
	cout<<"Your value of staff quantity : ";
	cin>>hotel_staff_quantity;
	
	cout<<"Your value of room quantity : ";
	cin>>hotel_room_quantity;
	
	cout<<"Your value of name : ";
	cin>>hotel_name;
	
 	cout<<"Your value of type : ";
	cin>>hotel_type;
	
	cout<<"Your value of rating : ";
	cin>>hotel_rating;
	
	cout<<"Your value of location : ";
	cin>>hotel_location;
	
}

void data :: getter(){
	
	cout<<hotel_id<<endl;
	
	cout<<hotel_establish_year<<endl;
				
	cout<<hotel_staff_quantity<<endl;
				
	cout<<hotel_room_quantity<<endl;
				
	cout<<hotel_name<<endl;
				
	cout<<hotel_type<<endl;
				
	cout<<hotel_rating<<endl;
				
	cout<<hotel_location<<endl;
				
				
				
    	 
}

main(){
	
	int n;
	int i;
	data obj[n];
	
	cout<<"Enter size:";
	cin>>n;
	
	for(i=0; i<n; i++){
		
		obj[i].setter();
		obj[i].getter();
	}

}
