#include <iostream>
#include <cstdlib>



using namespace std;

int main()
{
    bool gameOver=false;
    int sizeX=7;
    int sizeY=7;
    char** ary = new char*[sizeX];
    for(int i = 0; i < sizeX; ++i)
        ary[i] = new char[sizeY];
    int fila=0;
    int columna=0;
    int columnar=1;
    int filar=1;
    int respuesta=1;


//    for(int c = 0; c < sizeX; c++)
//    {
//        for(int f = 0; f <sizeY; f++)
//        {
//            ary[c][f]='~';
//        }
//    }



//    for(int c = 0; c < sizeX; c++)
//    {
//        for(int f = 0; f <sizeY; f++)
//        {
//            cout<<ary[c][f];
//        }
//        cout<<"\n";
//    }
while(respuesta!=0){


        for(int c = 0; c < sizeX; c++)
    {
        for(int f = 0; f <sizeY; f++)
        {
            ary[c][f]='~';
        }
    }


        for(int c = 0; c < sizeX; c++)
    {
        for(int f = 0; f <sizeY; f++)
        {
            cout<<ary[c][f];
        }
        cout<<"\n";
    }


    while(gameOver==false)
    {




        cout << "Please enter the row: ";
        cin >> fila;
        cout << "Please enter the column: ";
        cin>>columna;

        filar=(rand() % sizeX);
        columnar=(rand() % sizeX);
        cout<<filar<<endl;
        cout<<columnar<<endl;
        if(fila<=sizeX && columna<=sizeY && fila>0 && columna>0)
        {

            if(filar==fila&& columnar==columna)
            {
                gameOver=true;
                ary[fila-1][columna-1]='x';
                cout<<"Has acertado el disparo!"<<endl;
                cout<<"Felicidades has ganado el juego!"<<endl;
            }
            else
            {
                ary[fila-1][columna-1]='0';
            }


        }
        else
        {
            cout<<"Ingrese una coordenada valida!"<<endl;
                    fila=0;
                    columna=0;
        }
        for(int c = 0; c < sizeX; c++)
        {
            for(int f = 0; f <sizeY; f++)
            {
                cout<<ary[c][f];
            }
            cout<<"\n";
        }

        }
        cout<<"Desea Volver a Intentar? "<<endl;
        cout<<"Si=1"<<endl;
        cout<<"No=0"<<endl;
        cin>>respuesta;
        if(respuesta==1)
                gameOver=false;
}

    return 0;
}
