#ifndef H_RECURSION
#define H_RECURSION

// Sequence 1: 1, 2, 3, 4, 11, 20, 37, 68, 125, ...

int seq1sumrec(int para);
int seq1sumtailrec(int para, int a0, int a1, int a2, int sum);
int seq1rec(int para);
int seq1tailrec(int para, int a0, int a1, int a2);

// Sequence 2: 1, 2, 3, 7, 13, 23, 43, 79, 145, ...

int seq2sumrec(int para);
int seq2sumtailrec(int para, int a0, int a1, int a2, int a3, int sum);
int seq2rec(int para);
int seq2tailrec(int para, int a0, int a1, int a2, int a3);

// Sequence 3:

int seq3sumrec(int para);
int seq3sumtailrec(int para, int a0, int a1, int a2, int a3, int sum);
int seq3rec(int para);
int seq3tailrec(int para, int a0, int a1, int a2, int a3);

// Sequence 4:

int seq4sumrec(int para);
int seq4sumtailrec(int para, int a0, int a1, int a2, int a3, int sum);
int seq4rec(int para);
int seq4tailrec(int para, int a0, int a1, int a2, int a3);

// Sequence 5:

float seq5rec(int para);
void seq5tailrec(int para, float * arr);


#endif