#include <stdio.h>
/*
typedef struct student
{
    char name[20];
    char surname[20];
    int id;
}student;

int main(){ 

    student students[3];
    int i;

    for (i = 0; i < 3 ; i++){
        printf("%d inci ogrencinin bilgilerini girin:\n",i+1);
        scanf("%s %s %d",&students[i].name,&students[i].surname,&students[i].id);

    }

   for (i = 0; i < 3 ; i++){
        
        printf("%d ninci ogrencinin bilgileri: %s, %s, %d\n",i+1,students[i].name,students[i].surname,students[i].id);
   }


    return 0;
}
*/

typedef struct std  // burda uzun uzun yazmak yerine typedef ile std yi "struct std" olarak belirledim.
{                   // std her yazdıgımda "struct std" olarak çalışıcak
    char name[20];
    char surname[20];
    int id;
}std;

void show(std a){ // burda değer dondürmeyen sadece print amacı olan bi fonksiyon

    printf("Ogrencinin bilgileri: %s %s %d",a.name,a.surname,a.id);
}
std degeral(){ // burda std yapımıza eleman eklemek için bi fonksyion, struct fonksiyonu.

    std stdnew;  // local bi struct değişkeni, Sadece burda yaşıyor. 
    printf("Bilgilerini girin:");
    scanf("%s %s %d",&stdnew.name,&stdnew.surname,&stdnew.id);
    return stdnew; // burda yaşayan değişkeni ana fonksiyona gönderiyoruz.

}

int main(){

    std std1 = degeral();    
    show(std1);



    return 0;
}