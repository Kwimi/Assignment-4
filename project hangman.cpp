#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdlib>

using namespace std;

int christal(){
	
	string word = "christal";
	int result;
	string harsh[8] ={"_ ", "_ ","_ ","_ ","_ ","_ ","_ ","_ "};
	
	string arr[8]={"c","h","r","i","s","t","a","l"};
	int win = 0;
	
    string alpha[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string alp[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	
	int warn = 3;
	int k = 1;	// k  warning for determining if the character is an alpahbet
	int guess = 6;
	int p = 0; //p for removing guess
	string x;// the character the user guess
	int h=0; //indexing the empty character
	int m = 0; // if the character guessed is same as the actual character
	int index=0;
	int y=8;   // for end looping the word
	int j=0; // for start looping the word
	cout<<" the game starts \n lets go!!!\n ";
	

	
	while(j<y)
	{
		
	
    	for (int i = 0; i<8; i++){
    		cout<<harsh[i];
		}
		cout<<"\n";
		for (int i = 0; i<27; i++){
    		cout<<setw(3)<<alpha[i];
		}cout<<"\n";
		cout<<"number of guesses left : "<<guess<<"\n";
		cout<<"enter the letter guess :";
		cin>>x;
		for(int i=0; i<9; i++){
		
		if(x==arr[i]){
			m=1;
			index=i;
		}
		
		}
		if(m==1){
			harsh[index]=x;
				p = 1;
			win = win + 1;
			
		for (int i = 0; i<27; i++){
    	    if (x==alpha[i]){
    	    	alpha[i] = " ";
			}
		}
		} // if he didnt guess right
		 else {
		 	for(int i=0; i<8; i++){
			 
		 	if(harsh[i]=="_ "){
		 		// index with empty character
		 		h=i;
		 		break;
			 }}
			harsh[h]=arr[h];
				//remove letter
				for (int i = 0; i<27; i++){
    	    if (arr[h]==alpha[i]){
    	    	alpha[i] = " ";
			}
		}}  //warning for
			for (int i = 0; i<27; i++){
    	    if (x==alp[i]){
    	    	
    	    	// k  warning for determining if the character is an alpahbet
    	    k = 0;
			}
		}
		
		 if(k == 1){
			warn = warn - 1;
			
				cout<<"\n";
				cout<<"warning!!! Left :" << warn<<" \n\n";
				// p be 1 when the entered character is not an alphabet
				p = 1;
		}
		
		// p for guess
		if (p == 0){
			guess = guess - 1;
			
		} else{
			p=0;
		}
		
		if (warn == 0){
			cout<<" you lose";
			break;
		}
		k = 1;
		if(m==1){
			
			y-=1;
		}
		
		else{
			j++;
		}
		m=0;
			
	}
	if (warn ==0){
		return 0;
	} else{
	
	cout<<"\nchristal\n";
	if (guess == 0){
		cout<<"\n you lost!!!";
	} else{
		result = guess * win;
		cout<<"\n you won on :"<<result<<" score \n";
	}
}
	
}
int thierry(){
	
	string word = "thierry";
	int result;
	string harsh[7] ={"_ ", "_ ","_ ","_ ","_ ","_ ","_ "};
	
	string arr[7]={"t","h","i","e","r","r","y"};
	int win = 0;
	
    string alpha[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string alp[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	
	int warn = 3;
	int k = 1;
	int guess = 6;
	int p = 0;
	string x;
	int h=0;
	int m = 0;
	int index=0;
	int y=7;
	int j=0;
	cout<<" the game starts \n lets go!!!\n ";
	

	
	while(j<y)
	{
		
	
    	for (int i = 0; i<7; i++){
    		cout<<harsh[i];
		}
		cout<<"\n";
		for (int i = 0; i<27; i++){
    		cout<<setw(3)<<alpha[i];
		}cout<<"\n";
		cout<<"number of guesses left : "<<guess<<"\n";
		cout<<"enter the letter guess :";
		cin>>x;
		
		//main idea
		for(int i=0; i<7; i++){
		
		if(x==arr[i]){
			m=1;
			index=i;
			
		}
		
		}
		if(m==1){
			harsh[index]=x;
				p = 1;
			win = win + 1; 
			
		for (int i = 0; i<27; i++){
    	    if (x==alpha[i]){
    	    	alpha[i] = " ";
			}
		}
		}
		 else {
		 	for(int i=0; i<7; i++){
			 
		 	if(harsh[i]=="_ "){
		 		h=i;
		 		break;
			 }}
			harsh[h]=arr[h];
				
				for (int i = 0; i<27; i++){
    	    if (arr[h]==alpha[i]){
    	    	alpha[i] = " ";
			}
		}}
			for (int i = 0; i<27; i++){
    	    if (x==alp[i]){
    	    k = 0;
			}
		} if(k == 1){
			warn = warn - 1;
			
				cout<<"\n";
				cout<<"warning!!! Left :" << warn<<" \n\n";
				p = 1;
		}
		
		
		if (p == 0){
			guess = guess - 1;
			
		} else{
			p=0;
		}
		
		if (warn == 0){
			cout<<" you lose";
			break;
		}
		k = 1;
		if(m==1){
			
			y-=1;
		}else{
			j++;
		}
		m=0;
		
	}
	if (warn ==0){
		return 0;
	} else{
	
	cout<<"\nthierry\n";
	if (guess == 0){
		cout<<"\n you lost!!!";
	} else{
		result = guess * win;
		cout<<"\n you won on :"<<result<<" score \n";
	}
}

}

int syntique(){
	
	string word = "syntique";
	int result;
	string harsh[8] ={"_ ", "_ ","_ ","_ ","_ ","_ ","_ ","_ "};
	
	string arr[8]={"s","y","n","t","i","q","u","e"};
	int win = 0;
	
    string alpha[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string alp[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	
	int warn = 3;
	int k = 1;
	int guess = 6;
	int p = 0;
	string x;
	int h=0;
	int ret=0;
	int m = 0;
	int index=0;
	int y=8;
	int j=0;
	cout<<" the game starts \n lets go!!!\n ";
	

	
	while(j<y)
	{
		
	
    	for (int i = 0; i<8; i++){
    		cout<<harsh[i];
		}
		cout<<"\n";
		for (int i = 0; i<27; i++){
    		cout<<setw(3)<<alpha[i];
		}cout<<"\n";
		cout<<"number of guesses left : "<<guess<<"\n";
		cout<<"enter the letter guess :";
		cin>>x;
		for(int i=0; i<9; i++){
		
		if(x==arr[i]){
			m=1;
			index=i;
			ret+=1;
		}
		
		}
		if(m==1){
			harsh[index]=x;
				p = 1;
			win = win + 1;
			// calling remove function
		for (int i = 0; i<27; i++){
    	    if (x==alpha[i]){
    	    	alpha[i] = " ";
			}
		}
		}
		 else {
		 	for(int i=0; i<8; i++){
			 
		 	if(harsh[i]=="_ "){
		 		h=i;
		 		break;
			 }}
			harsh[h]=arr[h];
				
				for (int i = 0; i<27; i++){
    	    if (arr[h]==alpha[i]){
    	    	alpha[i] = " ";
			}
		}}
			for (int i = 0; i<27; i++){
    	    if (x==alp[i]){
    	    k = 0;
			}
		} if(k == 1){
			warn = warn - 1;
			
				cout<<"\n";
				cout<<"warning!!! Left :" << warn<<" \n\n";
				p = 1;
		}
		
		
		if (p == 0){
			guess = guess - 1;
			
		} else{
			p=0;
		}
		
		if (warn == 0){
			cout<<" you lose";
			break;
		}
		k = 1;
		if(m==1){
			
			y-=1;
		}else{
			j++;
		}
		m=0;
		
	}
	if (warn ==0){
		return 0;
	} else{
	
	cout<<"\nsyntique\n";
	if (guess == 0){
		cout<<"\n you lost!!!";
	} else{
		result = guess * win;
		cout<<"\n you won on :"<<result<<" score \n";
	}
}
	
}

int main(){
	int random;
	random = (rand() % 3) + 1; // generating random numbers for choices
	switch (random){
		
		case 1:
			christal();
			break;
		case 2:
			thierry();
			break;
			
		case 3:
			syntique();
			break;
		default:
			cout<<"enter real choice\n";
			break;
		
	}
	
}




