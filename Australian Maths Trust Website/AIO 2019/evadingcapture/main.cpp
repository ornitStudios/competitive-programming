/*
 * Solution Template for Evading Capture
 *
 * Australian Informatics Olympiad 2019
 *
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;





/* N is the number of cities. */
int N;

/* E is the number of adjacent pairs of cities. */
int E;

/* X is the starting city */
int X;

/* K is the number of hops you must make */
int K;

int answer;


queue<int> bfs; //node name is int
bool seen[100005];


int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("evadingin.txt", "r");
    FILE *output_file = fopen("evadingout.txt", "w");

    /* Read the value of N, E, X and K. */
    fscanf(input_file, "%d%d%d%d", &N, &E, &X, &K);



    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
