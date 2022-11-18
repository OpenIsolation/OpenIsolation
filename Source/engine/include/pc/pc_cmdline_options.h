/**
 * The OpenIsolation Project
 */

#pragma once

static void get_opt_lower_case(const char* opt);

class PC_CMDLINE_OPTIONS {
public:
    static void process(const char* cmdline);
    PC_CMDLINE_OPTIONS* _pc_cmdline_options;
};

static void add_opts(const char* opt);
static void get_opt_lower_case_also_in_final(const char* opt);
