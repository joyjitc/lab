%{
	#include "y.tab.h"
%}
%%
[0-9] return NUM;
[a-zA-Z_] return A;
. return E;
\n return 0;
%%
