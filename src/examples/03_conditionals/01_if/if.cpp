//write include statement for if header




//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise


bool is_number_in_range(int min_range, int max_range, int num)
{
    bool in_range = false;

    //boolean expression
    in_range = num >= min_range and num <= max_range;

    return in_range;
}

bool is_vowel(char letter)
{
    return letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u';
}

bool is_consonant(char letter)
{
    return not is_vowel(letter);
}