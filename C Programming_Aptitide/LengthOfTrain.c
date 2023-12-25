/*******************************************************************************
Aptitide - C Programming Day_1
A train travelling at a constant speed crosses 120m long platform in 15sec and
164m long platform in 19 sec. Find the length of the train?
*******************************************************************************/

#include<stdio.h>
int main()
{
    //Platform 1 has 120 meters and platform 2 has 164 meters
    float p1, p2;

    //sec : seconds
    float sec1, sec2;

    //ltrain : Length of the train
    float ltrain,distance, time, speed, Dist,temp;

    //Taking inputs of length of platform 1 and speed of train from user
    printf("Enter the length of the platform 1 in meters\n");
    scanf("%f",&p1);

    printf("Enter the speed of train passed on platform 1 in seconds\n");
    scanf("%f",&sec1);

    //Taking inputs of length of platform 2 and speed of train from user
    printf("Enter the length of the platform 2 in meters\n");
    scanf("%f",&p2);

    printf("Enter the speed of train passed on platform 2 in seconds\n");
    scanf("%f",&sec2);

    printf("Train travelling at a constant speed crosses %f meters long platform"
            "in %f sec\n",p1,sec1);
    printf("Same Train travelling at a constant speed crosses %f meters long"
            "platform in %f sec\n",p2,sec2);

    //If 1st platform length is long then swap with 2nd platform length
    if(p1>p2)
    {
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    //If 1st platform train speed is fast then swap with 2nd platform train speed
    if(sec1>sec2)
    {
        temp = sec1;
        sec1 = sec2;
        sec2 = temp;
    }

    //distance between twp platforms
    distance = p2 - p1;
    //Time difference between speed at 2 platforms
    time = sec2 - sec1;
    speed = distance / time;
    Dist = sec1 * speed;
    ltrain = Dist - p1;

    printf("Length of the train is: %.2f meters\n",ltrain);

    return 0;
}
