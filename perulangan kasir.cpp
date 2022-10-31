#include<iostream>
using namespace std;
int main(){
	string jualan[] ={"manggis","apel","mangga","pepaya","melon","semangka","pir","durian","jeruk","salak","kelengkeng",
	"dukuh","cery","pisang","jambu","kelapa","stoberi","anggur","alpukat","alkisa","cempedak","naga","leci","kurma","kebembem"
	}; 
	int jln = sizeof(jualan)/sizeof(*jualan);
	float harga;
	string cari;
	int hasilcari;
	cout<<" barang jualan :"<<endl;
	for(int a = 0; a < jln; a++){
		cout<<a<<". "<<jualan[a]<<endl;
		
	}
	cout<<" Jenis buah yang di cari : ";
	cin>>cari;
	for(int b = 0; b < jln; b++){
		if(cari == jualan[b]){
			hasilcari++;
		}
	}
	if(hasilcari == 0){
		cout<<" Barang tidak tersedia "<<endl;
	}else{
		cout<<cari<<" tersedia"<<endl;
	
		
	}
	}
	
	
	
	
	

