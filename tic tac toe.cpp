#include<iostream>                                                                              
#include<conio.h>                                                             
using namespace std;

char a='1' , b='2' , c='3' , d='4' , e='5' , f='6' , g='7' , h='8' , i='9'; 

int chance , checking[9] , z , count=1;



void input(int o)//passing player number as input argument
{
    //checking winner condition for player 1
    if((a=='0' && b=='0' && c=='0')||(d=='0' && e=='0' && f=='0')||(g=='0' && h=='0' && i=='0')||(a=='0' && d=='0' && g=='0')
	||(b=='0' && e=='0' && h=='0')||(c=='0' && f=='0' && i=='0')||(a=='0' && e=='0' && i=='0')||(c=='0' && e=='0' && g=='0')){
                cout<<" "<<endl;
                cout<<"PLAYER 1 VICTORY"<<endl;  
                cout<<" "<<endl;
                getch();
                abort();
}

    //checking winner condition for player 2
    if((a=='X' && b=='X' && c=='X')||(d=='X' && e=='X' && f=='X')||(g=='X' && h=='X' && i=='X')||(a=='X' && d=='X' && g=='X')
	||(b=='X' && e=='X' && h=='X')||(c=='X' && f=='X' && i=='X')||(a=='X' && e=='X' && i=='X')||(c=='X' && e=='X' && g=='X')){
                cout<<" "<<endl;
                cout<<"PLAYER 2 VICTORY"<<endl;
                cout<<" "<<endl;
                getch();
                abort();
            }
    
    //checking draw condition
    if(count==10){
        cout<<" "<<endl;
        cout<<"IT IS A TIE, NO ONE WINS"<<endl;
        cout<<" "<<endl;
        getch();
        abort();
    }

    //getting input by player
    cout<<" "<<endl;
    cout<<"PLAYER "<<o<<" TURN: ";
    cin>>chance;
    cout<<" "<<endl;
    
    //checking input value is valid or not 
    if (chance>9||chance<1){
                cout<<"ENTER VALID NUMBER: "<<endl;
                count--;
                input(o);//if input is invalid then calling the input function again
            }
 
    for(z;z<count;z++){
                
                //checking if a position entered by player is already taken or not
                if(checking[z]==chance){
                    cout<<"POSITION ALREADY TAKEN, ENTER AGAIN: "<<endl;
                    input(o);
                }
                
                else{

                    checking[z]=chance;//putting the input value into the array
                    break;
                }
                
    }
    
    
    }

    
//creating a function to define the structure of the game
void setup(){
        cout<<a<<" |"<<b<<" |"<<c<<endl;
        cout<<"__|__|__"<<endl;
        cout<<d<<" |"<<e<<" |"<<f<<endl;
        cout<<"__|__|__"<<endl;
        cout<<g<<" |"<<h<<" |"<<i<<endl;
        };

int main(){

cout<<"            "<<"********************"<<endl;
cout<<"            "<<"| TIC TAC TOE GAME |"<<endl;
cout<<"            "<<"********************"<<endl<<endl;
cout<<" "<<"* ENTER THE NUMBER WHERE YOU WANT TO DISPLAY X OR 0"<<endl<<endl;
cout<<"      PLAYER 1= 0               PLAYER 2= X"<<endl<<endl;
cout<<"              ****** LETS PLAY ******                             "<<endl;

setup();


while(count<=10){
        if(count%2==0){
            input(2);
            count++;
           
            //using switch statement to replace the values of positional variable by X in the structure for player 2
            switch(chance){
            case 1:
            a='X';
            setup();
            break;
            
            case 2:
            b='X';
            setup();
            break;
            
            case 3:
            c='X';
            setup();
            break;
            
            case 4:
            d='X';
            setup();
            break;
            
            case 5:
            e='X';
            setup();
            break;
            
            case 6:
            f='X';
            setup();
            break;
            
            case 7:
            g='X';
           setup();
            break;
            
            case 8:
            h='X';
            setup(); 
            break;
            
            case 9:
            i='X';
            setup();
            break;
            }
            
        }

        else{
            input(1);
            count++;
           
            //using switch statement to replace the values of positional variable by 0 in the structure for player 1
            switch(chance){
            case 1:
            a='0';
            setup();
            break;
           
            case 2:
            b='0';
            setup();
            break;
            
            case 3:
            c='0';
            setup();
            break;
            
            case 4:
            d='0';
            setup();
            break;
            
            case 5:
            e='0';
           setup();
            break;
            
            case 6:
            f='0';
            setup();
            break;
           
            case 7:
            g='0';
            setup();
            break;
            
            case 8:
            h='0';
            setup();
            break;
           
            case 9:
            i='0';
           setup();
            break;
            
        }
            }

};



return 0;}
