/* 
TUGAS BESAR TIC TAC TOE
Nama  	  : 1. Diana Fauziah (201524003)
			2. Khansa Rafifah Taqiyyah (201524012)
Kelas 	  : 1A-D4TI
Deskripsi : Aplikasi Permainan TICTACTOE sederhana.
Daftar Modul  :	1.	Modul utama  
				2.	Modul board 
				3.	Modul menu  
				4.	Modul cekmenang
				5.	Modul aturan 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

//Deklarasi modul
void board ();
int menu ();
void aturan();
int cekmenang();

	char kolom[10]= {'0','1','2','3','4','5','6','7','8','9'};
	int lanjut;
	int pick,i;
	char Pmark, Kmark;
	
//modul utama
int main (){ 
	//deklarasi
	int mainmenu = 1, player = 1;

	//algoritma
	/*Menu*/
	while (mainmenu==1){
	system ("cls");
	system("color F5");
	printf ("\n   Selamat Datang di Permainan TICTACTOE!\n");
	printf ("\n   MAIN MENU \n\n");
	printf ("   Ketik 'mulai' untuk memulai permainan\n");
	printf ("   Ketik 'aturan' jika anda belum tahu cara memainkan permainan TICTACTOE\n");
	printf ("   Ketik 'keluar' jika anda tidak ingin bermain game ini\n");
	printf ("\n   Silahkan ketik disini: ");
	mainmenu = menu();
	if (mainmenu == 0){
		printf ("Inputan anda salah!!\n");
		printf ("\n   Tekan enter untuk melanjutkan! ");
		getch();
		mainmenu = 1;
		continue;
	}
	else if (mainmenu == 2){
		system ("cls");
		aturan();
		mainmenu = 1;
		continue;
	}
	else if (mainmenu == 3){
		system ("cls");
		printf ("Yaudah deh, dadah!");
		return 0;
	}
	kolom[1]='1';
	kolom[2]='2';
	kolom[3]='3';
	kolom[4]='4';
	kolom[5]='5';
	kolom[6]='6';
	kolom[7]='7';
	kolom[8]='8';
	kolom[9]='9';
	player = 1;
	
	/*MULAI PERMAINAN*/
	do {
		board ();

			Pmark ='X';
			Kmark ='O';
		
		//Logika Player 
		if (player == 1){
		printf ("   Masukkan nomor kolom yang ingin anda pilih: ");
		int waktu_awal = clock();
		scanf ("%d", &pick);
		int waktu_akhir = clock();
		int batas = waktu_akhir - waktu_awal;
		if ((batas/1000) <= 3){
			if (pick == 1 && kolom[1] == '1'){
				kolom [1] = Pmark;
					player++;
			}
			else if (pick == 2 && kolom[2]=='2'){
				kolom[2]= Pmark;
					player++;
			}
			else if (pick == 3 && kolom[3]=='3'){
				kolom[3]=Pmark;
					player++;
			}
			else if (pick == 4 && kolom[4]=='4'){
				kolom[4]=Pmark;
					player++;
			}
			else if (pick == 5 && kolom[5]=='5'){
				kolom[5]=Pmark;
					player++;
			}
			else if (pick == 6 && kolom[6]=='6'){
				kolom[6]=Pmark;
					player++;
			}
			else if (pick == 7 && kolom[7]=='7'){
				kolom[7]=Pmark;
					player++;
			}
			else if (pick == 8 && kolom[8]=='8'){
				kolom[8]=Pmark;
					player++;
			}
			else if (pick == 9 && kolom[9]=='9'){
				kolom[9]=Pmark;
					player++;
			}
			else {
				printf ("Inputan kamu salah, silahkan coba lagi :");
				getch();
				player++;
			}
		} else {
            player++;
            printf("Melebihi Batas waktu");
            _sleep(1500);
            }
	    }
	    
	    //Logika Komputer
	  	if (player == 2) {
		 	player--; 
	    	if (kolom [1] != '1' && kolom [2] =='2' && kolom[3] == '3' && kolom[4] =='4'&& kolom[7] =='7' && kolom[9] =='9' && kolom[5] =='5' ){   //win
			kolom [5] = Kmark;
			}
			else if (kolom [1] == '1' && kolom [2] =='2' && kolom[3] == '3' && kolom[4] =='4'&& kolom[7] =='7' && kolom[9] =='9' && kolom[5] =='5' && kolom[6] =='6' && kolom[8] =='8' ){
			kolom [5] = Kmark;
			}
			else if (kolom[1] != '1' && kolom [2] != '2' && kolom [3] == '3' ){   
			kolom [3] = Kmark;
			}	
		/*	else if (kolom[6] == '6' && kolom [4] == '4' && kolom [5] != '5' || kolom[6] != '6' && kolom [4] == '4' && kolom [5] != '5' ){   
			kolom [4] = Kmark;
			}//coba
			else if (kolom[6] == '6' && kolom [4] != '4' && kolom [5] != '5' ){   
			kolom [6] = Kmark;
			}//coba
			else if (kolom[1] == '1' && kolom [2] == '2' && kolom [3] != '3' || kolom[1] != '1' && kolom [2] == '2' && kolom [3] != '3' ){   
			kolom [2] = Kmark;
			}//coba
			else if (kolom[1] == '1' && kolom [2] != '2' && kolom [3] != '3' ){   
			kolom [1] = Kmark;
			}//coba
			else if (kolom[1] != '1' && kolom [2] != '2' && kolom [3] == '3' ){   
			kolom [3] = Kmark;
			}//coba
			else if (kolom[7] == '7' && kolom [8] != '8' && kolom [9] != '9' ){   
			kolom [7] = Kmark;
			}//coba
			else if (kolom[7] != '7' && kolom [8] == '8' && kolom [9] != '9' ){   
			kolom [8] = Kmark;
			}//coba
			else if (kolom[7] != '7' && kolom [8] != '8' && kolom [9] == '9' ){   
			kolom [9] = Kmark;
			}//coba
			else if (kolom[5] != '5' && kolom [9] == '9' && kolom [1] == '1' || kolom[5] != '5' && kolom [9] != '9' && kolom [1] == '1' ){   
			kolom [1] = Kmark;
			}//coba diagonal
			else if (kolom[5] != '5' && kolom [9] == '9' && kolom [1] == '1' || kolom[5] != '5' && kolom [9] == '9' && kolom [1] != '1' ){   
			kolom [9] = Kmark;
			}//coba diagonal
			else if (kolom[5] != '5' && kolom [3] == '3' && kolom [7] == '7' || kolom[5] != '5' && kolom [3] == '3' && kolom [7] != '7' ){   
			kolom [3] = Kmark;
			}//coba diagonal kanan
			else if (kolom[5] != '5' && kolom [3] != '3' && kolom [7] == '7' || kolom[5] != '5' && kolom [3] == '3' && kolom [7] == '7' ){   
			kolom [7] = Kmark;
			}//coba diagonal kanan */
			else if (kolom[1] != '1' && kolom [3] != '3' && kolom [2] == '2'){   
			kolom [2] = Kmark;
			}
			else if (kolom[1] == Pmark && kolom [4] == Pmark && kolom [7] == '7' || kolom[1] != '1' && kolom [4] != '4' && kolom [7] == '7' ){   
			kolom [7] = Kmark;
			}
		
			else if (kolom[1] != '1' && kolom [7] != '7' && kolom [4] == '4'){   
			kolom [4] = Kmark;
			}
			else if (kolom[1]== Pmark && kolom [5] == Pmark && kolom[9]=='9'|| kolom[1] != '1'  && kolom[5] != '5' && kolom [9]=='9'){   
			kolom [9] = Kmark;
			}
			else if (kolom[1] != '1' && kolom [9] != '9' && kolom [5] == '5'){
			kolom[5] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [1] == '1' && kolom [3] == '3' && kolom[5]== '5' && kolom[8]== '8'){
			kolom[5] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [1] != '1' && kolom [3] == '3' ){
			kolom[3] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [3] != '3' && kolom [1] == '1'){	 //win	
			kolom[1] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [5] != '5' && kolom [8] == '8'){	
			kolom[8] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [8] != '8' && kolom [5] == '5'){	
			kolom[5] = Kmark;
			}
			else if (kolom[2] != '2' && kolom [1] != '1' && kolom [3] == '3'){
			kolom[3] = Kmark;
			}	//selesai
			else if (kolom[3] != '3' && kolom [1]== '1' && kolom[2] == '2' && kolom[6] == '6' && kolom[9] == '9' && kolom[7] == '7' && kolom[5] == '5'){	
			kolom[5] = Kmark;
			}
			else if (kolom[3] != '3' && kolom [2]!= '2' && kolom[1] == '1'){	
			kolom[1] = Kmark;
			}
			else if (kolom[3] != '3' && kolom [1] != '1' && kolom[2] == '2'){	
			kolom[2] = Kmark;
			}
			else if (kolom[3]!= '3' && kolom [6] != '6' && kolom[9] == '9'){
			kolom[9]= Kmark;
			}
			else if (kolom[3] != '3' && kolom [9] != '9' && kolom[6] == '6'){
			kolom[6]= Kmark;
			}
			else if (kolom[3] != '3' && kolom [5] != '5' && kolom[7] == '7'){
			kolom[7]= Kmark;
			}
			else if (kolom[3] != '3' && kolom [7] != '7' && kolom[5] == '5'){   
			kolom[5] = Kmark; //selesai
			}
			else if (kolom[4] != '4' && kolom [1] == '1' && kolom [7] == '7' && kolom[6]== '6' && kolom[5]== '5'){
			kolom[5]= Kmark;
			}
			else if (kolom[4] != '4' && kolom [1] != '1' && kolom[7]== '7'){
			kolom[7]= Kmark;
			}
			else if (kolom[4] != '4' && kolom [7] != '7' && kolom[1]== '1'){
			kolom[1]= Kmark;
			}
			else if (kolom[4] != '4' && kolom [5] != '5' && kolom[6]== '6'){
			kolom[6]= Kmark;
			}
			else if (kolom[4] != '4' && kolom [6] != '6' && kolom[5]== '5'){
			kolom[5]= Kmark; 	//selesai
			}
			else if (kolom[5] != '5' && kolom [1]=='1' && kolom [2]=='2' && kolom [3]=='3' && kolom [4]=='4' && kolom [6]=='6' && kolom [7]=='7' && kolom [8]=='8' && kolom [9]=='9'){
			kolom[4]= Kmark;
			}
			else if (kolom[5] != '5' && kolom [1] != '1' && kolom[9]== '9' ){
			kolom[9]= Kmark;
			}
			else if (kolom[5] != '5' && kolom [9] != '9' && kolom[1]== '1'){
			kolom[1] = Kmark;
			}	
			else if (kolom[5] != '5' && kolom [3] != '3' && kolom[7]== '7'){
			kolom[7]= Kmark;
			}	
			else if (kolom[5] != '5' && kolom [7] != '7' && kolom[3]== '3'){
			kolom[3]= Kmark;
			}
			else if (kolom[5] != '5' && kolom [2] != '2' && kolom[8]== '8'){
			kolom[8]= Kmark;
			}
			else if (kolom[5] != '5' && kolom [8] != '8' && kolom[2]== '2'){
			kolom[2]= Kmark;
			}		
			else if (kolom[5] != '5' && kolom [4] != '4' && kolom[6]== '6'){
			kolom[6]= Kmark;
			}	
			else if (kolom[5] != '5' && kolom [6] != '6' && kolom[4]== '4'){
			kolom[4]= Kmark; 	//selesai
			}
			else if (kolom[6] != '6' && kolom [3] == '3' && kolom [9] == '9' && kolom[4]== '4' && kolom[5]== '5'){
			kolom[5]= Kmark;
			}
			else if (kolom[6] != '6' && kolom [3] != '3' && kolom[9]== '9'){
			kolom[9]= Kmark;
			}
			else if (kolom[6] != '6' && kolom [9] != '9' && kolom[3]== '3'){
			kolom[3]= Kmark;
			}
			else if (kolom[6] != '6' && kolom [5] != '5' && kolom[4]== '4'){
			kolom[4]= Kmark;
			}
			else if (kolom[6] != '6' && kolom [4] != '4' && kolom[5]== '5'){
			kolom[5]= Kmark;	//selesai
			}
		    else if (kolom [7] != '7' && kolom [4] =='4' && kolom[1] == '1' && kolom[8] =='8'&& kolom[9] =='9' && kolom[3] =='3' && kolom[5] =='5' ){   //win
			kolom [5] = Kmark;
			}
			else if (kolom[7] != '7' && kolom [4] != '4' && kolom [1] == '1' ){   
			kolom [1] = Kmark;
			}	
			else if (kolom[7] != '7' && kolom [1] != '1' && kolom [4] == '4'){   
			kolom [4] = Kmark;
			}
			else if (kolom[7] != '7' && kolom [8] != '8' && kolom [9] == '9' ){   
			kolom [9] = Kmark;
			}
			else if (kolom[7] != '7' && kolom [5] != '5' && kolom [3] == '3'){   
			kolom [3] = Kmark;
			}
			else if (kolom[7] != '7' && kolom [3] != '3' && kolom [5] == '5'){   
			kolom [5] = Kmark; 
			}
			else if (kolom[7] != '7' && kolom [9] != '9' && kolom [8] == '8'){
			kolom[8] = Kmark; //selesai
			}
			else if (kolom[8] != '8' && kolom [7] == '7' && kolom [9] == '9' && kolom[5]== '5' && kolom[2]== '2'){
			kolom[5] = Kmark;
			}
			else if (kolom[8] != '8' && kolom [7]!= '7' && kolom [9] == '9' ){
			kolom[9] = Kmark;
			}
			else if (kolom[8] != '8' && kolom [9] != '9' && kolom [7] == '7'){	 //win	
			kolom[7] = Kmark;
			}
			else if (kolom[8] != '8' && kolom [5] != '5' && kolom [2] == '2'){	
			kolom[2] = Kmark;
			}
			else if (kolom[8] != '8' && kolom [2] != '2' && kolom [5] == '5'){	
			kolom[5] = Kmark;
			}	//selesai
			else if (kolom[9] != '9' && kolom [6]== '6' && kolom[3] == '3' && kolom[8] == '8' && kolom[7] == '7' && kolom[1] == '1' && kolom[5] == '5'){	
			kolom[5] = Kmark;
			}
			else if (kolom[9] != '9' && kolom [6]!= '6' && kolom[3] == '3'){	
			kolom[3] = Kmark;
			}
			else if (kolom[9] != '9' && kolom [3]!= '3'&& kolom[6] == '6'){	
			kolom[6] = Kmark;
			}
			else if (kolom[9] != '9' && kolom [8]!= '8' && kolom[7] == '7'){
			kolom[7]= Kmark;
			}
			else if (kolom[9] != '9' && kolom [7]!= '7' && kolom[8] == '8'){
			kolom[8]= Kmark;
			}
			else if (kolom[9] != '9' && kolom [5]!= '5' && kolom[1] == '1'){
			kolom[1]= Kmark;
			}
			else if (kolom[9] != '9' && kolom [1]!= '1' && kolom[5] == '5'){   
			kolom[5] = Kmark; //selesai
			}
			//tambahan error
			else if (kolom[2] != '2' && kolom [5]!= '5' && kolom[8] != '8' && kolom[9] == '9'){
			kolom[9]= Kmark;
			}
			else if (kolom[4] != '4' && kolom [5]!= '5' && kolom[6] != '6' && kolom[9] == '9'){
			kolom[9]= Kmark;
			}
			else if (kolom[1] != '1' && kolom [5]!= '5' && kolom[9] != '9' && kolom[8] == '8'){
			kolom[8]= Kmark;
			}
			else if (kolom[2] != '2' && kolom [1] != '1' && kolom [3] == '3'){	
			kolom[3] = Kmark;
			}
		
		}  
	i = cekmenang();
		
	}while (i == -1);
	
	board();
	
	if (i==1){
		printf ("   Wahhhh hebat! Kamu menang!");
		printf ("\n   Tekan enter untuk melanjutkan! ");
		getch();
	
	}else {
		printf ("\n   ANDA KALAAHHH T_T MAIN LAGI YUK!");
		printf ("\n   Tekan enter untuk melanjutkan! ");
		getch();
	}
	}
	return 0;
}

//Modul menu
int menu (){
	char menu[300];
	scanf("%s",&menu);
	if (strcmp(menu,"mulai")==0){
		return 1;
	}
	else if (strcmp(menu,"aturan")==0){
		return 2;
	}
	else if (strcmp(menu,"keluar")==0){
		return 3;
	}
	return 0;
}

//modul board
void board (){
	system ("cls");
	printf ("\n   Player : 'X'   VS    Komputer : 'O'\n\n");
	printf ("     -------------------------\n");
	printf ("     |       |       |       |\n");
	printf ("     |   %c   |   %c   |   %c   |\n", kolom[1], kolom[2],kolom[3]);
	printf ("     |       |       |       |\n");
	printf ("     -------------------------\n");
	printf ("     |       |       |       |\n");
	printf ("     |   %c   |   %c   |   %c   |\n", kolom[4], kolom[5],kolom[6]);
	printf ("     |       |       |       |\n");
	printf ("     -------------------------\n");
	printf ("     |       |       |       |\n");
	printf ("     |   %c   |   %c   |   %c   |\n", kolom[7], kolom[8],kolom[9]);
	printf ("     |       |       |       |\n");
	printf ("     -------------------------\n\n");
}

//modul aturan
void aturan(){
	int b;
	system ("cls");
	printf("\n 				    ATURAN BERMAIN GAME TICTACTOE SEDERHANA\n\n\n");
	printf ("   1. User hanya dapat memakai satu simbol yaitu 'X'.\n");
	printf ("   2. User memiliki tujuan memenangkan permainan dengan membuat garis lurus (vertikal, horizontal, diagonal).\n");
	printf ("   3. Untuk memulai permainan, user diharuskan untuk mengetik menu 'mulai'.\n");
	printf ("   4. User diberikan kesempatan bermain pertama dalam setiap putaran permainan\n");
	printf ("   5. Tidak ada batasan waktu untuk giliran pertama.\n");
	printf ("   6. User diberikan waktu 3 detik untuk meletakkan simbol. \n");
	printf ("   7. Ketika sudah lewat dari 3 detik, secara otomatis komputer akan mengisi kotak kosong dalam papan permainan.\n");
	printf ("   8. Permainan selesai ketika board telah terisi penuh atau salah satu pemain berhasil membuat satu garis lurus.\n\n");
	printf ("\n   Tekan enter untuk melanjutkan! ");
	getch();
}

//modul cekmenang
int cekmenang(){

	if (kolom[1] == 'X' && kolom[1] == kolom [2] && kolom[2] == kolom[3]){
		return 1;
	}else if (kolom[4]== 'X' && kolom[4] == kolom [5] && kolom[5]==kolom[6] ){
		return 1;
	}else if (kolom[7]== 'X' && kolom[7] == kolom [8] && kolom[8]==kolom[9] ){
		return 1;
	}else if (kolom[1]== 'X' && kolom[1] == kolom [4] && kolom[4]==kolom[7] ){
		return 1;
	}else if (kolom[2]== 'X' && kolom[2] == kolom [5] && kolom[5]==kolom[8] ){
		return 1;
	}else if (kolom[3]== 'X' && kolom[3] == kolom [6] && kolom[6]==kolom[9] ){
		return 1;
	}else if (kolom[1]== 'X' && kolom[1] == kolom [5] && kolom[5]==kolom[9] ){
		return 1;
	}else if (kolom[3]== 'X' && kolom[3] == kolom [5] && kolom[5]==kolom[7] ){
		return 1;
	}else if ( kolom [1] != '1' && kolom [2]!= '2' && kolom [3] != '3' && kolom [4]!= '4' && kolom [5] != '5' && kolom [6]!= '6' && kolom [7] != '7' && kolom [8]!= '8' && kolom [9] != '9' ){
		return 0;
	}else if (kolom[4]== 'O' && kolom[4] == kolom [5] && kolom[5]==kolom[6] ){
		return 0;
	}else if (kolom[7]== 'O' && kolom[7] == kolom [8] && kolom[8]==kolom[9] ){
		return 0;
	}else if (kolom[1]== 'O' && kolom[1] == kolom [4] && kolom[4]==kolom[7] ){
		return 0;
	}else if (kolom[2]== 'O' && kolom[2] == kolom [5] && kolom[5]==kolom[8] ){
		return 0;
	}else if (kolom[3]== 'O' && kolom[3] == kolom [6] && kolom[6]==kolom[9] ){
		return 0;
	}else if (kolom[1]== 'O' && kolom[1] == kolom [5] && kolom[5]==kolom[9] ){
		return 0;
	}else if (kolom[3]== 'O' && kolom[3] == kolom [5] && kolom[5]==kolom[7] ){
		return 0;
	}else {
		return -1;
	}
}
