/*
    String functions for virtual machine
*/
#ifndef yla_string_h
#define yla_string_h

#include "yla_vm.h"
#include "yla_cop.h"
#include "yla_type.h"
#include "yla_test.h"
#include "yla_compliance.h"

void put_diap_number_post(yla_int_type **prog_ptr, yla_int_type subprog_start_addr, compliance_table *compliance, yla_int_type *prog_counter, yla_int_type global_var[]);
void put_diap_number_pre(yla_int_type **prog_ptr, yla_int_type subprog_start_addr, compliance_table *compliance, yla_int_type *prog_counter, yla_int_type global_var[]);
void put_number_in_diapason(yla_int_type **prog_ptr, yla_int_type subprog_start_addr, compliance_table *compliance, yla_int_type *prog_counter, yla_int_type global_var[]);

#endif