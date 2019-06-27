#include "build_config.h"

// 条件编译主入口

// Skip asm for IOS simulator
#if defined(OS_IOS) && defined(ARCH_CPU_X86_FAMILY)
#define CHACHA20_WITH_ASM 0
#define BLAKE2S_WITH_ASM 0
#endif

#include "wireguard.cpp"
#include "wireguard_proto.cpp"
#include "wireguard_config.cpp"
#include "util.cpp"
#include "tunsafe_threading.cpp"
#include "tunsafe_cpu.cpp"
#include "ip_to_peer_map.cpp"
#include "tunsafe_ipaddr.cpp"
#include "crypto/curve25519/curve25519-donna.cpp"
#include "crypto/chacha20poly1305.cpp"
#include "crypto/blake2s/blake2s.cpp"
#include "crypto/siphash/siphash.cpp"
#include "crypto/aesgcm/aesgcm.cpp"
#include "ipzip2/ipzip2.cpp"

#if defined(WITH_NETWORK_BSD)
#include "network_bsd.cpp"
#include "network_bsd_common.cpp"
#include "ts.cpp"
#include "benchmark.cpp"
#endif

