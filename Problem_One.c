#include <stdio.h>

/*
• Touchdown (TD) + 2-point conversion worth 8 points
• Touchdown (TD) + 1-point field goal worth 7 points
• Touchdown (TD) worth 6 points
• Field goal (FG) worth 3 points
• Safety worth 2 points
*/

int switch_case;

void score_catcher(int whole_score) {

    int the_sum_pts, Safety, FG, TD, TD_1pt_FG, TD_2pts, is_the_sum_possible = 1;

    while (the_sum_pts != whole_score) {

        if (is_the_sum_possible) {
            the_sum_pts = (Safety*2) + (FG*3) + (TD*6) + (TD_1pt_FG*7) + (TD_2pts*8);
        }

    }
    
}

int main() {
    int score, possible_pts[4];


    printf("Enter a value less than 2 to stop the program.");
    printf("Enter the score: ");
    scanf("%d", &score);

    while (score > 2) {
        
        score_catcher(score);
        printf("Enter the score: ");
        scanf("%d", &score);
    }
}