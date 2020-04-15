#include <array>
#include <fstream>
#include <list>
#include <stack>
#include <utility>
#include <variant>
#include <vector>
#include <zmq.hpp>

#include "libursa/Command.h"
#include "libursa/Database.h"
#include "libursa/DatasetBuilder.h"
#include "libursa/OnDiskDataset.h"
#include "libursa/QueryParser.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage:\n");
        printf("    %s [database]\n", argv[0]);
        return 1;
    }

    // TODO() error handling
    Database::create(argv[1]);
    return 0;
}
