#include<iostream>
using namespace std;

void dotcout(){
	cout<<".";
}

void dotdotcout(){
	cout<<"..";
}

void sqcout(){
	cout<<"#";
}

void starcout(){
	cout<<"*";
}

int main(){
    
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	string a;
    int n,count=1;
    
    cin>>a;
    n=a.length();
	
		for(int i=1;i<=n;i++){
		if((i%3)==0){
				dotdotcout();
				starcout();
				dotcout();
			}	
		else{
			dotdotcout();
			sqcout();
			dotcout();
			}
	
		}
      dotcout();
	  cout<<"\n";
      
      
      for(int i=1;i<=n;i++){
      	if((i%3)==0){
				dotcout();
				starcout();
				dotcout();
				starcout();
				
			}
		else{
		dotcout();
		sqcout();
      	dotcout();
		sqcout();
            }
       }
       
       dotcout();
	   cout<<"\n";
	
       for(int i=1;i<=n;i++){
       	if((i%3)==0){
       		starcout();
       		dotcout();
       		cout << a[i-1];
       		dotcout();
       		
			   if(i!=n ){
			starcout();
       		dotcout();
       		cout << a[i];
       		dotcout();
       		i++;
       		}
		}
		else {
			sqcout();
			dotcout();
       		cout << a[i-1];
       		dotcout();		
			}
			
		if(i==n){
			if((i%3)==0){
				starcout();
			}
			else{
				sqcout();
			}
		}
	}	
		
	   cout<<"\n";
    
		for(int i=1;i<=n;i++){
      	if((i%3)==0){
				dotcout();
				starcout();
				dotcout();
				starcout();
				
			}
		else{
		dotcout();
		sqcout();
      	dotcout();
		sqcout();
      		}
       }
       
       dotcout();
	   cout<<"\n";
    
		for(int i=1;i<=n;i++){
		if((i%3)==0){
				dotdotcout();
				starcout();
				dotcout();
			}	
		else{
			dotdotcout();
			sqcout();
			dotcout();
			}
		
		}
      dotcout();
	  cout<<"\n";
      
}