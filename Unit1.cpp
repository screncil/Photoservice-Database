//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

const char filename[] = "file.txt";

int rows = 20;

struct Client
{
char surname[30];
char photoservice[40];
int order_count;
float price_per_count;
} clients;

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Tb->Cells[0][0] = "№";
Tb->Cells[1][0] = "Клієнт";
Tb->Cells[2][0] = "Фотопослуга";
Tb->Cells[3][0] = "Кількість одиниць замовлення";
Tb->Cells[4][0] = "Ціна за одиницю (грн)";
Tb->Cells[5][0] = "Загальна вартість послуги (грн)";
}
//---------------------------------------------------------------------------


void Del(void)
{
for (int j = 0; j < 5; j++)
for (int i = 1; i <= rows; i++)
Form1->Tb->Cells[j][i] = "";
}

void __fastcall TForm1::N2Click(TObject *Sender)
{

String surname, service;


TFileStream *fz = new TFileStream(filename, fmOpenWrite);

for (int i = 1; i <= rows; i++)
{
        surname = Tb->Cells[1][i];
        service = Tb->Cells[2][i];
        strcpy(clients.surname, surname.c_str());
        strcpy(clients.photoservice, service.c_str());

        clients.order_count = StrToInt(Tb->Cells[3][i]);
        clients.price_per_count = StrToFloat(Tb->Cells[4][i]);

        fz->Write(&clients, sizeof(Client));
}

delete fz;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
TFileStream *fz = new TFileStream(filename, fmOpenRead);
Del();

fz->Position = 0;

for (int i = 1; i <= rows; i++)
{
fz->Read(&clients, sizeof(Client));
Tb->Cells[0][i] = IntToStr(i);
Tb->Cells[1][i] = clients.surname;
Tb->Cells[2][i] = clients.photoservice;
Tb->Cells[3][i] = IntToStr(clients.order_count);
Tb->Cells[4][i] = FloatToStr(clients.price_per_count);
}
delete fz;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N6Click(TObject *Sender)
{
String search = InputBox("Пошук даних клієнта","Клієнт","");
TFileStream *fz = new TFileStream(filename, fmOpenRead);

fz->Position = 0;

Del();

int j = 1;

for (int i = 1; i <= rows; i++)
{
fz->Read(&clients, sizeof(Client));

if (strcmp(search.c_str(), clients.surname) == 0)
{
Tb->Cells[0][j] = IntToStr(j);
Tb->Cells[1][j] = clients.surname;
Tb->Cells[2][j] = clients.photoservice;
Tb->Cells[3][j] = clients.order_count;
Tb->Cells[4][j] = clients.price_per_count;
j++;
}

}

delete fz;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
 int i,j;
        int gr = 4; //стовець для сортування
        for (j=1; j<Tb->RowCount+1; j++)
        for (i=1; i<Tb->RowCount-j; i++)
        {
		Tb->Cells[0][i]=i;
        if (StrToInt(Tb->Cells[gr][i]) < StrToInt(Tb->Cells[gr][i+1]))
		{
        Tb->Rows[Tb->RowCount+1]=Tb->Rows[i+1];
        Tb->Rows[i+1]= Tb->Rows[i];
        Tb->Rows[i]=Tb->Rows[Tb->RowCount+1];
        }
        }
       for (int i = 1; i < Tb->RowCount; ++i) {
        Tb->Cells[0][i] = IntToStr(i);
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N9Click(TObject *Sender)
{
 int i,j;
        int gr = 4; //стовець для сортування
        for (j=1; j<Tb->RowCount+1; j++)
        for (i=1; i<Tb->RowCount-j; i++)
        {
		Tb->Cells[0][i]=i;
        if (StrToInt(Tb->Cells[gr][i]) > StrToInt(Tb->Cells[gr][i+1]))
		{
        Tb->Rows[Tb->RowCount+1]=Tb->Rows[i+1];
        Tb->Rows[i+1]= Tb->Rows[i];
        Tb->Rows[i]=Tb->Rows[Tb->RowCount+1];
        }
        }
       for (int i = 1; i < Tb->RowCount; ++i) {
        Tb->Cells[0][i] = IntToStr(i);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
TFileStream *fz = new TFileStream(filename, fmOpenRead);
Del();

fz->Position = 0;

for (int i = 1; i <= rows; i++)
{
fz->Read(&clients, sizeof(Client));
Tb->Cells[0][i] = IntToStr(i);
Tb->Cells[1][i] = clients.surname;
Tb->Cells[2][i] = clients.photoservice;
Tb->Cells[3][i] = IntToStr(clients.order_count);
Tb->Cells[4][i] = FloatToStr(clients.price_per_count);
Tb->Cells[5][i] = FloatToStr(clients.order_count * clients.price_per_count);
}
delete fz;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
  Application->Title="Про програму";
  ShowMessage ("Курсовий проєкт на тему: Фотосервіс.\nСтудента групи КІ-2-21 Селіхова Іллі.\nКерівник КП: Бахмет О.В.");
        
}
//---------------------------------------------------------------------------

