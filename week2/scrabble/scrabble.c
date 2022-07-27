#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("%i %i\n",score1, score2);
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum ;
    int word_points;
   
    for (int i = 0, n = strlen(word); i < n; i++) {
        sum = (tolower(word[i]) - 97);
        
        printf("%i",POINTS[sum]);
        // return sum;
        
        // if (tolower(word[i]) > 96 && tolower(word[i] < 123)) {
        //     word_points = word_points + POINTS[sum];
        //     return word_points;
        // }
    }
    
    printf("\n");
 }