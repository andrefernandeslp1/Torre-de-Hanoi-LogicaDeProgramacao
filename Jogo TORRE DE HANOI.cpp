#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int va[4]= {1,2,3,4}, vb[4]= {0,0,0,4}, vc[4]= {0,0,0,4};
    int vaax[4]= {1,2,3,4}, vbax[4]= {0,0,0,4}, vcax[4]= {0,0,0,4};
    int va1[6]= {1,2,3,4,5,6}, vb1[6]= {0,0,0,0,0,6}, vc1[6]= {0,0,0,0,0,6};
    int va1ax[6]= {1,2,3,4,5,6}, vb1ax[6]= {0,0,0,0,0,6}, vc1ax[6]= {0,0,0,0,0,6};
    int va2[8]= {1,2,3,4,5,6,7,8}, vb2[8]= {0,0,0,0,0,0,0,8}, vc2[8]= {0,0,0,0,0,0,0,8};
    int va2ax[8]= {1,2,3,4,5,6,7,8}, vb2ax[8]= {0,0,0,0,0,0,0,8}, vc2ax[8]= {0,0,0,0,0,0,0,8};
    int i,j,k,cont=0, pinos, pontos=0, sair=0, opcao=0, modo=0, jog1, jog2, mud1, mud2, c1=0, real=100;
    char origem, destino, jogador1 [10], jogador2 [10];

    cout<< "                    BEM VINDO AO MILENAR JOGO TORRE DE HANOI"<< endl<<endl;
    cout<< "Digite 1 para ler  as instru��es, 2 para jogar ou 5 para sair  "<<endl<<endl;
    cin >> opcao;
    sair=opcao;
    while(sair!=5){


    system("cls");



    if(opcao == 1)
    {

        cout <<"   A torre de Hanoi � um jogo capaz de contribuir no desenvolvimento da mem�ria, do planejamento e solu��o de"<<endl<<"problemas atrav�s de  t�cnicas estrat�gicas."<<endl<<endl;
        cout <<"   O jogo se constitui de uma base que possui tr�s pinos fixos na posi��o vertical.  No primeiro pino temos uma"<<endl<<"sequ�ncia de discos com ordem crescente de di�metro, de cima para baixo, e nada nos outros pinos. "<<endl;
        cout <<"   O objetivo � passar todos os discos para outro pino, com a ajuda dos demais pinos, de modo que no momento da"<<endl<<"transfer�ncia, o disco de maior di�metro nunca fique sobre o de menor di�metro. "<<endl;
        cout <<"   O jogo mais simples � constitu�do de tr�s discos, mas a quantidade pode variar, deixando o jogo mais dif�cil"<<endl<<"� medida que a quantidade de discos aumenta."<<endl<<endl;
        cout <<"   Neste programa, os pinos s�o representados pelas letras 'a b c', e os discos pelos n�meros de 1 a 7. O n�mero"<<endl<<"zero representa a aus�ncia de discos"<<endl<<endl;
        cout <<"   Voc� come�ar� o jogo com a pontua��o m�xima (100 pontos), a cada jogada errada ser� subtra�do 5 pontos do seu"<<endl <<"total,que ser� indicado a cada jogada realizada"<<endl<<endl;
        cout <<"   Cada n�vel de jogo possui uma quantidade de jogadas determinadas para obter a pontua��o m�xima, a cada jogada"<<endl<<" excedente, mesmo que a jogada seja v�lida, ser� subtra�do 5 pontos por jogada e mostrado no final do jogo."<<endl<<endl;
        cout <<" Digite 2 para jogar ou 5 para sair. Boa sorte!!"<<endl;
        cin >>opcao;
        sair=opcao;
    }else if(opcao == 5){
        sair=opcao;
    }else if (opcao == 2)
    {



    system("cls");

    cout << "Escolha o modo de jogo: "<<endl;
    cout << "1 Player. Digite o n�mero 1."<<endl<<"2 Players. Digite o n�mero 2"<<endl;
    cin >> modo;

    system("cls");

    if(modo == 1)
    {
        real=100;
        cout << "Digite o nome do jogador: "<<endl;
        cin >>jogador1;
        system("cls");
        cout <<jogador1<< " Escolha a quantidade de Discos: "<<endl;
        cout << "F�cil - 3 Discos."<<endl<< "M�dio - 5 Discos."<<endl<< "Expert - 7 Discos."<<endl;
        cin>>pinos;

        while(pinos !=3 && pinos !=5 && pinos !=7)
        {
            cout <<"Op��o inv�lida"<<endl;
            cout << "Escolha a quantidade de Discos: "<<endl;
            cout << "F�cil - 3 Discos."<<endl<< "M�dio - 5 Discos."<<endl<< "Expert - 7 Discos."<<endl;
            cin>>pinos;

            system("cls");

        }

        system("cls");

        if(pinos == 3)
        {
            for(int i=0; i<4; i++)
            {
                va[i]=vaax[i];
                vb[i]=vbax[i];
                vc[i]=vcax[i];
            }

            cout<<jogador1<< " Vo�� escolheu a op��o de tr�s discos"<<endl<<"Vamos come�ar o jogo:"<<endl<<endl;
            for(int i=0; i<3; i++)
            {
                cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
            }
            cout<<"a b c"<<endl;

            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                 cout << "teste";   }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vc[i];
                                    vc[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=vc[i];
                                    vc[i]=0;
                                    cont++;

                                }
                            }
                        }
                    }
                }
                pontos++;


                system("cls");



                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<3; i++)
                {
                    cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
                }
                cout<<"a b c"<<endl;

                if(vb[0]==1 || vc[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    cout<< "n�mero de jogadas: "<<pontos<<endl<<endl;
                    if(pontos == 7)
                    {
                        cout << "PARAB�NS "<<jogador1<<" voc� teve - 100% de aproveitamento!!"<<endl;
                    }
                    else
                    {
                        pontos = pontos-7;
                        cout <<jogador1<< " sua pontua��o �: "<< 100-(pontos * 5)<<" pontos"<<endl;
                    }
                }

            }
            while(vb[0]!=1 && vc[0]!=1);
        }
        else if(pinos == 5)
        {
            for(int i=0; i<6; i++)
            {
                va1[i]=va1ax[i];
                vb1[i]=vb1ax[i];
                vc1[i]=vc1ax[i];
            }
            for(int i=0; i<5; i++)
            {
                cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<5; i++)
                {
                    cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
                }
                cout<<"a b c"<<endl;

                if(vb1[0]==1 || vc1[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    cout<< "n�mero de jogadas: "<<pontos<<endl<<endl;
                    if(pontos == 31)
                    {
                        cout << "PARAB�NS "<<jogador1<<" voc� teve - 100% de aproveitamento!!";
                    }
                    else
                    {
                        pontos = pontos-31;
                        cout <<jogador1<< " sua pontua��o �: "<< 100-(pontos * 5)<<" pontos"<<endl;
                    }
                }

            }
            while(vb1[0]!=1 && vc1[0]!=1);
        }
        else if(pinos == 7)
        {
            for(int i=0; i<8; i++)
            {
                va2[i]=va2ax[i];
                vb2[i]=vb2ax[i];
                vc2[i]=vc2ax[i];
            }
            for(int i=0; i<7; i++)
            {
                cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<7; i++)
                {
                    cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb2[0]==1 || vc2[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    cout<< "n�meros de jogadas: "<<pontos<<endl<<endl;
                    if(pontos == 127)
                    {
                        cout << "PARAB�NS "<<jogador1<< " voc� teve - 100% de aproveitamento!!";
                    }
                    else
                    {
                        pontos = pontos-127;
                        cout <<jogador1<< " sua pontua��o �: "<< 100-(pontos * 5)<<" pontos"<<endl;
                    }
                }

            }
            while(vb2[0]!=1 && vc2[0]!=1);
        }

        cout<<endl<<"Digite 2 para jogar novamente ou 5 para sair"<<endl;
        cin>>opcao;
        sair=opcao;

                                                        //MODO MULTIPLAYER

    }
    else if(modo == 2)
    {
        real=100;
        cout << "Digite o nome do Player 1: "<<endl;
        cin >>jogador1;
        cout <<endl<< "Digite o nome do Player 2: "<<endl;
        cin >>jogador2;
        cout <<endl<< "Escolha a quantidade de Discos: "<<endl;
        cout << "F�cil - 3 Discos."<<endl<< "M�dio - 5 Discos."<<endl<< "Expert - 7 Discos."<<endl;
        cin>>pinos;

        system("cls");
        cout<< "jogo de: "<<jogador1<<endl<<endl;
        if(pinos == 3)
        {
            for(int i=0; i<4; i++)
            {
                va[i]=vaax[i];
                vb[i]=vbax[i];
                vc[i]=vcax[i];
            }
            for(int i=0; i<3; i++)
            {
                cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
            }
            cout<<"a b c"<<endl;

            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vc[i];
                                    vc[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=vc[i];
                                    vc[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<<"jogo de: "<<jogador1<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<3; i++)
                {
                    cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb[0]==1 || vc[0]==1)
                {
                    cout<<endl<<"fim de jogo de "<<jogador1<<endl<<endl;
                    system("pause");
                    mud1=pontos;
                    if(pontos == 7)
                    {
                        jog1 = 100;
                        pontos=0;
                    }
                    else
                    {
                        pontos = pontos-7;
                        jog1=100-(pontos * 5);
                        pontos=0;
                    }

                }

            }
            while(vb[0]!=1 && vc[0]!=1);
        }
        else if(pinos == 5)
        {
            for(int i=0; i<6; i++)
            {
                va1[i]=va1ax[i];
                vb1[i]=vb1ax[i];
                vc1[i]=vc1ax[i];
            }
            for(int i=0; i<5; i++)
            {
                cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<< "jogo de: "<<jogador1<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<5; i++)
                {
                    cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb1[0]==1 || vc1[0]==1)
                {
                    cout<<endl<<"fim de jogo de "<<jogador1<<endl<<endl;
                    system("pause");
                    mud1=pontos;
                    if(pontos == 31)
                    {
                        jog1=100;
                        pontos=0;
                    }
                    else
                    {
                        jog1=100-(pontos * 5);
                        pontos=0;
                    }
                }

            }
            while(vb1[0]!=1 && vc1[0]!=1);
        }
        else if(pinos == 7)
        {
            for(int i=0; i<6; i++)
            {
                va1[i]=va1ax[i];
                vb1[i]=vb1ax[i];
                vc1[i]=vc1ax[i];
            }
            for(int i=0; i<7; i++)
            {
                cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<< "jogo de: "<<jogador1<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador1<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador1<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<7; i++)
                {
                    cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb2[0]==1 || vc2[0]==1)
                {
                    cout<<endl<<"fim de jogo de "<<jogador1<<endl<<endl;
                    system("pause");
                    mud1=pontos;
                    if(pontos == 127)
                    {
                        jog1=100;
                        pontos=0;
                    }
                    else
                    {
                        jog1= 100-(pontos * 5);
                        pontos=0;
                    }
                }

            }
            while(vb2[0]!=1 && vc2[0]!=1);
        }
        system("cls");
        cout<< "jogo de: "<<jogador2<<endl<<endl;
        real=100;
        if(pinos == 3)
        {
                                                //RESET DO JOGO PARA IN�CIO DO JOGADOR 2
            for(int i=0; i<4; i++)
            {
                va[i]=vaax[i];
                vb[i]=vbax[i];
                vc[i]=vcax[i];
            }

            for(int i=0; i<3; i++)
            {
                cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
            }
            cout<<"a b c"<<endl;

            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(va[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(va[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=va[i];
                                    va[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vb[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vb[i]<vc[j+1]&&vc[j]==0)
                                {
                                    vc[j]=vb[i];
                                    vb[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<va[j+1]&&va[j]==0)
                                {
                                    va[j]=vc[i];
                                    vc[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<3; i++)
                    {
                        if(vc[i]!=0)
                        {
                            for(j=0; j<3; j++)
                            {
                                if(vc[i]<vb[j+1]&&vb[j]==0)
                                {
                                    vb[j]=vc[i];
                                    vc[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<< "jogo de: "<<jogador2<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador2<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador2<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<3; i++)
                {
                    cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb[0]==1 || vc[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    mud2=pontos;
                    if(pontos == 7)
                    {
                        jog2 = 100;
                    }
                    else
                    {
                        pontos = pontos-7;
                        jog2=100-(pontos * 5);
                        pontos=0;
                    }

                }

            }
            while(vb[0]!=1 && vc[0]!=1);
        }
        else if(pinos == 5)
        {
            for(int i=0; i<6; i++)
            {
                va1[i]=va1ax[i];
                vb1[i]=vb1ax[i];
                vc1[i]=vc1ax[i];
            }
            for(int i=0; i<5; i++)
            {
                cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(va1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(va1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=va1[i];
                                    va1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vb1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vb1[i]<vc1[j+1]&&vc1[j]==0)
                                {
                                    vc1[j]=vb1[i];
                                    vb1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<va1[j+1]&&va1[j]==0)
                                {
                                    va1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<5; i++)
                    {
                        if(vc1[i]!=0)
                        {
                            for(j=0; j<5; j++)
                            {
                                if(vc1[i]<vb1[j+1]&&vb1[j]==0)
                                {
                                    vb1[j]=vc1[i];
                                    vc1[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<< "jogo de: "<<jogador2<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador2<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador2<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<5; i++)
                {
                    cout<<va1[i]<<" "<<vb1[i]<<" "<<vc1[i]<<endl;
                }

                cout<<"a b c"<<endl;

                if(vb1[0]==1 || vc1[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    mud2=pontos;
                    if(pontos == 31)
                    {
                        jog2=100;
                    }
                    else
                    {
                        jog2=100-(pontos * 5);
                        pontos=0;
                    }
                }

            }
            while(vb1[0]!=1 && vc1[0]!=1);
        }
        else if(pinos == 7)
        {
            for(int i=0; i<8; i++)
            {
                va2[i]=va2ax[i];
                vb2[i]=vb2ax[i];
                vc2[i]=vc2ax[i];
            }
            for(int i=0; i<7; i++)
            {
                cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
            }
            cout<<"a b c"<<endl;
            do
            {

                cout<<endl;

                cout<<"fa�a uma jogada"<<endl;
                cout<<"pino de origem: ";
                cin>>origem;
                cout<<"pino de destino: ";
                cin>>destino;

                cout<<endl;

                if(origem=='a' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='a' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(va2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(va2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=va2[i];
                                    va2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='b' && destino=='c')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vb2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vb2[i]<vc2[j+1]&&vc2[j]==0)
                                {
                                    vc2[j]=vb2[i];
                                    vb2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='a')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<va2[j+1]&&va2[j]==0)
                                {
                                    va2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                if(origem=='c' && destino=='b')
                {
                    for(i=0; i<7; i++)
                    {
                        if(vc2[i]!=0)
                        {
                            for(j=0; j<7; j++)
                            {
                                if(vc2[i]<vb2[j+1]&&vb2[j]==0)
                                {
                                    vb2[j]=vc2[i];
                                    vc2[i]=0;
                                    cont++;
                                }
                            }
                        }
                    }
                }

                pontos++;
                system("cls");

                cout<< "jogo de: "<<jogador2<<endl<<endl;
                if(cont==0)
                {
                    c1++;
                    real=100-(c1*5);
                    cout<<jogador2<<", essa jogada n�o � v�lida, tente novamente! :( "<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                else{
                    cout<<"Parab�ns "<<jogador2<<" voc� est� indo bem! :)"<<endl<<endl;
                    cout<< "sua pontua��o �: "<<real<<" pontos"<<endl<<endl;
                }
                cont=0;
                for(int i=0; i<7; i++)
                {
                    cout<<va2[i]<<" "<<vb2[i]<<" "<<vc2[i]<<endl;
                }
                cout<<"a b c"<<endl;

                if(vb2[0]==1 || vc2[0]==1)
                {
                    cout<<endl<<"fim de jogo"<<endl<<endl;
                    mud2=pontos;
                    if(pontos == 127)
                    {
                        jog2=100;
                    }
                    else
                    {
                        jog2= 100-(pontos * 5);
                        pontos=0;
                    }
                }

            }
            while(vb2[0]!=1 && vc2[0]!=1);
        }

    cout<<"A n�mero de jogadas de "<<jogador1<< " �: "<<mud1<<endl;
    cout<<"A pontua��o de "<<jogador1<<" �: "<<jog1<<endl<<endl;
    cout<<"A n�mero de jogadas de "<<jogador2<<" �: "<<mud2<<endl;
    cout<<"A pontua��o de "<<jogador2<<" �: "<<jog2<<endl<<endl;

    if(jog1 > jog2)
    {
        cout<<jogador1<< " venceu!!"<<endl;
    }
    else if(jog2 > jog1)
    {
        cout<<jogador2<<" venceu!!"<<endl;
    }
    else if(jog1 == jog2)
    {
        cout<< "houve um empate!!"<<endl;
    }
    cout<<endl<<"Digite 2 para jogar novamente ou 5 para sair"<<endl;
        cin>>opcao;
        sair=opcao;
    }
system("pause");
    }
    }
}




