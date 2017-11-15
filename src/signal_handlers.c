#include "signal_handlers.h"

void catch_sigint(int signalNo)
{
	signal(SIGINT,(void *)catch_sigint);
    	 printf("SIGNAL");
}

void catch_sigtstp(int signalNo)
{
  // TODO: File this!
}
