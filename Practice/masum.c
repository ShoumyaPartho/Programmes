#include<stdio.h>

void findIQ(int actual_age, int correct_ans){
    int ans = (10+correct_ans)*5;

    printf("Your IQ is: %d\n\nClassification: ",ans);

    if(ans>=130)
        printf("Very Superior\n");

    else if(ans>=120)
        printf("Superior\n");

    else if(ans>=110)
        printf("High Average\n");

    else if(ans>=90)
        printf("Average\n");

    else if(ans>=80)
        printf("Low Average\n");

    else printf("Low\n");

}

int main(){
    int actual_age, correct_ans;

    printf("Enter Actual Age: ");
    scanf("%d",&actual_age);
    printf("Enter no.of correct answers: ");
    scanf("%d",&correct_ans);

    findIQ(actual_age, correct_ans);

    return 0;
}
