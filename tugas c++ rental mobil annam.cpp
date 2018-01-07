#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
head()
 {
  puts("-----------------------------------------------------------");
  puts("*           ****RENTAL/SEWA MOBIL ANNAM&ANDI****          *");
  puts("*                      ***GO CAR GO***                    *");
  puts("-----------------------------------------------------------");
 }

main()
{
struct
 {char np[30],
  no_hp[15],
  almt[30];}datpe;

int i,j;
char kode_k,kasir[20],lagi;
long int total_byr=0,bayar,kembali;
char kode_brg[30],*barang[30];
int harga[30];
int jml_bel[10],lam_sew[5];
long int sub_total[30];

clrscr();
head();
cout<<"KODE KASIR\n";
cout<<"     1. Annam\n";
cout<<"     2. Andi\n";
cout<<"Masukkan Kode Kasir[1/2]  : "; cin>>kode_k;
 switch(kode_k)
 {
 case'1':
 strcpy(kasir,"Annam");
 break;
 case'2':
 strcpy(kasir,"Andi");
 break;
 default:
 strcpy(kasir,"Kode Salah");
 break;
 }
 clrscr();
 head();
 cout<<"     Selamat Datang Di Rental Mobil Annam&Andi \n\n";
cout<<"Nama Penyewa      : ";gets(datpe.np);
cout<<"No HP             : ";gets(datpe.no_hp);
cout<<"Alamat            : ";gets(datpe.almt);
cout<<"Jumlah Data       : ";cin>>j;
clrscr();

mulai:
clrscr();
head();
cout<<"KODE MOBIL\n";
puts("----------------------------------------------------------");
puts("*                     **** SEDAN ****                    *");
puts("----------------------------------------------------------");
puts("KODE        Nama Mobil                  Harga Sewa/Hari");
puts("----------------------------------------------------------");
puts("[A]         Honda Civic                  Rp.600.000-,");
puts("[B]         Mazda 2                      Rp.650.000-,");
puts("[C]         Corolla Altis                Rp.450.000-,");
puts("[D]         BMW 3 Series                 Rp.700.000-,");
puts("----------------------------------------------------------");
puts("*                  **** MINI BUS ****                    *");
puts("----------------------------------------------------------");
puts("[E]         Suzuki APV                   Rp.350.000-,");
puts("[F]         Daihatsu luxio               Rp.400.000-,");
puts("[G]         Nissan Serena                Rp.450.000-,");
puts("[H]         Toyota Sienta                Rp.470.000-,");
puts("----------------------------------------------------------");
puts("*                **** MOBIL PICK UP ****                 *");
puts("----------------------------------------------------------");
puts("[I]         Daihatsu Grand Max           Rp.300.000-,");
puts("[J]         Suzuki Carry                 Rp.250.000-,");
puts("[K]         Pick Up Colt                 Rp.200.000-,");
puts("[L]         Toyota Hilux S               Rp.350.000-,");
cout<<"---------------------------------------------------------"<<endl;

for(i=1;i<=j;i++)
{
cout<<"Data Ke-"<<i<<endl;
cout<<"Kode Mobil          : ";cin>>kode_brg[i];
cout<<"Jumlah sewa         : ";cin>>jml_bel[i];
cout<<"Lama Sewa           : ";cin>>lam_sew[i];
cout<<"---------------------------------------------------------"<<endl;
}
 for(i=1;i<=j;i++)
 {
   if(kode_brg[i]=='A'||kode_brg[i]=='a')
    {
    barang[i]="Honda Civic";
    harga[i]=600000;
    }
    else if(kode_brg[i]=='B'||kode_brg[i]=='b')
    {
    barang[i]="Mazda 2";
    harga[i]=650000;
    }
    else if(kode_brg[i]=='C'||kode_brg[i]=='c')
    {
    barang[i]="Corolla Altis";
    harga[i]=450000;
    }
    else if(kode_brg[i]=='D'||kode_brg[i]=='d')
    {
    barang[i]="BMW 3 series";
    harga[i]=700000;
    }
    else if(kode_brg[i]=='E'||kode_brg[i]=='e')
    {
    barang[i]="Zusuki APV";
    harga[i]=350000;
    }
    else if(kode_brg[i]=='F'||kode_brg[i]=='f')
    {
    barang[i]="Daihatsu luxio";
    harga[i]=400000;
    }
    else if(kode_brg[i]=='G'||kode_brg[i]=='g')
    {
    barang[i]="Nissan Serena";
    harga[i]=450000;
    }
    else if(kode_brg[i]=='H'||kode_brg[i]=='h')
    {
    barang[i]="Toyota Sienta";
    harga[i]=470000;
    }
    else if(kode_brg[i]=='I'||kode_brg[i]=='i')
    {
    barang[i]="Grand Max";
    harga[i]=300000;
    }
    else if(kode_brg[i]=='J'||kode_brg[i]=='j')
    {
    barang[i]="Suzuki carry";
    harga[i]=250000;
    }
    else if(kode_brg[i]=='K'||kode_brg[i]=='k')
    {
    barang[i]="Pick Up colt";
    harga[i]=200000;
    }
    else if(kode_brg[i]=='L'||kode_brg[i]=='l')
    {
    barang[i]="Toyota Hilux";
    harga[i]=350000;
    }
    else
    {
    barang[i]="Kode Salah";
    harga[i]=0;
    }
 }
clrscr();
head();
cout<<"Nama Kasir        : "<<kasir<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Nama Penyewa      : "<<datpe.np<<endl;
cout<<"No HP             : "<<datpe.no_hp<<endl;
cout<<"Alamat            : "<<datpe.almt<<endl;
cout<<"-------------------------------------------------------------------"<<endl;
cout<<"No.|    Nama Mobil   |   Harga   | Jumlah | LamaSewa |  Sub Total |    \n";
cout<<"-------------------------------------------------------------------"<<endl;
   for(i=1;i<=j;i++)
   {
      sub_total[i]=jml_bel[i]*harga[i]*lam_sew[i];
      cout<<setiosflags(ios::left)<<setw(5)<<i;
      cout<<setiosflags(ios::left)<<setw(14)<<barang[i];
      cout<<setiosflags(ios::right)<<setw(13)<<harga[i];
      cout<<setiosflags(ios::right)<<setw(8)<<jml_bel[i];
      sub_total[i]=harga[i]*jml_bel[i]*lam_sew[i];
      cout<<setiosflags(ios::right)<<setw(8)<<lam_sew[i];
      cout<<setiosflags(ios::right)<<setw(16)<<sub_total[i]<<endl;
      total_byr=total_byr+sub_total[i];
   }
cout<<"-------------------------------------------------------------------"<<endl;
cout<<"                                      Total Bayar   :Rp. "<<total_byr<<endl;
cout<<"                                      Uang Bayar    :Rp. "; cin>>bayar;
kembali=bayar-total_byr;
cout<<"                                      Uang Kembali  :Rp. "<<kembali<<endl;
cout<<endl;
cout<<"----------------------------Terima Kasih---------------------------\n";
cout<<"Input Lagi [Y/T] : "; cin>>lagi;
cout<<endl;
 if(lagi=='Y'||lagi=='y')
 {goto mulai;}
 else
 {goto selesai;}

 return 0;
   getch();
   selesai:
}