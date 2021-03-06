#ifndef AMREX_GPU_KERNEL_INFO_H_
#define AMREX_GPU_KERNEL_INFO_H_
#include <AMReX_Config.H>

namespace amrex {
namespace Gpu {

class KernelInfo
{
public:
    KernelInfo& setFusible (bool flag) { fusible = flag; return *this; }
    bool isFusible () const { return fusible; }
private:
    bool fusible = false;
};

}}

#endif
