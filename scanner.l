%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"


// to keep track of the char position in the line
int position=1;

%}
%option yylineno


/*-----------Define All Types of var-----------*/
ID [a-zA-Z][a-zA-Z0-9_]*
ANYTHING [a-zA-Z0-9_\\. \n]
INTVALUE  ([-]?[1-9][0-9]*)|0
INT "int"
SPACE " "
CONST "const"
TABLEAU "[int]"|"[float]"|"[bool]"|"[string]"
FUNCTION "function"
IF "if"
ELSE "else"
FOR "for"
WHILE "while"
SCAN "scan()"
PRINT "print"
SEMICOLON ";"
CURLY_OPEN_BRACKET "{"
CURLY_CLOSE_BRACKET "}"
OPEN_BRACKET "["
CLOSE_BRACKET "]"
OPEN_PARENTHESIS "("
CLOSE_PARENTHESIS ")"
DOT "."
ADD "+"
SUB "-"
MULT "*"
DIV "/"
POW "**"
MOD "%"
NOT "!"
OR "||"
AND "&&"
EQUAL "=="
SUPERIOR ">"
INFERIOR "<"
SUPERIOR_EQUAL ">="
INFERIOR_EQUAL "<="
NON_EQUAL "!="
ASSIGN "="
FLOATVALUE [-]?[0-9]+[.]?[0-9]+
FLOAT "float"
BOOLVALUE true|false
BOOL "bool"
STRINGVALUE \"(\.|[^"])*\"
STRING "string"
COMMENT (\#[a-zA-Z0-9_\\. ]*)|(\/\*[a-zA-Z0-9_\\. \n]*\*\/)
NULL "Null"
CLASS "class"
VOID "void"
/*------------Delete tabs and white Spaces and comments----------*/
%%
{ADD} {
	printf("ADD",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	
	strcpy(yylval.string,yytext);
	return _ADD;
}
{VOID} {
	printf("VOID",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _VOID;
}
{SUB} {
	printf("SUB",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _SUB;
}
{MULT} {
	printf("MULT",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _MULT;
}
{DIV} {
	printf("DIV",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _DIV;
}
{POW} {
	printf("POW",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _POW;
}
{MOD} {
	printf("MOD",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _MOD;
}
{NOT} {
	printf("NOT",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _NOT;
}
{OR} {
	printf("OR",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _OR;
}
{AND} {
	printf("AND",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _AND;
}
{EQUAL} {
	printf("EQUAL",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _EQUAL;
}
{SUPERIOR} {
	printf("SUPERIOR",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _SUPERIOR;
}
{INFERIOR} {
	printf("INFERIOR",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _INFERIOR;
}
{SUPERIOR_EQUAL} {
	printf("SUPERIOR_EQUAL",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _SUPERIOR_EQUAL;
}
{INFERIOR_EQUAL} {
	printf("INFERIOR_EQUAL",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _INFERIOR_EQUAL;
}
{NON_EQUAL} {
	printf("NON_EQUAL",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _NON_EQUAL;
}

{INT} {
	printf("INT",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _INT;
	}
{INTVALUE} {
	printf("INTVALUE",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		yylval.integer=(int)atoi(yytext);
		return _INTVALUE;
	}
{FLOAT} {
	printf("FLOAT",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _FLOAT;

	}
{FLOATVALUE} {
	printf("FLOATVALUE",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		yylval.real=(float)atof(yytext);
		return _FLOATVALUE;

	}
{BOOL} {
	printf("BOOL",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _BOOL;

	}
{BOOLVALUE} {
	printf("BOOLVALUE",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _BOOLVALUE;

	}
{STRING} {
	printf("STRING",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _STRING;

	}	
{STRINGVALUE} {
	printf("STRINGVALUE",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
		position+=yyleng;
		strcpy(yylval.string,yytext);
		return _STRINGVALUE;

	}	

{NULL}	{
	printf("Null value",yytext);
	printf(" at line %d on char %d  \n", yylineno,position );
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _NULL;

	}
{COMMENT} {
	printf("comment",yytext);
	printf(" at line %d on char %d \n", yylineno,position );
	}

{CONST} {
	printf("Constant declaration",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CONST;

}
{TABLEAU} {
	printf("Table declaration",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _TABLEAU;

}

{FUNCTION} {
	printf("Function declaration",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _FUNCTION;
}

{CLASS} {
	printf("Object declaration",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CLASS;
}
{FOR} {
	printf("For loop",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _FOR;
}
{WHILE} {
	printf("While Loop",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _WHILE;
}

{IF} {
	printf("If condition",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _IF;
}
{ELSE} {
	printf("Else",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _ELSE;
}
{SCAN} {
	printf("Input",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _SCAN;
}
{PRINT} {
	printf("Output",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _PRINT;
}
{SEMICOLON} {
	printf("End of line",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _SEMICOLON;

}


{OPEN_BRACKET} {
	printf("Open Bracket",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _OPEN_BRACKET;
}
{CLOSE_BRACKET} {
	printf("Close Bracket",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CLOSE_BRACKET;
}
{CURLY_OPEN_BRACKET} {
	printf("Curly Open Bracket",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CURLY_OPEN_BRACKET;
}
{CURLY_CLOSE_BRACKET} {
	printf("Curly Close Bracket",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CURLY_CLOSE_BRACKET;
}
{OPEN_PARENTHESIS} {
	printf("Open Parenthesis",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _OPEN_PARENTHESIS;
}
{CLOSE_PARENTHESIS} {
	printf("Close Parenthesis",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _CLOSE_PARENTHESIS;
}
{DOT} {
	printf("Dot",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _DOT;
}
{ASSIGN} {
	printf("ASSIGN",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _ASSIGN;
}

{ID} {
	printf("Identifier",yytext);
	printf(" at line %d on char %d  \n", yylineno,position);
	position+=yyleng;
	strcpy(yylval.string,yytext);
	return _ID;
}
{SPACE} {
	position+=1;
}
\n {
	position=1;
}
\r {
	
}


. {
	printf("Lexical error",yytext);
	printf(" at line %d on char %d \n", yylineno,position);	
	position+=yyleng;
	}
%%
int yywrap(){
};


