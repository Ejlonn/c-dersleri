#include <stdio.h>
#include <string.h>

typedef struct std  // burda uzun uzun yazmak yerine typedef ile std yi "struct std" olarak belirledim.
{                   // std her yazdıgımda "struct std" olarak çalışıcak
    char name[20];
    char surname[20];
    int id;
}std;


/*int main(){

    std student1;
    std *phold;

    strcpy(student1.name,"Batuhan");
    strcpy(student1.surname,"Kaya");
    student1.id = 1002;
    phold = &student1;

    printf("%s %s %d\n",student1.name,student1.surname,student1.id);
    
    printf("%s %s %d",phold->name,phold->surname,phold->id);


    return 0;
}*/

/*std *callvalue(std *p){   // bunu void olarak yazabiliriz hiç bir farkı yok çünkü call by referance kullanıyoruz.

    strcpy(p->name,"Kaya");
    strcpy(p->surname,"Batuhan");
    p->id = 638;
    return p;
}*/
void *callvalue(std *p){   // bunu void olarak yazabiliriz hiç bir farkı yok çünkü call by referance kullanıyoruz.
                           // bu şekilde hem değer dönmüyoruz, hem de gereksiz geçici değişken oluşturmakla uğraşmıyoruz.

    strcpy(p->name,"Kaya");
    strcpy(p->surname,"Batuhan");
    p->id = 638;
}

void show(std *p){

    printf("Ogrencinin bilgileri\nIsim:%s\nSoyisim:%s\nNo:%d\n",p->name,p->surname,p->id);

}

int main(){
    std *phold;
    std student1 = {"Batuhan","Kaya",1002};

    callvalue(&student1);
    
    printf ("%s %s %d\n",phold->name,phold->surname,phold->id);
    
    printf("%s %s %d",student1.name,student1.surname,student1.id);
    
    show(phold);
    return 0;
}