#include<iostream>
#include<fstream>
#include<string>  /// make us able to read and write from files
using namespace std;

int main(){
    fstream myfile;  //  this is like a object to class
    myfile.open("tut.txt", ios::out);  // write mode  this mode basically overirdes the text before written so 
    if(myfile.is_open()){
        myfile<<"Hello\n";
        myfile<<"Hello second hello\n";
    myfile.close();
    }
//  to add new data we need to use append mode
myfile.open("tut.txt",  ios::app);  // append mode
if(myfile.is_open()){
    myfile<<"Hello third hello\n";
    myfile.close();
}


/**** opening file in read mode */
// myfile.open("tut.txt", ios::in);  // read mode means reading from file and printing
// if(myfile.is_open()){
//     string line;
//     while(getline(myfile,line)){
//         cout<<line<<endl;
//     }


// }

}