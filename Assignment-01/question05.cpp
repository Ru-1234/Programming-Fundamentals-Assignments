#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome to The Ultimate Logic Maze!" << endl;
    int key=0, map=0, token=0;
    int room=1;
    char choice;

    cout<<"Room 1: Go left to a cave or right to a chamber or straight? (L/R/S): ";
    cin>>choice;
    if(choice=='L' || choice=='l')
        room=5;
    else if(choice=='R' || choice=='r')
        room=3;
    else
        room=2;
    
    if(room==2) {
        cout<<"Room 2: A snake is ahead! Move left (L) or right (R)? ";
        cin>>choice;
        if(choice=='L' || choice=='l') {
            cout<<"You found a key!" << endl;
            key=1;
             room=4;
        }
        else 
            cout<<"The snake bit you. Game Over."<< endl;
    }

    if (room == 3) {
        cout<<"Room 3: Solve a puzzle for a reward? (Y/N): ";
        cin>>choice;
        if(choice=='Y' || choice=='y') {
            cout << "You solved it! You get a glowing token!" << endl;
            token = 1;
        }
        room = 5;
    }

    if (room == 4) {
        cout << "Room 4: A locked door blocks your way. Use the key? (Y/N): ";
        cin >> choice;
        if ((choice == 'Y' || choice == 'y') && key > 0) {
            room = 6;
        } else {
            cout << "Door remains locked. Game Over." << endl;
            return 0;
        }
    }

    if (room == 5) {
        cout << "Room 5: A figure asks for a token. Do you have one? Let me check! wait.." << endl;
        if (token > 0) {
            cout << "You gave the token! A hidden door opens!" << endl;
            room = 7;
        } else {
            cout<<"No token. The figure disappears." << endl;
            room = 8;
        }
    }

    if (room == 6) {
        cout << "Room 6: Three mirrors ahead. Pick one (1-3): ";
        int mirror_choice;
        cin >> mirror_choice;
        if (mirror_choice == 2) {
            cout << "You found the passage! Moving ahead." << endl;
            room = 9;
        } else 
            cout << "Wrong mirror. You're trapped. Game Over." << endl;
    }

    if(room == 7) {
        cout<<"Room 7: A golden door needs a key and a map. Checking..." << endl;
        if (key>0 && map>0) 
            cout<< "The door opens! You win!"<<endl;
         else 
            cout<<"Missing items. Game Over."<<endl;
    }

    if (room == 8) {
        cout << "Room 8: Left (L) or Right (R)? Choose wisely: ";
        cin >> choice;
        if (choice == 'L' || choice == 'l')
            cout << "You found the treasure room! You win!" << endl;
       else
            cout << "A trap activates. Game Over." << endl;
    }

    if (room == 9) {
        cout << "Room 9: Hidden exit found! Enter 'Challenge Room'? (Y/N): ";
        cin >> choice;
        if(choice =='Y' || choice =='y')
            room = 10;
        else
            cout << "You escape successfully! You win!" << endl;
    }

    if (room == 10) {
        cout<<"Room 10: A diansaour is coming towards you. Move left(L) or right(R): ";
        cin>>choice;
        if(choice=='L' || choice=='l')
            cout<<"Congrats! You found the ultimate treasure! You win!" << endl;
        else 
            cout<<"O, No! Dianasour ate you. Game Over." << endl;
        }
    
    return 0;
}

