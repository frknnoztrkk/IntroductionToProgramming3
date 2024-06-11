#include<iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;
int rastgeleDepo() {
	int enFazla = 100, enAz = 0;
	
	return rand() % (enFazla - enAz + 1) + enAz;
}

int durum(int sayı) {
	
	if (sayı > 0) {
		return sayı;
	}
	return 0;
}


int main() {
	srand((unsigned int)time(NULL));
	setlocale(LC_ALL, "Turkish");
	cout << "A Parçası Bilgiler " << endl;
	int gereklia1=20, gereklia2=58, gereklia3=70, gereklia4=63, gereklia5=80;
	cout << "Gerekli Malzeme: " << endl;
	cout << "a1 =" << gereklia1 << "br" << setw(15) 
		 << "a2 =" << gereklia2 << "br" << setw(15)
		 << "a3 =" << gereklia3 << "br" << setw(15)
		 << "a4 =" << gereklia4 << "br" << setw(15)
		 << "a5 =" << gereklia5 << "br" << endl;

	cout << "Depo Durumu:"<<endl;
	int depoa1 = rastgeleDepo();
	cout << "a1 =" << depoa1 << "br" << setw(15);
	int depoa2 = rastgeleDepo();
	cout << "a2 =" << depoa2 << "br" << setw(15);
	int depoa3 = rastgeleDepo();
	cout << "a3 =" << depoa3 << "br" << setw(15);
	int depoa4 = rastgeleDepo();
	cout << "a4 =" << depoa4 << "br" << setw(15);
	int depoa5 = rastgeleDepo();
	cout << "a5 =" << depoa5 << "br" << setw(15)<< endl;

	cout << "İhtiyaç Duyulan Malzeme:"<< endl;
	cout << "a1 =" << gereklia1-depoa1 << "br" <<setw(15)
		 << "a2 =" << gereklia2-depoa2 << "br" <<setw(15)
		 << "a3 =" << gereklia3-depoa3 << "br" <<setw(15)
	     << "a4 =" << gereklia4-depoa4 << "br" <<setw(15)
    	 << "a5 =" << gereklia5-depoa5 << "br" <<endl;
	cout << "Birim Başı Üretim Zamanı:" << endl;
	cout << "a1 = 2gün" << setw(19);
	cout << "a2 = 5gün" << setw(19);
	cout << "a3 = 7gün" << setw(19);
	cout << "a4 = 6gün" << setw(19);
	cout << "a5 = 8gün" << setw(19) << endl;
	
	int toplama1 = gereklia1 - depoa1, toplama2 = gereklia2 - depoa2;
	int	toplama3 = gereklia3 - depoa3, toplama4 = gereklia4 - depoa4;
	int toplama5 = gereklia5 - depoa5;
	
	toplama1 = 2 * durum(toplama1);
	toplama2 = 5 * durum(toplama2);
	toplama3 = 7 * durum(toplama3);
	toplama4 = 6 * durum(toplama4);
	toplama5 = 8 * durum(toplama5);
	
	cout << "Toplam Gerekli Zaman " << endl;
	cout << "A parçası için gerekli zaman =";
	int zamanA;
	zamanA = toplama1 + toplama2 + toplama3 + toplama4 + toplama5;
	cout << zamanA << endl;
	cout << endl;
	cout << "B Parçası Bilgiler " << endl;
	int gereklib1 = 10, gereklib2 = 30, gereklib3 = 45, gereklib4 = 58;
	int gereklib5 = 70, gereklib6 = 10, gereklib7 = 12;
	cout << "Gerekli Malzeme: " << endl;
	cout << "b1 =" << gereklib1 << "br" << setw(14)
		 << "b2 =" << gereklib2 << "br" << setw(14)
		 << "b3 =" << gereklib3 << "br" << setw(14)
		 << "b4 =" << gereklib4 << "br" << setw(14)
	   	 << "b5 =" << gereklib5 << "br" << setw(14)
		 << "b6 =" << gereklib6 << "br" << setw(14)
		 << "b7 =" << gereklib7 << "br" << endl;

	cout << "Depo Durumu:" << endl;
	int depob1 = rastgeleDepo();
	cout << "b1 =" << depob1 << "br" << setw(14);
	int depob2 = rastgeleDepo();
	cout << "b2 =" << depob2 << "br" << setw(14);
	int depob3 = rastgeleDepo();
	cout << "b3 =" << depob3 << "br" << setw(14);
	int depob4 = rastgeleDepo();
	cout << "b4 =" << depob4 << "br" << setw(14);
	int depob5 = rastgeleDepo();
	cout << "b5 =" << depob5 << "br" << setw(14);
	int depob6 = rastgeleDepo();
	cout << "b6 =" << depob6 << "br" << setw(14);
	int depob7 = rastgeleDepo();
	cout << "b7 =" << depob7 << "br" << setw(14) << endl;

	cout << "İhtiyaç Duyulan Malzeme:" << endl;
	cout << "b1 =" << gereklib1 - depob1 << "br" << setw(13)
		 << "b2 =" << gereklib2 - depob2 << "br" << setw(13)
		 << "b3 =" << gereklib3 - depob3 << "br" << setw(13)
		 << "b4 =" << gereklib4 - depob4 << "br" << setw(13)
		 << "b4 =" << gereklib5 - depob5 << "br" << setw(13)
		 << "b4 =" << gereklib6 - depob6 << "br" << setw(13)
		 << "b5 =" << gereklib7 - depob7 << "br" << endl;
	cout << "Birim Başı Üretim Zamanı:" << endl;
	cout << "b1 = 1gün" << setw(18);
	cout << "b2 = 3gün" << setw(18);
	cout << "b3 = 4gün" << setw(18);
	cout << "b4 = 5gün" << setw(18);
	cout << "b5 = 7gün" << setw(18);
	cout << "b6 = 10gün" << setw(18);
	cout << "b7 = 12gün" << setw(15) << endl;

	int toplamb1 = gereklib1 - depob1, toplamb2 = gereklib2 - depob2;
	int	toplamb3 = gereklib3 - depob3, toplamb4 = gereklib4 - depob4;
	int toplamb5 = gereklib5 - depob5, toplamb6 = gereklib6 - depob6, toplamb7 = gereklib7 - depob7;
	toplamb1 = 1  * durum(toplamb1);
	toplamb2 = 3  * durum(toplamb2);
	toplamb3 = 4  * durum(toplamb3);
	toplamb4 = 5  * durum(toplamb4);
	toplamb5 = 7  * durum(toplamb5);
	toplamb6 = 10 * durum(toplamb6);
	toplamb7 = 12 * durum(toplamb7);
	cout << "Toplam Gerekli Zaman " << endl;
	cout << "B parçası için gerekli zaman =";
	int zamanB;
	zamanB = toplamb1 + toplamb2 + toplamb3 + toplamb4 + toplamb5 + toplamb6 + toplamb7;
	cout << zamanB << endl;
	cout << endl;

	cout << "C Parçası Bilgiler " << endl;
	int gereklic1 = 20, gereklic2 = 82, gereklic3 = 40;
	cout << "Gerekli Malzeme: " << endl;
	cout << "c1 =" << gereklic1 << "br" << setw(15)
		 << "c2 =" << gereklic2 << "br" << setw(15)
		 << "c3 =" << gereklic3 << "br" << endl;

	cout << "Depo Durumu:" << endl;
	int depoc1 = rastgeleDepo();
	cout << "c1 =" << depoc1 << "br" << setw(15);
	int depoc2 = rastgeleDepo();
	cout << "c2 =" << depoc2 << "br" << setw(15);
	int depoc3 = rastgeleDepo();
	cout << "c3 =" << depoc3 << "br" << setw(15) << endl;

	cout << "İhtiyaç Duyulan Malzeme:" << endl;
	cout << "c1 =" << gereklic1 - depoc1 << "br" << setw(15)
		 << "c2 =" << gereklic2 - depoc2 << "br" << setw(15)
		 << "c3 =" << gereklic3 - depoc3 << "br" << endl;
	cout << "Birim Başı Üretim Zamanı:" << endl;
	cout << "c1 = 2gün" << setw(19);
	cout << "c2 = 8gün" << setw(19);
	cout << "c3 = 4gün" << setw(19) << endl;

	int toplamc1 = gereklic1 - depoc1, toplamc2 = gereklic2 - depoc2;
	int	toplamc3 = gereklic3 - depoc3;

	toplamc1 = 2 * durum(toplamc1);
	toplamc2 = 8 * durum(toplamc2);
	toplamc3 = 4 * durum(toplamc3);

	cout << "Toplam Gerekli Zaman " << endl;
	cout << "C parçası için gerekli zaman =";
	int zamanC = toplamc1 + toplamc2 + toplamc3;
	cout << zamanC << endl;
	cout << endl;
	int zamanAmontaj = 3, zamanBmontaj = 7, zamanCmontaj = 8, ürünmontaj = 12;
	int toplamG = zamanA + zamanB + zamanC + zamanAmontaj + zamanBmontaj + zamanCmontaj + ürünmontaj;
	cout << "Üretim için Toplam Gerekli Zaman: " << endl;
	cout << "A parçası:  " << setw(15) << zamanA << "gün" << endl;
	cout << "A montaj:   " << setw(15) << zamanAmontaj << "gün" << endl;
	cout << "B parçası:  " << setw(15) << zamanB << "gün" << endl;
	cout << "B montaj:   " << setw(15) << zamanBmontaj << "gün" << endl;
	cout << "C parçası:  " << setw(15) << zamanC << "gün" << endl;
	cout << "C montaj:   " << setw(15) << zamanCmontaj << "gün" << endl;
	cout << "Ürün montaj:" << setw(15) << ürünmontaj << "gün" << endl;

	cout << "-----------------------------------------------" << endl;
	cout << "Toplam =" << setw(20) << toplamG << "gün";


	// dosyaya yazma
	ofstream dosyaYaz("dosya.txt");
	dosyaYaz << "Üretim için Toplam Gerekli Zaman: " << endl;
	dosyaYaz << "A parçası:  " << setw(15) << zamanA << "gün" << endl;
	dosyaYaz << "A montaj:   " << setw(15) << zamanAmontaj << "gün" << endl;
	dosyaYaz << "B parçası:  " << setw(15) << zamanB << "gün" << endl;
	dosyaYaz << "B montaj:   " << setw(15) << zamanBmontaj << "gün" << endl;
	dosyaYaz << "C parçası:  " << setw(15) << zamanC << "gün" << endl;
	dosyaYaz << "C montaj:   " << setw(15) << zamanCmontaj << "gün" << endl;
	dosyaYaz << "Ürün montaj:" << setw(15) << ürünmontaj << "gün" << endl;

	dosyaYaz << "-----------------------------------------------" << endl;
	dosyaYaz<< "Toplam =" << setw(20) << toplamG << "gün";

	return 0;
}