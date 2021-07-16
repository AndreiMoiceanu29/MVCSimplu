#include <iostream>
#include "console.h"
#include "Repository.h"
#include "Service.h"

int main() {
    Repository<Car> repoCar = Repository<Car>();
    Repository<CarWash> repoCarWash = Repository<CarWash>()
    Service service = Service(repoCar, repoCarWash);
    Console console = Console(service);
    console.run();
    return 0;
}
