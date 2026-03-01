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

    int the_sum_pts, Safety, FG, TD, TD_1pt_FG, TD_2pts;

    for (TD_2pts = 0; TD_2pts <= whole_score/8; TD_2pts++) {
        // Loop runs for how many times you could add the 8 point in the score to match the
        // total point.
        for (TD_1pt_FG = 0; TD_1pt_FG <= whole_score/7; TD_1pt_FG++) {

        

        }

    }
    
}

            // if (the_sum_pts == whole_score) {
            //     the_sum_pts = (Safety*2) + (FG*3) + (TD*6) + (TD_1pt_FG*7) + (TD_2pts*8);
            //     //Multiplying the points value each with their number.
            // }

int main() {
    int score;


    printf("Enter a value less than 2 to stop the program.");
    printf("Enter the score: ");
    scanf("%d", &score);

    while (score > 2) {
        
        score_catcher(score);
        printf("Enter the score: ");
        scanf("%d", &score);
    }
}