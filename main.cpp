#include <iostream>
#include <iomanip>

#include "audiostream.hpp"

using namespace std;
using namespace audiostream;

int main()
{
   try
   {
      audio_ostream aout;
      aout << "Hello World!"  << endl;
      aout << "<voice required='Gender=Male;Age!=Child'>Hello World!" << endl;

      aout << "Five hundred milliseconds of silence " << flush << "<silence msec='500'/> just occurred." << endl;


      for (int i=0; i<1e5; ++i)
      {
         cout << i << ' ';
      }

   }
   catch(std::exception &x)
   {
      cerr << "Unhandled error: " << x.what() << endl;
      return EXIT_FAILURE;
   }
   catch(...)
   {
      cerr << "Unhandled unknown error" << endl;
      return EXIT_FAILURE;
   }
   return 0;
}
