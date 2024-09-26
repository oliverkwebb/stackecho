Inspiried by a [IOCCC winner from 2019](https://www.ioccc.org/2019/endoh/hint.html),
stackecho will write the characters in its first argument to the stack trace, then
intentionally segfaults. This is done by [X macros](https://en.wikipedia.org/wiki/X_macro);
