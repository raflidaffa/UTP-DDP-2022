//PROGRAM PEMBELIAN PULSA ONLINE
//Nama anggota :
// Abi Ihza Rafi Alfano (2217051114)
// M. Hafiz ZIdane (2217051036)
// Rafli Daffa Pratama (2217051131)
#include <iostream>
#include <string.h>
#include <conio.h>
#include <ctime>

using namespace std;
//konstanta / nilai yang sudah ditetapkan
const int PROMO1 = 3000;
const int PROMO2 = 5000;
const int PROMO3 = 10000;

//Header
void header(){
	cout<<"====================================================================\n";
	cout<<"=====================      SELAMAT DATANG      =====================\n";
	cout<<"=====================        DI RAZ CELL       =====================\n";
	cout<<"=====================  TOP UP PULSA TERPERCAYA =====================\n";
	cout<<"====================================================================\n";
}
//Footer
void footer(){
	cout<<"====================================================================\n";
	cout<<"=====================      TERIMA KASIH        =====================\n";
	cout<<"=====================   TELAH MEMBELI PULSA    =====================\n";
	cout<<"=====================     DI TEMPAT KAMI       =====================\n";
	cout<<"====================================================================\n";
	
}
//fungsi untuk daftar harga pulsa
void daftarHarga(){
	cout<<"\n*****************************************************";
	cout<<"\n**************** DAFTAR HARGA PULSA *****************";
	cout<<"\n*****************************************************"<<endl;
	cout<<" ___________________________________________________"<<endl;
	cout<<"| _________________________________________________ |"<<endl;
	cout<<"||						   ||"<<endl;
	cout<<"||\t 1. 5000 \t\t= Rp. 5.000\t   ||"<<endl;
	cout<<"||\t 2. 10000\t\t= Rp. 10.000\t   ||"<<endl;
	cout<<"||\t 3. 20000\t\t= Rp. 20.000\t   ||"<<endl;
	cout<<"||\t 4. 25000\t\t= Rp. 25.000\t   ||"<<endl;
	cout<<"||\t 5. 50000\t\t= Rp. 50.000\t   ||"<<endl;
	cout<<"||\t 6. 100000\t\t= Rp. 100.000\t   ||"<<endl;
	cout<<"||\t 7. 150000\t\t= Rp. 150.000\t   ||"<<endl;
	cout<<"||\t 8. 200000\t\t= Rp. 200.000\t   ||"<<endl;
	cout<<"||\t 9. 300000\t\t= Rp. 300.000\t   ||"<<endl;
	cout<<"||\t10. 500000\t\t= Rp. 500.000\t   ||"<<endl;
	cout<<"||_________________________________________________||"<<endl;
	cout<<"|___________________________________________________|"<<endl;
}
int pulsa(){
	//memberi warna pada sistem
	system("color C");
	//variabel
	int pilihanPulsa,operatorPulsa, pembayaranPulsa, pilihanHarga, pajak, total, POTONGAN,pembayaran,saldoKurang,kembalian,uang;
	int hargaPulsa[10]={5000,10000,20000,25000,50000,100000,150000,200000,300000,500000},x=0;
	char namaPelanggan[40],awal,harga[20],cetak,tanggal;
	char nomorPelanggan[13],metodePembayaran[10],pilihanOperator[10];
	time_t a=time(0);
	string b=ctime(&a);
	
	
	do{
		/* Syntax (“CLS”) di Dev C++ adalah untuk membersihkan layar pada 
		program yang akan dijalankan sehingga pem-rogram dapat menentukan 
		saat untuk menghapus data yang telah dijalankan tanpa harus menutup 
		program tersebut dan membukanya kembali.*/
		system("CLS");
		header();	//memanggil void header
		cout<<endl;
		
		cout<<" [ JANGAN GUNAKAN SPASI ] "<<endl<<endl;
		cout<<"Masukkan Nama Pelanggan\t\t: "; 
		cin>>namaPelanggan;
		cout<<"Masukkan Nomor Anda\t\t: ";
		cin>>nomorPelanggan;
		cout<<"Metode Pembayaran : \n";
		cout<<"1. OVO\n2. Dana\n3. GoPay\n4. ShopeePay\n5. MBanking\n";
		cout<<"Pilih Metode Pembayaran\t\t: ";
		cin>>pembayaranPulsa;
		system("CLS");
		header();
		//switchcase untuk memilih metode pembayaran
	switch(pembayaranPulsa){
		case 1:
		strcpy(metodePembayaran,"OVO");  //strcpy digunakan untuk menyalin suatu string ke variabel tujuan
			break;
		case 2:
			strcpy(metodePembayaran,"Dana");
			break;
		case 3:
			strcpy(metodePembayaran,"GoPay");
			break;
		case 4:
				strcpy(metodePembayaran,"ShopeePay");
			break;
		case 5:
				strcpy(metodePembayaran,"MBanking");
			break;
		default:
			cout << "Metode pembayaran anda tidak tersedia, silahkan pilih metode pembayaran yang tersedia jika ingin melanjutkan. \n\n";
			goto mulailagi;	
	
		}
		cout<<"\n\nMetode pembayaran Anda adalah "<<metodePembayaran<<endl<<endl;
		cout<<"Operator yang tersedia : "<<endl;
		cout<<"1. Telkomsel\n2. Indosat\n3. Tri\n4. Smartfren\n5. Axis\n6. XL\n";
		cout<<"Pilih Operator Anda : ";
			cin>>operatorPulsa;
			system("CLS");
			header();
		//switchcase untuk memilih operator 
			switch(operatorPulsa){
		case 1:
		strcpy(pilihanOperator,"Telkomsel");
		daftarHarga();
			break;
		case 2:
			strcpy(pilihanOperator,"Indosat");
			daftarHarga();
			break;
		case 3:
			strcpy(pilihanOperator,"Tri");
			daftarHarga();
			break;
		case 4:
			strcpy(pilihanOperator,"Smartfren");
			daftarHarga();
			break;
		case 5:
			strcpy(pilihanOperator,"Axis");
			daftarHarga();
			break;
		case 6:
			strcpy(pilihanOperator,"XL");
			daftarHarga();
			break;
		default:
			cout << "Operator yang anda pilih tidak tersedia silahkan pilih Operator yang tersedia jika ingin melanjutkan pembelian. \n\n";
			goto mulailagi;

	}	
		cout<<endl;
		cout<<"Saya Pilih : "; cin>> pilihanPulsa;	
		//switchcase untuk memilih pulsa
		switch(pilihanPulsa){
		case 1:
		strcpy(harga,"5000");
			break;
		case 2:
			strcpy(harga,"10000");
			x=1;
			break;
		case 3:
			strcpy(harga,"20000");
			x=2;
			break;
		case 4:
			strcpy(harga,"25000");
			x=3;
			break;
		case 5:
			strcpy(harga,"50000");
			x=4;
			break;
		case 6:
			strcpy(harga,"100000");
			x=5;
			break;
		case 7:
			strcpy(harga,"150000");
			x=6;
			break;
		case 8:
			strcpy(harga,"200000");
			x=7;
			break;
		case 9:
			strcpy(harga,"300000");
			x=8;
			break;
		case 10:
			strcpy(harga,"500000");
			x=9;
			break;
		default:
			cout << "Pulsa yang anda pilih tidak tersedia silahkan pilih pulsa yang tersedia jika ingin melanjutkan pembelian. \n\n";
			goto mulailagi;	
		}		
		cout<<"Anda memilih pulsa sebesar "<<harga<<endl;
		cout<<"Ketik Huruf Apa Saja Untuk Mencetak Struk Pembelian Anda"<<endl;
		cout<<"Input : ";cin>>cetak;
		cout<<endl;
		system("CLS");	
		pajak = 2000;
		total = pajak + hargaPulsa[x];
		//prosedur cetak bukti struk pembelian
		cout << "==========================================================" << endl;
		cout << "$  	      STRUK PEMBELIAN PULSA RAZ CELL             $" << endl;
		cout << "==========================================================" << endl;
		cout << "\t Tanggal Transaksi\t: "<<b;
		cout << "\t Nama Pelanggan\t\t: "<< namaPelanggan <<endl;
		cout << "\t Nomor Pelanggan\t: "<< nomorPelanggan<<endl;
		cout << "\t Metode Pembayaran\t: "<< metodePembayaran<<endl;
		cout << "\t Nama Operator\t\t: " << pilihanOperator <<endl;
		cout << "\t Pulsa\t\t\t: Rp. "<< hargaPulsa[x]<<endl;
		cout << "\t Pajak\t\t\t: Rp. " << pajak<<endl;
		cout << "\t Total\t\t\t: Rp. " << total<<endl;
		cout << "==========================================================" << endl;
		cout << "$  	        PENJUALAN PULSA TERPERCAYA               $" << endl;
		cout << "==========================================================" << endl<<endl;
	
		//prosedur potongan harga
		if(total>=25000 && total<60000){
			POTONGAN = total - PROMO1;
			total = POTONGAN;
			cout << endl;
			cout << "Anda mendapatkan potongan sebesar Rp. " << PROMO1 <<" dari pembelian Anda."<< endl;
			cout << "Total Pembayaran  menjadi : Rp. "<< total << endl<<endl<<endl;
		}else if(total>60000 && total<110000){
			POTONGAN = total - PROMO2;
			total = POTONGAN;
			cout << endl;
			cout << "Anda mendapatkan potongan sebesar Rp. " << PROMO2 <<" dari pembelian Anda."<< endl;
			cout << "Total Pembayaran  menjadi : Rp. "<< total << endl<<endl<<endl;
		}else if(total>=110000 && total<510000){
			POTONGAN = total - PROMO3;
			total = POTONGAN;
			cout << endl;
			cout << "Anda mendapatkan potongan sebesar Rp. " << PROMO3 <<" dari pembelian Anda."<< endl;
			cout << "Total Pembayaran menjadi : Rp. "<< total << endl<<endl<<endl;
	}
		//proses pembayaran
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		cout << "$$$$$$$$$$    Silahkan bayar pesanan Anda dibawah    $$$$$$$$$$"<<endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl;
		cout << "Saldo yang anda miliki harus cukup untuk melanjutkan pembayaran"<<endl;
		cout << "Masukkan saldo yang Anda miliki\t: Rp. ";
		cin>>pembayaran;
		cout << endl;
		
		while (uang = pembayaran < total){
			cout << "Uang anda tidak mencukupi, silahkan bayar kembali untuk melanjutkan : Rp. "; 
			cin>>saldoKurang;
			pembayaran= pembayaran + saldoKurang;
		}
		
		kembalian = pembayaran - total;
		cout << "Pembayaran Anda \t\t\t : Rp. " << pembayaran <<endl;
		cout << "Sisa Saldo yang telah Anda bayarkan \t : Rp. " << kembalian <<endl<<endl;		
		
		mulailagi:
			cout << "Apakah anda ingin melakukan pembelian lain? (1/2)  =  "; 
			cout<<"\n1. Ya\n2. Tidak\n\n";
			cin>>awal;		
			
		cout<<endl<<endl;
		
		
	}	while (awal=='1');
		cout<<endl;
		system("CLS");
		footer();
	
}
int main(){
	pulsa();
	
	getch();
	return 0;


}

