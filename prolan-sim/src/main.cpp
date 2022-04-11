#include<iostream>
#include<vector>
#include<stdlib.h>
#include<istream>
#include<fstream>
#include<string.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
using namespace std;


void selamatdatang();
void univ();
void admin();
void mahasiswaa();
void dosenn();
void tendikk();
void showMhs();
void showDosen();
void showTendik();
void showNilai();

void login();
void registr();
void forgot();
void exitt();
void exittt();

	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih,
        idMhs = 0,
        idDosen = 0,
        idTendik = 0;



int main()
{
    int choice;
        system("clear");
        cout<<"======================================================================================\n";
        cout<<"                    SELAMAT DATANG DI UNIVERSITAS BACK TO NATURE                      \n";
        cout<<"======================================================================================\n";
        cout<<"1. Daftar"<<endl;
        cout<<"2. Masuk"<<endl;
        cout<<"3. Lupa Pasword atau Username"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"======================================================================================\n";
        cout<<"Silahkan masukan pilihan anda : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        registr();
                        break;
                case 2:
                        login();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:
                        system("clear");
                        exitt();
                        break;
                default:
                        system("clear");
                        cout<<"Terdapat kesalahan dengan masukan anda silahkan tekan enter untuk menulang kembali\n"<<endl; 
                        cin.get();
                        main();
        }
    
}

void admin(){
	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << flush;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
        cout << "  7. Tampilkan semua user" << endl;
        cout << "  0. Keluar" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                idMhs++;
                int no;
                no = idMhs + 1;
                string id, nama, nrp, departemen;
                int dd, mm, yy, tahunmasuk, semester;
                id = idMhs;
                cout << "masukkan nama mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir : ";
                cin >> mm;
                cout << "masukkan tahun lahir : ";
                cin >> yy;
                cout << "masukkan nrp : ";
                cin >> nrp;
                cout << "masukkan departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "masukkan tahun masuk : ";
                cin >> tahunmasuk;
                mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
                recMhs.push_back(inputMhs);
                cout << "masukkan semester : ";
                cin >> semester;
                recMhs[no].setSemester(semester);


            }
				break;
			case 2: {
				idDosen++;
                string id, nama, npp, departemen,pendidikan;
                int dd, mm, yy;
                id = idDosen;
                cout << "masukkan nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir : ";
                cin >> mm;
                cout << "masukkan tahun lahir : ";
                cin >> yy;
                cout << "masukkan npp : ";
                cin >> npp;
                cout << "masukkan departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "masukkan pendidikan    : ";
                cin.ignore();
                getline(cin, pendidikan);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
                recDosen.push_back(inputDosen);
			}
				break;
			case 3:{
				idTendik++;
                string id, nama, npp, unit, departemen;
                int dd, mm, yy;
                id = idTendik;
                cout << "masukkan nama tendik   : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir   : ";
                cin >> mm;
                cout << "masukkan tahun lahir   : ";
                cin >> yy;
                cout << "masukkan npp           : ";
                cin >> npp;
                cout << "masukkan unit          : ";
                cin.ignore();
                getline(cin, unit);
                cout << "masukkan departemen    : ";
                cin.ignore();
                getline(cin, departemen);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit, departemen);
                recTendik.push_back(inputTendik);
			}
				break;
			case 4:{
                showMhs();
            }
				break;
			case 5:{
                showDosen();

			}
				break;
			case 6:{
                showTendik();
			}
				break;
            case 7:{
                showMhs();
                cout<< endl<<endl;
                showDosen();
                cout<< endl<<endl;
                showTendik();
			}
				break;
            case 0:{
                exitt();
                
			}
				break;
            default:{
                cout<<"Input Salah mohon periksa input anda"<<endl;
            }
                break;
		}
       
	}
}

void mahasiswaa(){
	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << flush;
		cout << "Data statistik:" << endl;
		cout << "Jumlah Mahasiswa  : " << recMhs.size() << "Mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Update nama" << endl;
		cout << "  2. Update tanggal lahir" << endl;
		cout << "  3. Udate NRP" << endl;
		cout << "  4. Update Departemen" << endl;
        cout << "  5. Update Tahun masuk" << endl;
		cout << "  6. Tampilkan semua mahasiswa" << endl;
        cout << "  7. Tampilkan nilai mahasiswa" << endl;
        cout << "  0. Keluar" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		switch (menu_terpilih) {
			case 1:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "Nama update mahasiswa id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recMhs[i].setNama(updatestr);
                    cout << endl;
                }
            }
				break;
			case 2: {
                for(int i = 0; i < idMhs; i++){
                    int updateint1, updateint2, updateint3;
                    cout << "Tanggal Lahir update mahasiswa id "<<i<< ": ";
                    cin >> updateint1;
                    cout << endl;
                    cout << "Bulan Lahir update mahasiswa id "<<i<< ": ";
                    cin >> updateint2;
                    cout << endl;
                    cout << "Tahun Lahir update mahasiswa id "<<i<< ": ";
                    cin >> updateint3;
                    cout << endl;
                    recMhs[i].setTglLahir(updateint1, updateint2 , updateint3);
                    cout << endl;
                }
			}
				break;
			case 3:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "NRP update mahasiswa id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recMhs[i].setNRP(updatestr);
                    cout << endl;
                }
			
			}
				break;
			case 4:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "Departemen update mahasiswa id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recMhs[i].setDepartemen(updatestr);
                    cout << endl;
                }
            }
				break;
			case 5:{
                for(int i = 0; i < idMhs; i++){
                    int updateint;
                    cout << "Tahun Masuk update mahasiswa id "<<i<< ": ";
                    cin >> updateint;
                    recMhs[i].setTahunMasuk(updateint);
                    cout << endl;
                }

			}
				break;
            case 6:{
                showMhs();
			}
				break;
            case 7:{
                showNilai();
			}
				break;
			case 0:{
                exitt();
			}
				break;
            default:{
                cout<<"Input Salah mohon periksa input anda"<<endl;
            }
                break;
		}
       
	}
}

void dosenn(){
	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << flush;
		cout << "Data statistik:" << endl;
		cout << "Jumlah Dosen  : " << recDosen.size() << " Dosen" << endl;
		cout << endl;
		cout << "Menu Dosen: " << endl;
		cout << "  1. Update nama" << endl;
		cout << "  2. Update tanggal lahir" << endl;
		cout << "  3. Udate NPP" << endl;
		cout << "  4. Update Departemen" << endl;
        cout << "  5. Update Pendidikan" << endl;
		cout << "  6. Tampilkan semua dosen" << endl;
        cout << "Menu Kemahasiswaan : " << endl << endl ;
        cout << "  7. Tampilkan semua mahasiswa" << endl;
        cout << "  8. Input ips mahasiswa" << endl;
        cout << "  8. Tampilkan ips mahasiswa" << endl;
        cout << "  0. Keluar" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                for(int i = 0; i < idDosen; i++){
                    string updatestr;
                    cout << "Nama update dosen id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recDosen[i].setNama(updatestr);
                    cout << endl;
                }
            }
				break;
			case 2: {
                for(int i = 0; i < idDosen; i++){
                    int updateint1, updateint2, updateint3;
                    cout << "Tanggal Lahir update dosen"<< ": ";
                    cin >> updateint1;
                    cout << endl;
                    cout << "Bulan Lahir update dosen id "<<i<< ": ";
                    cin >> updateint2;
                    cout << endl;
                    cout << "Tahun Lahir update dosen id "<<i<< ": ";
                    cin >> updateint3;
                    cout << endl;
                    recDosen[i].setTglLahir(updateint1, updateint2 , updateint3);
                    cout << endl;
                }
			}
				break;
			case 3:{
                for(int i = 0; i < idDosen; i++){
                    string updatestr;
                    cout << "NPP update dosen id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recDosen[i].setNPP(updatestr);
                    cout << endl;
                }
			
			}
				break;
			case 4:{
                for(int i = 0; i < idDosen; i++){
                    string updatestr;
                    cout << "Departemen update dosen id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recDosen[i].setDepartemen(updatestr);
                    cout << endl;
                }
            }
				break;
			case 5:{
                for(int i = 0; i < idDosen; i++){
                    string updatestr;
                    cout << "Pendidikan update dosen id "<<i<< ": ";
                    cin >> updatestr;
                    recDosen[i].setPendidikan(updatestr);
                    cout << endl;
                }

			}
				break;
            case 6:{
                showMhs();
			}
                break;
            case 7:{
                showNilai();
			}
                break;
             case 8:{
                for(int i = 0; i < idMhs; i++){
                    float updateflt;
                    int updateint1, updateint2;
                    cout << "IPS mahasisiswa id  "<<i<< ": ";
                    cin >> updateflt;
                    cout << "Semester mahasiswa id "<<i<< ": ";
                    cin >> updateint1;
                    cout << "SKS lulus mahasiswa id "<<i<< ": ";
                    cin >> updateint2;
                    recMhs[i].setIPS(updateint1,updateflt);
                    recMhs[i].setSKSLulus(updateint2);
                    cout << endl;
                }
			}
				break;
			case 0:{
                exitt();
			}
				break;
            default:{
                cout<<"Input Salah mohon periksa input anda"<<endl;
            }
                break;
		}
       
	}
}

void tendikk(){
	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << flush;
		cout << "Data statistik:" << endl;
		cout << "Jumlah Dosen  : " << recTendik.size() << " Tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Update nama" << endl;
		cout << "  2. Update tanggal lahir" << endl;
		cout << "  3. Udate NPP" << endl;
		cout << "  4. Update Departemen" << endl;
        cout << "  5. Update Unit" << endl;
		cout << "  6. Tampilkan semua dosen" << endl;
        cout << "  0. Keluar" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                for(int i = 0; i < idTendik; i++){
                    string updatestr;
                    cout << "Nama update tendik id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recTendik[i].setNama(updatestr);
                    cout << endl;
                }
            }
				break;
			case 2: {
                for(int i = 0; i < idMhs; i++){
                    int updateint1, updateint2, updateint3;
                    cout << "Tanggal Lahir update dosen " << ": ";
                    cin >> updateint1;
                    cout << endl;
                    cout << "Bulan Lahir update tendik id "<<i<< ": ";
                    cin >> updateint2;
                    cout << endl;
                    cout << "Tahun Lahir update tendik id "<<i<< ": ";
                    cin >> updateint3;
                    cout << endl;
                    recTendik[i].setTglLahir(updateint1, updateint2 , updateint3);
                    cout << endl;
                }
			}
				break;
			case 3:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "NPP update tendik id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recTendik[i].setNPP(updatestr);
                    cout << endl;
                }
			
			}
				break;
			case 4:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "Departemen update tendik id "<<i<< ": ";
                    cin.ignore();
                    getline(cin, updatestr);
                    recTendik[i].setDepartemen(updatestr);
                    cout << endl;
                }
            }
				break;
			case 5:{
                for(int i = 0; i < idMhs; i++){
                    string updatestr;
                    cout << "Unit update tendik id "<<i<< ": ";
                    cin >> updatestr;
                    recTendik[i].setUnit(updatestr);
                    cout << endl;
                }

			}
				break;
            case 6:{
                showTendik();
			}
				break;
			case 0:{
                exitt();
			}
				break;
            default:{
                cout<<"Input Salah mohon periksa input anda"<<endl;
            }
                break;
		}
       
	}
}

void showMhs(){
    cout <<"===========================================================================================" << endl;
    cout <<"Id      | Nama Mahasiswa        | NRP           | Departemen      | Tgl Lahir   | Angkatan " << endl;
    cout <<"===========================================================================================" << endl;
    for(int i = 0; i < idMhs; i++){
        cout << i << "\t| ";
        cout << recMhs[i].getNama() << "\t\t| ";
        cout << recMhs[i].getNRP() << "\t| ";
        cout << recMhs[i].getDepartemen()<<" | ";
        cout << recMhs[i].getTglLahir() <<  "/"<<recMhs[i].getBulanLahir()<< "/" << recMhs[i].getTahunLahir()<<"\t| ";
        cout << recMhs[i].getTahunMasuk() << endl<<endl;
    }
    cout <<"===========================================================================================" << endl;
}

void showDosen(){
    cout <<"============================================================================================" << endl;
    cout <<"Id      | Nama Mahasiswa        | NPP           | Departemen      | Tgl Lahir   | Pendidikan" << endl;
    cout <<"============================================================================================" << endl;
    for(int i = 0; i < idDosen; i++){
        cout << i << "\t| ";
        cout << recDosen[i].getNama() << "\t\t| ";
        cout << recDosen[i].getNPP() << "\t| ";
        cout << recDosen[i].getDepartemen() << "\t| ";
        cout << recDosen[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir()<<"\t| ";
        cout << recDosen[i].getPendidikan() << endl<<endl;
    }
    cout <<"===========================================================================================" << endl;
}

void exitt(){
    main();
}

void showTendik(){
    cout <<"============================================================================================" << endl;
    cout <<"Id      | Nama Mahasiswa        | NPP           | Departemen      | Tgl Lahir   | Unit      " << endl;
    cout <<"============================================================================================" << endl;
    for(int i = 0; i < idDosen; i++){
        cout << i << "\t| ";
        cout << recTendik[i].getNama() << "\t\t| ";
        cout << recTendik[i].getNPP() << "\t| ";
        cout << recTendik[i].getDepartemen() << "\t| ";
        cout << recTendik[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir()<<"\t| ";
        cout << recTendik[i].getUnit() << endl<<endl;
    }
    cout <<"===========================================================================================" << endl;
}

void showNilai(){
    cout <<"============================================================================================" << endl;
    cout <<"Id      | Nama Mahasiswa        | NPP           | Semester  | SKS Lulus     | IPS   | IPK   " << endl;
    cout <<"============================================================================================" << endl;
    for (int i = 0; i < idMhs; i++){
    cout << i << "\t| ";
    cout << recMhs[i].getNama() << "\t\t| ";
    cout << recMhs[i].getNRP() << "\t| ";
    int semester = recMhs[i].getSemester();
    cout << semester << "\t| ";
    cout << recMhs[i].getSKSLulus() << "\t| ";
    cout << recMhs[i].getIPS(semester) << "\t| ";
    recMhs[i].hitungIPK(semester);
    cout << recMhs[i].getIPK() << "\n ";
    }
    cout <<"============================================================================================" << endl;              
}

void login()
{
        int count;
        string user,pass,u,p;
        system("clear");
        cout<<"Silahkan masukan akun anda"<<endl;
        cout<<"Usernanme   : ";
        cin>>user;
        cout<<"Password    : ";
        cin>>pass;
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("clear");
                }
        }
        input.close();
        if(count==1){
                cout<<"\nHello"<<user<<"\nLOGIN ADMIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                admin();
        }
        else if(count==2){
                cout<<"\nHello"<<user<<"\nLOGIN MAHASISWA SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                mahasiswaa();
        }
        else if(count==3){
                cout<<"\nHello"<<user<<"\nLOGIN DOSEN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                dosenn;
        }
        else if(count==4){
                cout<<"\nHello"<<user<<"\nLOGIN TENDIK SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                tendikk();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

void registr()
{
        
        string reguser,regpass,ru,rp;
        system("clear");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"Enter the password :";
        cin>>regpass;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("clear");
        cout<<"\nRegistration Sucessful\n";
        main();
        
        
}

void exittt(){
        cout<<"======================================================================================\n";
        cout<<"                SAMPAI JUMPA KEMBALI DI UNIVERSITAS BACK TO NATURE                    \n"; 
        cout<<"======================================================================================\n";
        cout<<"TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI                                            \n";
        cout<<"Biodata Author                                                                        \n";
        cout<<"Nama       : I Wayan Agus Darmawan                                                    \n";
        cout<<"NRP        : 5024211070                                                               \n";
        cout<<"Departemen : Teknik Komputer                                                          \n";
        cout<<"Instansi   : Institut Teknologi Sepuluh Nopember Surabaya                             \n";
}

void forgot()
{
        int ch;
        system("clear");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;
                        
                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("clear");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("clear");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}