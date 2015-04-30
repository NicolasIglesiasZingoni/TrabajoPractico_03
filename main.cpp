#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    bool continuar = true,next = false;
    char resp='z',respuesta;
        while(continuar){
        system("cls");
           if(resp == 'z'){
            cout<<"----------------------------------------------"<<endl;
            cout<<"Bienvenidos al juego de Preguntas y Respuestas"<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<endl;
            cout<<"Seleccione una categoria del juego"<<endl;
            cout<<"A-Futbol"<<"       "<<"B-Logica"<<endl;
            cout<<"S-Salir"<<endl;
            cin>>resp;
            }
        system("cls");
        if(resp == 'A'||resp == 'a'){
           if(next == false){
            cout<<"¿Quien es el jugador apodado 'la pulga'?"<<endl;
            cout<<"1-Leonel Messi"<<endl;
            cout<<"2-Carlitoh Tevez"<<endl;
            cout<<"3-Gustavo Bou"<<endl;
            cin>>respuesta;
            switch(respuesta){
            case '1':
                cout<<"Correcto"<<endl;
                system("pause");
                next = true;
                break;
            case '2':
                cout<<"Faso"<<endl;
                system("pause");
                next = true;
                break;
            case '3':
                cout<<"Falso"<<endl;
                system("pause");
                next = true;
                break;
            default:
                cout<<"Esa opcion no es correcta"<<endl;
           }
           }
            if(next == true){
                system("cls");
                cout<<"¿Cual es la seleccion con mas copas del mundo?"<<endl;
                cout<<"1-Argentina"<<endl;
                cout<<"2-Alemania"<<endl;
                cout<<"3-Brazil"<<endl;
                cin>>respuesta;
                switch(respuesta){
                    case '3':
                    cout<<"Correcto"<<endl;
                    system("pause");
                    next = false;
                    resp = 'z';
                    break;

                    case '2':
                    cout<<"Faso"<<endl;
                    system("pause");
                    resp = 'z';
                    next = false;
                    break;
                    case '1':
                    cout<<"Falso"<<endl;
                    system("pause");
                    next = false;
                    resp = 'z';
                    break;
                    default:
                    cout<<"Esa opcion no es correcta"<<endl;
                }
            }

            }else
        if(resp == 'B'||resp == 'b'){
            if(next == false){
            cout<<"¿Cuanto es 24+11?"<<endl;
            cout<<"1-35"<<endl;
            cout<<"2-33"<<endl;
            cout<<"3-38"<<endl;
            cin>>respuesta;
            switch(respuesta){
            case '1':
                cout<<"Correcto"<<endl;
                system("pause");
                next = true;
                break;
            case '2':
                cout<<"Faso"<<endl;
                system("pause");
                next = true;
                break;
            case '3':
                cout<<"Falso"<<endl;
                system("pause");
                next = true;
                break;
            default:
                cout<<"Esa opcion no es correcta"<<endl;
           }
           }
            if(next == true){
                system("cls");
                cout<<"¿Cuanto es 11-4?"<<endl;
                cout<<"1-5"<<endl;
                cout<<"2-8"<<endl;
                cout<<"3-7"<<endl;
                cin>>respuesta;
                switch(respuesta){
                    case '3':
                    cout<<"Correcto"<<endl;
                    system("pause");
                    next = false;
                    resp = 'z';
                    break;
                    case '2':
                    cout<<"Faso"<<endl;
                    system("pause");
                    resp = 'z';
                    next = false;
                    break;
                    case '1':
                    cout<<"Falso"<<endl;
                    system("pause");
                    next = false;
                    resp = 'z';
                    break;
                    default:
                    cout<<"Esa opcion no es correcta"<<endl;
                }
            }

            }

            if(resp == 'S'||resp == 's' ){
                return 0;
            }
        }
}
