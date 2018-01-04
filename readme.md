# Bison/Flex compiler

Things to do:
  - project template (done)(tested)
  - variable implementation (done)(tested)
  - tables (done)(tested)
  - adding (done)(tested)
  - subtraction(done)(tested)
  - multiplication (done)(tested)
  - division (done)(tested)
  - remainder (done)(tested)
  - IF (done)(tested)
  - IF+ELSE (done)(tested)
  - cond = (done)(tested)
  - cond <> (done)(tested)
  - cond <  (done)(tested)
  - cond > (done)(tested)
  - cond <= (done)(tested)
  - cond >= (done)(tested)
  - WHILE (done)(tested)
  - FOR UP (done)(tested)
  - FOR DOWN (done)(tested)
  - lines (done)(tested)
  - variable testing (done)(tested)
### Language rules:
- Program structure:
VAR {variable declaration} BEGIN {commands} END
Only static array declarations: e.g. a[100]
- Commands:
-- assignment: e.g.: 
x:=7;
x[6]:=12;
x[y]:=z;
-- For loop structure:
FOR {iterator} FROM {value/variable} TO/DOWNTO {value/variable} DO {commands} ENDFOR
-- While loop structure: 
WHILE {condition} DO {commands} ENDWHILE
-- If structure: 
IF {condition} THEN {commands} [ELSE {commands}] ENDIF
- Operators:
-- ' \+ ' - addition
--' \- ' - subtraction
--' * ' - multiplication
--' \\ ' - division
--' % ' - remainder
-- all numbers are natural, so x-y=max{0,x-y}
-- x\0=0
-- x%0=0
- Conditions:
--  ' = ' - equal
--' <> ' - different
--' < ' - greater
--' <= ' - greater or equal
--' > ' - less than
--' >= ' - less than or equal;

### Assembly commands:

| Command        | Interpretation           | Cost  |
| ------------- |:-------------:| -----:|
| GET     |  save number from input to register a, k=k+1 |100 |
| PUT | show register a, k=k+1| 100 | 
| LOAD i | a=pi, k=k+1 | 10 | 
| LOADI i | a=ppi, k=k+1 | 10 | 
| STORE i| pi=a, k=k+1| 10 | 
| STOREI i|ppi=a, k=k+1| 10 | 
| ADD i| a=a+pi, k=k+1 | 10 | 
| ADDI i| a=a+ppi, k=k+1 | 10 | 
| SUB i| a=a-pi,  k=k+1 | 10 | 
| SUBI i| a=a-ppi, k=k+1|  10| 
| SHR | a=a/2, k=k+1 | 1 | 
| SHL | a=2*a, k=k+1 | 1 | 
| INC | a=a+1, k=k+1 | 1 | 
| DEC | a=a-1, k=k+1 | 1 | 
| ZERO | a=0, k=k+1 | 1 | 
| JUMP j| k=j | 1 | 
| JZERO j| if a=0, k=j else k=k+1 | 1 | 
| JODD j| if a is odd k=j else k=k+1 | 1 | 
| HALT | stop | 0 | 
