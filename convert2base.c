#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char convertRemain(int);

int main(int argc, char **argv) {
    long long quotient, value;
    int base, remainder, spacing, j = 0;
    int array_length = 127;
    char answer[array_length+1]; //array will be large enough to store answer

    base = atoi(argv[1]);
    value = strtoll(argv[2], NULL, 10);
    spacing = floor (log10 (llabs (value))) + 1; //number of digits in value

    while(value > 0){
        remainder = value % base;
        quotient = (value - remainder) / base;
        
        int whitespace = spacing - floor(log10(llabs(quotient)));
        if(quotient == 0)
            whitespace = spacing;
        
        printf("%*llu = %llu * %d + %-*d (%c)\n", spacing, value, quotient, base, whitespace,  remainder, convertRemain(remainder));
        answer[(array_length-1)-j]=convertRemain(remainder);
        
        value = quotient;
        j++;
    }

    while(j > 0){ //prints array with answer
        printf("%c", answer[array_length-j]);
        j--;
    }
    printf("\n");    
    return 0;
}

char convertRemain(int remainder){ //function converts int to ASCII value where 10=A, 11=B, etc.
    if(remainder >9)
       return (remainder + 55);
    else
        return (remainder + 48);
}
