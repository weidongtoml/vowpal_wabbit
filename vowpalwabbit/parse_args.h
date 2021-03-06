/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
 */
#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include "global_data.h"

/**
 * parse_args: parses the command line options and creates the vw
 * object based on the these options.
 */
vw* parse_args(int argc, char *argv[]);

#endif
