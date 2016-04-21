#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int i,keberangkatan,tujuan,jml_sts;
    float jrk_sts[]={0,1.487,1.020,1.171,0.707,2.198,1.699,1.606,2.610,1.301,1.475,1.509,1.695,3.031,2.460,1.029,2.264,1.109,2.570,1.741,5.084,5.197,4.331,7.518};
    float tot_jarak;
    int harga;

    printf("__________________________________________________________      \n");
    printf("Aplikasi Pentarifan KRL-Kel.3              --___                \n");
    printf("                                            ,-'/                \n");
    printf("     ___------____________________________-'--'____            \n");
    printf("    /---------##########---###---##########----------\          \n");
    printf("   /] [_]      [___]      [___]      [___]       [_] [\         \n");
    printf("  /                       11256                  | |   \        \n");
    printf("  |           J  K  T               B  G  R      |_|   |        \n");
    printf("[=|____________________________________________________|=]      \n");
    printf("   )/_-(-o-)=__=(-o-)-   [_____]     -(-o-)=__=(-o-)-_\(        \n");
    printf("===========================================================     \n\n");
    printf("Kelompok 3 :\n\n");
    printf("1.Ananda Dwi Rahma          (41814120091) \n");
    printf("2.Ade Eka Asukma            (41814120090) \n");
    printf("3.Faiz Dwi Darmawan         (41814120142) \n");
    printf("4.Gana Muhibudin Azza       (41814120057) \n");
    printf("5.Lukman Adel Taufiqurahman (41814120088) \n\n");
    printf("===========================================================\n");
    printf("Tarif KRL per 2016 : \n\n");
    printf("Rp2.000 Untuk 25 km pertama\n");printf("Rp1.000 Untuk 10 km berikutnya\n");
    printf("===========================================================\n\n");

    printf("Daftar Stasiun KRL :\n");
    printf("1.Jakarta Kota              13.Pasar Minggu\n");
    printf("2.Jayakarta                 14.Tanjung Barat\n");
    printf("3.Mangga Besar              15.Lenteng Agung\n");
    printf("4.Sawah Besar               16.Univ.Pancasila\n");
    printf("5.Juanda                    17.Univ.Indonesia\n");
    printf("6.Gondangdia                18.Pondok Cina\n");
    printf("7.Cikini                    19.Depok Baru\n");
    printf("8.Manggarai                 20.Depok\n");
    printf("9.Tebet                     21.Citayam\n");
    printf("10.Cawang                   22.Bojong Gede\n");
    printf("11.Duren Kalibata           23.Cilebut\n");
    printf("12.Pasar Minggu Baru        24.Bogor\n\n");

    printf("Masukan Kode Stasiun (Keberangkatan) :\n");
    scanf("%i",&keberangkatan);
    printf("Masukan Kode Stasiun (Tujuan) :\n");
    scanf("%i",&tujuan);printf("\n\n");

    printf("===========================================================\n");
    printf("Rincian Pembayaran Anda\n");
    printf("===========================================================\n\n");


    //##--Kondisi jika Arah Jakarta Kota ke Bogor--##
    if(keberangkatan < tujuan){

        //##--Menghitung jarak stasiun--##
        for(i=keberangkatan;i<tujuan;i++){
            tot_jarak += jrk_sts[i];

        }
            //##--Kalkulasi Harga--##
            if(tot_jarak<=25){
                harga=2000;
                printf("Jarak Tempuh : ");printf("%.0f",round(tot_jarak));printf(" Km \n");
                printf("Jumlah yang harus anda bayar : Rp");
                printf("%i",harga);
            }else{
                harga=2000+(round((tot_jarak-25)/10)*1000);
                printf("Jarak Tempuh : ");printf("%.0f",round(tot_jarak));printf(" Km \n");
                printf("Jumlah yang harus anda bayar : Rp");
                printf("%i",harga);
            }
    } else {
        for(i=(keberangkatan-1);i>=tujuan;i--){
            tot_jarak += jrk_sts[i];
        }

         //##--Kalkulasi Harga--##
            if(tot_jarak<=25){
                harga=2000;
                printf("Jarak Tempuh : ");printf("%.0f",round(tot_jarak));printf(" Km \n");
                printf("Jumlah yang harus anda bayar : Rp");
                printf("%i",harga);
            }else{
                harga=2000+(round((tot_jarak-25)/10)*1000);
                printf("Jarak Tempuh : ");printf("%.0f",round(tot_jarak));printf(" Km \n");
                printf("Jumlah yang harus anda bayar : Rp");
                printf("%i",harga);
            }
    }
    printf("\n\n\n");
    printf("===========================================================\n");
    printf("TERIMA KASIH TELAH MENGGUNAKAN JASA KRL :D\n");
    printf("===========================================================\n\n");
    getch();
    return 0;
}

