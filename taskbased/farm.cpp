#include "farm.h"

// FIXME - You may need to add #includes here (e.g. <thread>)

void Farm::add_task(Task *task)
{
	// FIXME - Implement this
	std::lock_guard<std::mutex> lockGuardName(coolMutex);
	taskQueue.push(task);
}

void Farm::run()
{
	// FIXME - Implement this

	/* run should use the fork - join pattern, starting as many threads as you have CPUs.
	Write it so that you can easily change the number of CPUs later – i.e.use a collection of thread* s. */

	//ok... how do I make this parallel ? worker threads no. cores.
	while (!taskQueue.empty()) {
		std::lock_guard<std::mutex> lockGuardName(coolMutex);
		taskQueue.pop();
	}

}