#include<iostream>
using namespace std;

int space[3][3]={(1,2,3), (4,5,6), (7,8,9)};
int row;
int column;
char token= 'X';
int token = 0;
 string n1;
   string n2; 

void functionOne(){


   cout<<"Enter the name of the first player : \n";
   getline(cin, n1);
   cout<<"Enter the name of the second player : \n";
   getline(cin, n2);
   cout<<n1<<" is player so he/she will play first \n";
   cout<<n2<<" is player so he/she will play Second \n";

   cout<<"    |     |      \n";
   cout<<" "<<space[0][0]<<"  | " << space[0][1]<<"   | "<<space[0][2]<<" \n";
   cout<<" ___|_____|____  \n";
   cout<<"    |     |      \n";
   cout<<" "<<space[1][0]<<"  | " << space[1][1]<<"   | "<<space[1][2]<<" \n";
   cout<<" ___|_____|____  \n";
   cout<<"    |     |      \n";
   cout<<" "<<space[2][0]<<"  | " << space[2][1]<<"   | "<<space[2][2]<<" \n";
   cout<<"    |     |      \n";
}

void functionTwo()


    int digit;

    if(token =='X')
    {
        cout<<n1<<"Please enter";
        cin>>digit;
    }
 if(token =='0')
    {
        cout<<n2<<"Please enter";
        cin>>digit;
    }


if(digit==1)
{
    row=0;
    column=0;
}
if(digit==2)
{
    row=0;
    column=1;
}
if(digit==3)
{
    row=0;
    column=3;
}
if(digit==4)
{
    row=1;
    column=0;
}
if(digit==5)
{
    row=1;
    column=1;
}
if(digit==6)
{
    row=1;
    column=2;
}
if(digit==7)
{
    row=2;
    column=0;
}
if(digit==8)
{
    row=2;
    column=2;
}
if(digit==9)
{
    row=2;
    column=2;
}
else{
    cout<<"Invalid !!!"<<endl;
}
if(token=='X' && space[row][column] !='X' && space[row][column] !='0')
{
space[row][column] ='X';
token='0';
}
if(token=='0' && space[row][column] !='X' && space[row][column] !='0')
{
space[row][column] ='0';
token='X';
}
else{
    cout<<"There is no Empty Space !"<<endl;
    functionTwo();
}

bool functionThree(){
    fot(int i=0; i<3; i++){
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        return true;
    }
    if(space[0][0]==space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true;
    }
    fot(int i=0; i<3; i++){
        fot(int j=0; j<3; j++){
            if(space[i][j] !='X' && space[i][j] != '0')
            {
                return false;
            }
        }
    }

}