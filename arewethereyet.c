/**
 * This program is supposed to run until it receives SIG INT - i.e.
 * until you press CTRL+C.  But instead it segfaults.  What goes wrong?
 * Can you fix it?
 */

#include <signal.h>
#include <stdio.h>

volatile int there = 0;

void do_sigint()
{
    printf ("Detected SIGINT\n");
    there = 1;
}

void playangrybirds()
{
    if (!there)
        playangrybirds();
}

int main()
{
    signal(SIGINT , do_sigint);

    if (!there)
        playangrybirds();

    return 0;
}
