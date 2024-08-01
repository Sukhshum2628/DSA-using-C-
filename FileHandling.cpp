#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ofstream my_file("Example.txt");
    // my_file.close();
    // return 0;

    // if(!my_file){
    //     cout<<"Error Opening the file"<<endl;
    // }
    // return 1;

    // if(!my_file.fail()){
    //     cout<<"Error Opening the file"<<endl;
    // }
    // return 1;


/*
    //Reading data from the file
    //Open text file for reading 
    ifstream my_file("Example.txt");
    //Check the file for errors 
    if(!my_file){
        cout<<"Error wile opening the file"<<endl;
        return 1;
    }
    //store the content of the file in the "Line" string 
    string line;
    //loop until the end of the text file
    while(!my_file.eof()){
        //store the current line of the file in the "line" variable
        getline(my_file,line);
        //print the line variable
        cout<<line<<endl;
    }
    my_file.close();
    return 0;
*/

/*
    //Writing into the file
    ofstream my_file("Example.txt");
    //check the file for errors
    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }
    //Write multiple lines to the file
    my_file<<"Mohan 30"<<endl;
     my_file<<"Mayur 40"<<endl;
      my_file<<"Jitu 50"<<endl;
      //close the file
      my_file.close();
      return 0;
*/

/*
//Appending into the file
    ofstream my_file("Example.txt", ios::app);
    //check the file for errors
    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }
    //Write multiple lines to the file
    my_file<<"Mushtanda 30"<<endl;
     my_file<<"Motilal 40"<<endl;
      my_file<<"Jatindar 50"<<endl;
      //close the file
      my_file.close();
      return 0;
*/

//Reading data from the file
    //Open text file for reading 
    ifstream my_file("Example.txt");
    //Check the file for errors 
    if(!my_file){
        cout<<"Error wile opening the file"<<endl;
        return 1;
    }
    //store the content of the file in the "Line" string 
    string line;
    int number;
    int count=0;
    int sum=0;
    //loop until the end of the text file
    while(!my_file.eof()){
        //store the current line of the file in the "line" variable
        my_file>>line>>number;
        cout<<number<<" ";
        sum+=number;
        count++;
        //print the line variable
    }
    count--;
    sum-=number;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Average:"<<sum/count<<endl;

    my_file.close();
    return 0;
      
}