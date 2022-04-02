
#include <iostream>
using namespace std;
 
int main () {
   
   int numberGrid[3][2] = { {0,1}, {2,3}, {4,5}};
 
   for ( int i = 0; i < 5; i++ ){
      for ( int j = 0; j < 2; j++ ) {
      
         cout << numberGrid[i][j]<< endl;
      }
      cout << endl;
   }
   return 0;
}