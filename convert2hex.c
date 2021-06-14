#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char convertRemain(int);

int main(int argc, char **argv) {
    long long quotient, value;
    int base, remainder, spacing, j = 0;
    char answer[arr_length+1]; //array will be large enough to store answer

    base = 16;
    value = strtoll(argv[1], NULL, 10);

    spacing = floor (log10 (llabs (value))) + 1; //number of digits in value

    while(value > 0){
        remainder = value % base;
        quotient = (value - remainder) / base;
        
        //calculates whitespace by subtracting quotient's length from original spacing
        int whitespace = spacing - floor(log10(llabs(quotient)));
        if(quotient == 0)
            whitespace = spacing;
        printf("%*llu = %llu * %d + %-*d (%c)\n", spacing, value, quotient, base, whitespace, remainder, convertRemain(remainder));
    
        answer[(arr_length-1)-j]=convertRemain(remainder);
        j++;
        value = quotient;
    }
    printf("0x");
    while(j > 0){ //prints array
        printf("%c", answer[arr_length-j]);
        j--;
    }
    printf("\n\n");    
    return 0;
}

char convertRemain(int remainder){ //function converts int to ASCII value where 10=A, 11=B, etc.
    if(remainder >9)
       return (remainder + 55);
    else
        return (remainder + 48);
}