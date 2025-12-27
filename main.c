#include <stdio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int araba(float araba_fiyat[],char *araba_isimleri[],int index,int gun_sayisi,float *bakiye)
{
	
            float toplam_tutar = araba_fiyat[index]*gun_sayisi; 
            
            	if(*bakiye >= toplam_tutar)
				{
                	*bakiye = *bakiye - toplam_tutar;
                	printf("\nIslem Basarili");
                	printf("\n %d gunluk %s kiralama bedeli: %.2f TL", gun_sayisi,araba_isimleri[index], toplam_tutar);
                	printf("\nKalan bakiyeniz: %.2f TL\n", *bakiye);
            	} 
            	else
				{
                	printf("\nYetersiz bakiye! Toplam tutar: %.2f TL, Bakiyeniz: %.2f TL\n", toplam_tutar, *bakiye);
                	printf("Guncel bakiyeniz: %d TLdir",*bakiye);
            	}
            	return toplam_tutar;
}
	
void hakkimizda()
 {
    

    printf("================================================================================\n");
    printf("                          HAKKIMIZDA & GUVENCE                              \n");
    printf("================================================================================\n\n");
    
    printf("  -Otomobillerimizin tamami periyodik aylik bakimlardan gecmekte olup,\n");
    printf("  olasi her turlu aksakliga karsi ust duzey sigorta sistemleri ile\n");
    printf("  hem sizi hem de araclarimizi guvence altina almaktayiz.\n\n");

    printf("  -Sagliginiz bizim icin onemli! Araclarimiz her kiralama oncesinde\n");
    printf("  ust duzey antibakteriyel jeller ve ozel solusyonlar yardimiyla\n");
    printf("  titizlikle dezenfekte edilmektedir.\n\n");

    printf("  -Konforlu yolculugunuz icin tum araclarimiz ucretli gecis sistemleri\n");
    printf("  (HGS/OGS) ile entegre calismaktadir.\n\n");

    printf("  -Bizi tercih ettiginiz icin tesekkur eder, iyi yolculuklar dileriz.\n");
    printf("--------------------------------------------------------------------------------\n");
}








int main()
{
	float guncelbakiye=0,bakiye=0,yatirlacaktutar=0,butce=0,miktar[]={500,1000},araba_fiyat[]={800,700,650,500,400};
	char kullaniciAdi[20],*araba_isimleri[]={"Audi","BMW","TOGG","FORD","BYD"};
	int gun_sayisi=0,arabano=0,durum=0,sifre[4],secenek=0,secenekfiyat=0,rakam=0 ;
	

	printf("------------------RDA OTO KIRALAMA SIKETINE HOSGELDINIZ.------------------\n\n");
	printf("1990dan beri Muglada genis arac filomuz,ust duzey konforumuz ile birlikte hizmetinizdeyizm.\n\n");
	
	
	printf("kayit islemleri icin [1]'e,zaten kaydiniz mevcut ise [2]'ye basiniz.\n");
	scanf("%d", &durum);
	if(durum==1)
	{
		
		printf("kullanici adinizi olusturunuz: ");
		scanf("%s", &kullaniciAdi);
		
		printf("sifrenizi olusturunuz: ");
		scanf("%d", &sifre);
	}
	else if(durum==2) 
	{

	
	printf("kullanici adinizi giriniz: ");
	scanf("%s", &kullaniciAdi);
	
	printf("sifrenizi giriniz: ");
	scanf("%s", &sifre);
		
	}
	else
	{
		printf("farklý bir deger girdiniz\n\n");
		return main();
	}
	
	while(1)
	{
	
	printf("\n--- ANA MENU ---\n");
	printf("1)Para Yatirma\n2)Gunluk Otomobil Kiralama\n3)Otomobil Bilgileri ve Haklar\n4)Cikis\n");
	scanf("%d", &secenek);
	if(secenek==1)
	{
		
		while(1)
		{
		printf("Yatirilacak miktarý giriniz(500 tl için 1 e bas , 1000 için 2 ye bas , Ana menüye dönemk için 3e bas):\n");
		scanf("%d", &secenekfiyat);
		if(secenekfiyat==1)
		{
			printf("yatiralacak tutar:%1.f\n",miktar[0]);
			bakiye=bakiye+miktar[0];
			printf("bakiye:%1.f\n",bakiye);
			
		}
		else if(secenekfiyat==2)
		{
			printf("yatiralacak tutar:%1.f",miktar[1]);
			bakiye=bakiye+miktar[1];
			printf("bakiye:%1.f\n",bakiye);
			
		}
		else if(secenekfiyat==3)
		{
			break;
		}
		else
		{
			printf("yanlýþ deger");
		}
		}
	}
	else if(secenek==2)
	{
		printf("günlük kiralama sitemindesiniz\n");
		printf("kiralamaya uygun durumdaki mevcut arabalarimiz\n\n");
		printf("------------\n");
		printf("1)Audi 800tl,\n2)Bmw 700tl,\n3)Togg 650tl,\n4)Ford 500tl,\n5)Citroen 400tl\n");
		printf("\nkiralaycagýnýz arabayi seciniz\n");
		scanf("%d",&arabano);
		printf("Kac gun kiralamak istiyorsunuz?: ");
        scanf("%d", &gun_sayisi);
        
		
		if(arabano==1)
		{
		 
             
        	
           araba(araba_fiyat,araba_isimleri,0,gun_sayisi,&bakiye);
        	
		
		}
		else if(arabano==2)
		{
			
			araba(araba_fiyat,araba_isimleri,1,gun_sayisi,&bakiye);
					
			
			
		}
		else if(arabano==3)
		{
			araba(araba_fiyat,araba_isimleri,2,gun_sayisi,&bakiye);
			
		
		}
		else if(arabano==4)
		{
			araba(araba_fiyat,araba_isimleri,3,gun_sayisi,&bakiye);
				
		}
		else if(arabano==5)
		{
			araba(araba_fiyat,araba_isimleri,4,gun_sayisi,&bakiye);
		}
		else
		{
			printf("\nHatali arac secimi yaptiniz! Ana menuye yonlendiriliyorsunuz.\n");
		}
		
	}
	else if(secenek==3)
	{
		hakkimizda();
	}
	else if(secenek==4)
	{
		break;
	}
	}
	
	
	
return 0;	
}	




