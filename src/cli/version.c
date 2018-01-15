/*
 * This file is part of linux-driver-management.
 *
 * Copyright © 2016-2018 Ikey Doherty
 *
 * linux-driver-management is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 */

#include <stdio.h>
#include <stdlib.h>

#include "cli.h"
#include "config.h"
#include "util.h"

int ldm_cli_version(__ldm_unused__ int argc, __ldm_unused__ char **argv)
{
        fprintf(stdout, PACKAGE_NAME " - version " PACKAGE_VERSION "\n\n");
        fprintf(stdout, "Copyright © 2016-2018 Ikey Doherty\n\n");
        fprintf(stdout,
                PACKAGE_NAME
                " is free software; you can redistribute it and/or\n"
                "modify it under the terms of the GNU Lesser General Public License as\n"
                "published by the Free Software Foundation; either version 2.1 of the\n"
                "License, or (at your option) any later version.\n");
        return EXIT_SUCCESS;
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */
