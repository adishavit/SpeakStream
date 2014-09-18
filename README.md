SpeakStream
===========

This is a mirror of the code accompanying my 2007 CodeProject Article - ["`audio_ostream` - A Text-to-Speech ostream"](http://www.codeproject.com/Articles/17897/audio-ostream-A-Text-to-Speech-ostream).

In the article, I show you how to add Text-to-Speech (TTS) to your program with a single line of code using the familiar standard `std::ostream` syntax.

The header-only code depends on 3 libraries:

 * [COMSTL](http://synesis.com.au/software/comstl/) and [STLSoft](http://synesis.com.au/software/stlsoft/);
 * [Boost.iostreams](http://www.boost.org/libs/iostreams/doc/index.html)
 * [Microsoft SAPI SDK](http://www.microsoft.com/downloads/details.aspx?FamilyID=5e86ec97-40a7-453f-b0ee-6583171b4530&DisplayLang=en)
 
However, the general concepts presented should be easily ported to using other TTS SDKs.

### Using the code 

Using the code cannot be easier:

```cpp
#include "audiostream.hpp"
using namespace std;
using namespace audiostream;
int main()
{
   audio_ostream aout;
   aout << "Hello World!"  << endl;

   // some more code...
   
   return 0;
}
```

This little program will, obviously, say "Hello World!".

The original CodeProject article can be read [here](http://www.codeproject.com/Articles/17897/audio-ostream-A-Text-to-Speech-ostream).  
The license is [The Code Project Open License (CPOL)](http://www.codeproject.com/info/cpol10.aspx).