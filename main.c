#include <stdio.h>

/* печать таблицы теператур */

main ()
   {
   	    int fahr, celsius;
   	    int lower, upper, step;

   	    lower = 0; /* нижняя граница */
   	    upper =300; /* верхняя граница */
   	    step = 20; /* сдвиг */

   	    fahr = lower;
   	    while (fahr <= upper) {
   	    	celsius = 5 * (fahr-32) / 9;
   	    	printf("%d\t%d\n", fahr, celsius);
   	    	fahr = fahr + step;
   	    }
   }
