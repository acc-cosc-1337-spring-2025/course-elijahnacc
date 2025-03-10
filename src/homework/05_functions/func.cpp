#include <string>
#include "func.h"
using std::string;

double get_gc_content(string dna){

    double gc_instances = 0; //accumulator
    int string_length = dna.size();
    
    for (int i = 0; i <= string_length; ++i){
        
        if ((dna[i] == 'G') || (dna[i] == 'C'))
            ++gc_instances;
    }

    return gc_instances / string_length;
}

string get_reverse_complement(string dna){
    
    int string_length = dna.size();
    string complement;
    
    for (int i = 0; i <= string_length; ++i){

        if (toupper(dna[i]) == 'A')
            complement += 'T';
        else if (toupper(dna[i]) == 'T')
            complement += 'A';
        else if (toupper(dna[i]) == 'C')
            complement += 'G';
        else if (toupper(dna[i]) == 'G')
            complement += 'C';
    }

    complement = reverse_string(complement);

    return complement;
}

string reverse_string(string dna){

    int string_length = dna.size();
    string reverse;

    for (int i = string_length -1; i >= 0; --i)
        reverse += dna[i];
    
    return reverse;
}