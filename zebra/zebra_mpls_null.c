#include <zebra.h>

#if defined(HAVE_MPLS)
#include "nexthop.h"
#include "zebra/rib.h"
#include "zebra/zserv.h"
#include "zebra/zebra_mpls.h"

int
mpls_str2label (const char *label_str, u_int8_t *num_labels,
                mpls_label_t *labels)
{
  return 0;
}

char *
mpls_label2str (u_int8_t num_labels, mpls_label_t *labels,
                char *buf, int len)
{
  return NULL;
}

int
zebra_mpls_lsp_label_consistent (struct zebra_vrf *zvrf, mpls_label_t in_label,
                     mpls_label_t out_label, enum nexthop_types_t gtype,
                     union g_addr *gate, char *ifname, unsigned int ifindex)
{
  return 1;
}

int
zebra_mpls_static_lsp_add (struct zebra_vrf *zvrf, mpls_label_t in_label,
                     mpls_label_t out_label, enum nexthop_types_t gtype,
                     union g_addr *gate, char *ifname, unsigned int ifindex)
{
  return 0;
}

int
zebra_mpls_static_lsp_del (struct zebra_vrf *zvrf, mpls_label_t in_label,
                           enum nexthop_types_t gtype, union g_addr *gate,
                           char *ifname, unsigned int ifindex)
{
  return 0;
}

void
zebra_mpls_lsp_schedule (struct zebra_vrf *zvrf)
{
}

void
zebra_mpls_print_lsp (struct vty *vty, struct zebra_vrf *zvrf, mpls_label_t label,
                      u_char use_json)
{
}

void
zebra_mpls_print_lsp_table (struct vty *vty, struct zebra_vrf *zvrf,
                            u_char use_json)
{
}

int
zebra_mpls_write_lsp_config (struct vty *vty, struct zebra_vrf *zvrf)
{
  return 0;
}

void
zebra_mpls_close_tables (struct zebra_vrf *zvrf)
{
}

void
zebra_mpls_init_tables (struct zebra_vrf *zvrf)
{
}

void
zebra_mpls_init (void)
{
}
#endif /* HAVE_MPLS */
