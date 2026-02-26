#include <stdio.h>

/*
• Touchdown (TD) + 2-point conversion worth 8 points
• Touchdown (TD) + 1-point field goal worth 7 points
• Touchdown (TD) worth 6 points
• Field goal (FG) worth 3 points
• Safety worth 2 points
*/

// score(odd) - (even point)nearest even multiplicant - 1 + One odd score
// score(even) - (odd point)nearest odd multiplicant - 1 + One even score


int TD_2pts() {
    
}

int TD_1pt_FG() {
    
}

int TD() {
    
}

int FG() {
    
}

int Safety(int whole_score, int score_box[4]) {

    int ODD_score = 1; // True

    if ((whole_score%2) == 0) {
        ODD_score = 0; // if it is divisible by 2 it is even, hence the value is False
    }

    for (int i =1; i<=whole_score; i++) {
        if (ODD_score) {

        }
    }

}

void printer() {
    
}

int main() {
    int score, possible_pts[4];


    printf("Enter a value less than 2 to stop the program.");
    printf("Enter the score: ");
    scanf("%d", &score);


    while (score > 2) {

    }
}