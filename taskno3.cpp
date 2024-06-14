#include<iostream>

void board(char *spaces);
void playermove(char *spaces,char player);
bool checkwinner(char *spaces,char player1,char player2,std::string p1,std::string p2);
bool checktie(char *spaces);

int main(){

    std::string p1,p2;
    std::cout<<"***************                ****************"<<std::endl;
    std::cout<<"***************TIC-TAC-TOE GAME****************"<<std::endl;
    std::cout<<"***************                ****************"<<std::endl;
    std::cout<<"Enter the name of player 1: ";
    std::getline(std::cin,p1);
    std::cout<<"Enter the name of player 2: ";
    std::getline(std::cin,p2);
    std::string mp;
    int result=0;
     do{
    char spaces[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};

    board(spaces);
    char player1='X';
    char player2='O';
    bool k=true;
   
    std::cout<< p1<<" should start the game"<<std::endl;
      while(k){
    std::cout<< p1<<"'s turn"<<std::endl;
  
    playermove(spaces,player1);
    board(spaces);
    
    if(checkwinner(spaces,player1,player2,p1,p2)){
        k = false;
        break;
    }   
    else if(checktie(spaces)){
        k = false;
        break;
    }
    std::cout<< p2<<"'s turn"<<std::endl;
    playermove(spaces,player2);
    board(spaces);
    
    if(checkwinner(spaces,player1,player2,p1,p2)){
        k = false;
        break;
    }   
    else if(checktie(spaces)){
        k = false;
        break;
    }
   
    }
    
    std::cout<<"       WOW!!!!    "<<'\n';
    std::cout<<"guys if you want to play this game again please enter 'yes' if not enter 'no'"<<std::endl;
    std::cin>>mp;
    if(mp=="yes"||mp=="YES"){result = 1;}
    else if(mp=="NO"||mp=="no"){result = 0;}
    else {std::cout<<"INVALID CHOICE"<<std::endl;
    return 0;}
    }while(result);


    std::cout<<"*************                  **********"<<std::endl;
    std::cout<<"*************THANKS FOR PLAYING**********"<<std::endl;
    std::cout<<"*************                  **********"<<std::endl;
    return 0;

}

void board(char *spaces){
    std::cout<<'\n';
    std::cout<<"    |    |    "<<std::endl;
    std::cout<<"  "<<spaces[0]<<" |  "<<spaces[1]<<" |  "<<spaces[2]<<"  "<<std::endl;
    std::cout<<"____|____|____"<<std::endl;
    std::cout<<"    |    |    "<<std::endl;
    std::cout<<"  "<<spaces[3]<<" |  "<<spaces[4]<<" |  "<<spaces[5]<<"  "<<std::endl;
    std::cout<<"____|____|____"<<std::endl;
    std::cout<<"  "<<spaces[6]<<" |  "<<spaces[7]<<" |  "<<spaces[8]<<"  "<<std::endl;
    std::cout<<"    |    |    "<<std::endl;
    std::cout<<'\n';


}
void playermove(char *spaces,char player){
    
    int num;
    do
    {
    std::cout<<"enter the box number from 1-9 : ";
    std::cin>>num;
    num--;
    if(spaces[num]==' '){
            spaces[num] = player;
            break;
    }
    else if(spaces[num]=='X'||spaces[num]=='O'){
        std::cout<<"sorry its already occupied,select another box"<<std::endl;

    }
    else if(num<0||num>8){
            std::cout<<"the number should be in between 1 and 9"<<std::endl;
    }
    } while (num<0||num>8||spaces[num]=='X'||spaces[num]=='O');
    
}
bool checkwinner(char *spaces,char player1,char player2,std::string p1,std::string p2){

        if(spaces[0]!=' '&& spaces[0]==spaces[1] && spaces[1]==spaces[2]){
            if(spaces[0]==player1){
                std::cout<<p1<<" is the winner "<<std::endl;
            
            }
            else if(spaces[0]==player2){
                 std::cout<<p2<<" is the winner "<<std::endl;
                
            }
        }
        else if(spaces[3]!=' '&& spaces[3]==spaces[4] && spaces[4]==spaces[5]){
            if(spaces[3]==player1)
                std::cout<<p1<<" is the winner "<<std::endl;
                
            
            else if(spaces[3]==player2){
               std::cout<<p2<<" is the winner "<<std::endl;
                
            }
        }
        else if(spaces[6]!=' '&& spaces[6]==spaces[7] && spaces[7]==spaces[8]){
            if(spaces[6]==player1){
                 std::cout<<p1<<" is the winner "<<std::endl;
                
            }
            else if(spaces[6]==player2){
               std::cout<<p2<<" is the winner "<<std::endl;
            }
        }
        else if(spaces[0]!=' '&& spaces[0]==spaces[3] && spaces[3]==spaces[6]){
            if(spaces[0]==player1){
                 std::cout<<p1<<" is the winner "<<std::endl;
            }
            else if(spaces[0]==player2){
               std::cout<<p2<<" is the winner "<<std::endl;
            
            }
        }
        else if(spaces[1]!=' '&& spaces[1]==spaces[4] && spaces[4]==spaces[7]){
            if(spaces[1]==player1){
                 std::cout<<p1<<" is the winner "<<std::endl;
                
            }
            else if(spaces[1]==player2){
                 std::cout<<p2<<" is the winner "<<std::endl;
                
            }
        }
        else if(spaces[2]!=' '&& spaces[2]==spaces[5] && spaces[5]==spaces[8]){
            if(spaces[2]==player1){
                 std::cout<<p1<<" is the winner "<<std::endl;
                
            }
            else if(spaces[2]==player2){
                std::cout<<p2<<" is the winner "<<std::endl;
               
            }
        }
        else if(spaces[0]!=' '&& spaces[0]==spaces[4] && spaces[4]==spaces[8]){
            if(spaces[0]==player1){
              std::cout<<p1<<" is the winner "<<std::endl;
                
            }
            else if(spaces[0]==player2){
                std::cout<<p2<<" is the winner "<<std::endl;
           
            }
        }
        else if(spaces[2]!=' '&& spaces[2]==spaces[4] && spaces[4]==spaces[6]){
            if(spaces[2]==player1){
                std::cout<<p1<<" is the winner "<<std::endl;
                
            }
            else if(spaces[2]==player2){
              std::cout<<p2<<" is the winner "<<std::endl;
                
            }
        }
        else {
            return false;
        }

    return true;

}
bool checktie(char *spaces){
    for (int i =0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout<<"OOPS its a TIE"<< std::endl;
    return true;
}
