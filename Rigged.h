#ifndef _RIGGED_H
#define _RIGGED_H
#include <string> 
#include <vector>
using namespace std;

class Rigged 
{
        private:                
                string nombre;
                vector <string> people;

        public:
                void enterName(string&);
                string winner();
};

#endif
