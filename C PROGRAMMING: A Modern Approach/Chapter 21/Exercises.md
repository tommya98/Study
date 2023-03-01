1. `/usr/local/include`

2. `assert.h` have a macro hides a function.

3. function prototype must be first. Because macro have to know the function.

4. All of the following information has been taken directly from the C99.

   #### complex.h

   > cerf
   > cerfc
   > cexp2
   > cexpm1
   > clog10
   > clog1p
   > clog2
   > clgamma
   > ctgamma

   As well as all of the above names suffixed with `f` or `l`.

   #### ctype.h

   Names beginning with `is` or `to` followed by a lowercase letter.

   #### errno.h

   Names beginning with `E` and either a digit or uppercase letter.

   #### inttypes.h

   Names beginning with `PRI` or `SCN` followed by a lowercase letter or `X`.

   #### locale.h

   Names beginning with `LC_` and an uppercase letter.

   #### signal.h

   Names beginning with `SIG` or `SIG_` followed by an uppercase letter.

   #### stdbool.h

   `bool`, `true` and `false`.

   #### stdint.h

   Names beginning with `int` or `uint` and ending with `_t`, as well as names beginning with `INT` or `UNIT` and ending in `_MAX`, `_MIN` or `_C`.

   #### stdio.h

   Lowercase letters which may be added to the conversion specifiers and length modifiers in `fprintf` and `fscanf`. `gets` is obsolescent and deprecated, and `ungetc` used on a binary stream where the file position indicated is zero prior to the call is obsolescent.

   #### stdlib.h

   Names beginning with `str` and an uppercase letter.

   #### string.h

   Names beginning with `str`, `mem` or `wcs` and a lowercase letter.

   #### wchar.h

   Names beginning with `wcs` and a lowercase letter. Lowercase letters may be added to the conversion specifiers and length modifiers in `fwprintf` and `fwscanf`. Other characteres may be used in extensions.

   #### wctype.h

   Names beginning with `is` or `to` and a lowercase letter.

5. If `c` is called twice in macro it can have side effects.

6. (a) Becuase macro that beginning with underscore is reserved in the standard library.

   (b) `_ctype` array contain bitfields of length 8.

   ​		`_ctype[9]`contains 00100000.

   ​		`_ctype[32]` contains 00100000.

   ​		`_ctype[65]` contains 00000001.

   ​		`_ctype[94]` contains 00010000.

   (c) It can make program faster.

7. (a) <time.h>

   (b) <ctype.h>

   (c) <limits.h> 

   (d) <math.h>

   (e) <limits.h>

   (f) <float.h>

   (g) <string.h>

   (h) <stdio.h>
